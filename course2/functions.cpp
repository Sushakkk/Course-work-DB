#include "functions.h"
#include <QMessageBox>         // Подключаем заголовочный файл для вывода сообщений
#include <QSqlQuery>           // Подключаем заголовочный файл для выполнения SQL-запросов
#include <QSqlError>           // Подключаем заголовочный файл для работы с ошибками SQL
#include <QTimer>              // Подключаем заголовочный файл для работы с таймерами
#include <QDebug>
#include <QHeaderView>
#include "admin.h"

#include <QtSql/QSqlRecord>
#include <QtSql/QSqlField>

#include <QDateTime>


#include <QLineEdit>
#include <QList>
#include <QWidget>
#include <QComboBox>




void Table(QTableWidget *tableWidget, const QStringList &columnNames){
    int columnCount = columnNames.size();

    // Устанавливаем количество столбцов в компоненте таблицы
    tableWidget->setColumnCount(columnCount);

    // Задаем заголовки столбцов таблицы
    for (int i = 0; i < columnCount; ++i)
    {
        tableWidget->setHorizontalHeaderItem(i, new QTableWidgetItem(columnNames.at(i)));
    }

    // Отключаем растягивание последнего столбца
    tableWidget->horizontalHeader()->setStretchLastSection(false);

    // Устанавливаем явную ширину последнего столбца
    tableWidget->horizontalHeader()->resizeSection(columnCount - 1, 300); // Здесь 150 - ваша желаемая ширина столбца

    // Включаем возможность прокрутки содержимого таблицы
    tableWidget->setAutoScroll(true);

    // Устанавливаем режим выделения ячеек: только одна строка
    tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

    // Разрешаем пользователю сортировать данные по столбцам
    tableWidget->setSortingEnabled(true);
    //tableWidget->sortByColumn(0, Qt::AscendingOrder);

    // Запрещаем редактирование ячеек таблицы
    tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
}



void clearComboBoxes(const QList<QWidget*> &fieldWidgets) {
    for (QWidget *widget : fieldWidgets) {
        if (QComboBox *comboBox = qobject_cast<QComboBox*>(widget)) {
            comboBox->setCurrentIndex(-1);
        }
    }
}





void insert_ComboBoxFro(QTextEdit *teResult, QSqlDatabase &dbconn, QComboBox *comboBox, const QString &tableName, const QPair<QString, QString> &columns, int count) {
    dbconnect_f(dbconn, teResult);
    comboBox->clear(); // Очищаем содержимое комбобокса

    QString queryStr; // Объявляем переменную queryStr здесь

    if(count==0){
        queryStr = QString("SELECT %1 FROM %2 ORDER BY %1").arg(columns.first, tableName);
        qDebug() << "Query: " << queryStr; // Отладочное сообщение для проверки запроса
    }
    else{
        // Формируем SQL-запрос для извлечения значений из указанных столбцов с сортировкой по первому параметру
        queryStr = QString("SELECT %1, %2 FROM %3 ORDER BY %1").arg(columns.first, columns.second, tableName);
        qDebug() << "Query: " << queryStr; // Отладочное сообщение для проверки запроса
    }

    // Выполняем запрос к базе данных
    QSqlQuery query(dbconn);
    if (!query.exec(queryStr)) {
        qDebug() << "Error executing query:" << query.lastError().text();
        return;
    }

    // Добавляем данные из результатов запроса в комбобокс
    while (query.next()) {
        if(count==2){
            QString value = query.value(0).toString() + "  |  " + query.value(1).toString();
            comboBox->addItem(value);
        }
        else if (count==0){
            QString value = query.value(0).toString();
            comboBox->addItem(value);
        }
        else{
            QString value = query.value(1).toString();
            comboBox->addItem(value);
        }
    }
}



void goto_admin(QWidget *window) {
    admin adminW;
    window->hide(); // Скрываем текущее окно
    adminW.exec();
}



void dbconnect_f(QSqlDatabase &dbconn, QTextEdit *teResult)
{
    dbconn = QSqlDatabase::database();
    // Проверка, открыто ли соединение с базой данных
    if(!dbconn.isOpen())
    {
        // Если соединение не открыто, вывести список доступных драйверов БД
        teResult->append("SQL drivers:");
        teResult->append(QSqlDatabase::drivers().join(","));

        // Создание глобальной переменной для установки соединения с БД
        dbconn = QSqlDatabase::addDatabase("QPSQL");

        // Установка параметров соединения: имя БД, адрес хоста, логин и пароль пользователя, порт (если отличается от стандартного)
        dbconn.setDatabaseName("Main_base");
        dbconn.setHostName("localhost");
        dbconn.setUserName("student");
        dbconn.setPassword("123");

        if( dbconn.open() )
        {
            teResult->append("Connect is open...");

        }
        else
        {
            teResult->append("Error of connect:");
            teResult->append(dbconn.lastError().text());

        }
    }
    else
    {
        // Если соединение уже открыто, то сообщить об этом
        teResult->append("Connect is already open...");

    }
}



void selectAll_f(QSqlDatabase &dbconn, QTextEdit *teResult, QTableWidget *twOrg, const QString &tableName, const QStringList &fieldNames)
{
    dbconnect_f(dbconn, teResult);
    if (!dbconn.isOpen())
    {
        teResult->append("Error: Database connection is not open.");
        return;
    }

    QSqlQuery query(dbconn);

    QString sqlstr = QString("SELECT %1 FROM %2 ORDER BY %3")
                         .arg(fieldNames.join(", "))
                         .arg(tableName)
                         .arg(fieldNames.at(0)); // Первое поле для сортировки

    if (!query.exec(sqlstr))
    {
        teResult->append("Error executing query:");
        teResult->append(query.lastError().text());
        return;
    }

    // Clear table contents
    twOrg->clearContents();

    // Resize table to fit the data
    twOrg->setRowCount(0); // Clear rows
    twOrg->setColumnCount(fieldNames.size());

    int i = 0;
    while (query.next())
    {
        twOrg->insertRow(i); // Insert new row
        for (int j = 0; j < fieldNames.size(); ++j)
        {
            QString fieldName = fieldNames.at(j);
            QTableWidgetItem *item = new QTableWidgetItem();
            // Check if the field contains the word "total" and is numeric
            if (fieldName.contains("sum", Qt::CaseInsensitive) &&
                (query.record().field(fieldName).type() == QVariant::Double ||
                 query.record().field(fieldName).type() == QVariant::Int ||
                 query.record().field(fieldName).type() == QVariant::LongLong))
            {
                // Set numeric data with fixed-point notation
                item->setText(QString::number(query.value(fieldName).toDouble(), 'f', 2));
            }
            else
            {
                // Set text data
                item->setText(query.value(fieldName).toString());
            }
            twOrg->setItem(i, j, item);
        }

        // Установка выравнивания элементов таблицы
        for (int j = 0; j < fieldNames.size(); ++j)
        {
            QTableWidgetItem *item = twOrg->item(i, j);
            if (item)
                item->setTextAlignment(Qt::AlignCenter);
        }

        i++;
    }

    // Resize columns to fit contents
    twOrg->resizeColumnsToContents();
}




void add_f(QSqlDatabase &dbconn, const QStringList &columnNames, const QList<QWidget*> &fieldWidgets, QTextEdit *teResult, const QString &tableName)
{
    QStringList values;
    for (const auto &widget : fieldWidgets) {
        if (auto lineEdit = qobject_cast<QLineEdit*>(widget)) {
            values << lineEdit->text();
        } else if (auto comboBox = qobject_cast<QComboBox*>(widget)) {
            QString currentValue = comboBox->currentText();
            // Проверяем, содержит ли текущее значение комбобокса разделитель " | "
            if (currentValue.contains("  |  ")) {
                // Если содержит, оставляем только число
                QStringList parts = currentValue.split("  |  ");
                if (parts.size() == 2) {
                    values << parts[0].trimmed(); // Добавляем первую часть (числовую) в список значений
                } else {
                    // Если разделение не удалось, добавляем текущее значение как есть
                    values << currentValue;
                }
            } else {
                // Если значение не содержит разделителя, добавляем его как есть
                values << currentValue;
            }
        }
    }

    if (!dbconn.isOpen()) {
        dbconnect_f(dbconn, teResult);
        if (!dbconn.isOpen()) {
            QMessageBox::critical(nullptr, "Error", dbconn.lastError().text());
            return;
        }
    }

    QSqlQuery countQuery(dbconn);
    if (!countQuery.exec(QString("SELECT COUNT(*) FROM %1").arg(tableName))) {
        teResult->append(countQuery.lastQuery());
        QMessageBox::critical(nullptr, "Error", countQuery.lastError().text());
        return;
    }

    countQuery.next();
    int rowCount = countQuery.value(0).toInt(); // Получаем количество строк в таблице
    int newID = rowCount + 1; // Генерируем новый ID

    // Заменяем первый параметр (ID) на новый уникальный идентификатор
    QStringList modifiedValues = values;
    modifiedValues.replace(0, QString::number(newID));

    // Заменяем значения для полей, содержащих слово "date", на текущее время
    for (int i = 0; i < columnNames.size(); ++i) {
        if (columnNames.at(i).contains("date")) {
            modifiedValues.replace(i, QDateTime::currentDateTime().toString(Qt::ISODate));
        }
    }

    QSqlQuery query(dbconn);

    QString sqlstr = QString("INSERT INTO %1 (%2) VALUES (%3)")
                         .arg(tableName)
                         .arg(columnNames.join(", "))
                         .arg(QStringList(modifiedValues.size(), "?").join(", "));

    query.prepare(sqlstr);

    // Привязываем значения к параметрам запроса
    for (int i = 0; i < modifiedValues.size(); ++i) {
        query.bindValue(i, modifiedValues.at(i));
    }

    if (!query.exec()) {
        teResult->append(query.lastQuery());
        QMessageBox::critical(nullptr, "Error", query.lastError().text());
        return;
    }

    teResult->append(QString("Added %1 rows").arg(query.numRowsAffected()));
}




void remove_t(QSqlDatabase &dbconn, QTextEdit *teResult, QTableWidget *tableWidget, const QString &tableName, int row, const QStringList &columnNames) {
    if (!dbconn.isOpen()) {
        dbconnect_f(dbconn, teResult);
        if (!dbconn.isOpen()) {
            QMessageBox::critical(nullptr, "Error", dbconn.lastError().text());
            return;
        }
    }

    if (row < 0 || row >= tableWidget->rowCount()) {
        QMessageBox::critical(nullptr, "Error", "Invalid row index!");
        return;
    }

    if (QMessageBox::question(nullptr, "Information", "Удалить запись?", QMessageBox::Cancel, QMessageBox::Ok) == QMessageBox::Cancel)
        return;

    QSqlQuery query(dbconn);

    QString idColumnName = columnNames.value(0); // Предполагаем, что client_ID находится в первом столбце
    QString id = tableWidget->item(row, 0)->text(); // Получаем значение ID из таблицы

    QString sqlstr = "DELETE FROM " + tableName + " WHERE " + idColumnName + " = '" + id + "'";

    if (!query.exec(sqlstr)) {
        QMessageBox::critical(nullptr, "Error", query.lastError().text());
        return;
    }

    // QMessageBox::information(nullptr, "Удаление", "Запись удалена!");
    // tableWidget->removeRow(row);
}



void del_f(const QList<QWidget*> &fieldWidgets) {
    // Очищаем значения полей ввода
    for (auto widget : fieldWidgets) {
        // Проверяем, является ли виджет полем ввода
        if (auto lineEdit = qobject_cast<QLineEdit*>(widget)) {
            lineEdit->clear(); // Если да, очищаем его
        } else if (auto comboBox = qobject_cast<QComboBox*>(widget)) {

            comboBox->setCurrentIndex(-1);
        } else {
            // Если не является ни одним из вышеуказанных типов, выводим предупреждение
            qDebug() << "Widget is not a QLineEdit or QComboBox and cannot be cleared!";
        }
    }
}



void on_click_f(QTableWidget *twOrg, QTextEdit *teResult, const QStringList &fieldNames, const QList<QWidget*> &fieldWidgets) {
    int curRow = twOrg->currentRow();

    // Проверяем, что выбранная строка действительно существует
    if (curRow < 0 || curRow >= twOrg->rowCount()) {
        // Если выбранная строка не существует, сбрасываем значения полей ввода и выходим из функции
        del_f(fieldWidgets);
        return;
    }

    // Получаем значения из выбранной строки
    QStringList fieldValues;
    for (int i = 0; i < fieldNames.size(); ++i) {
        QString value = twOrg->item(curRow, i) ? twOrg->item(curRow, i)->text() : "";
        fieldValues << value;
    }

    // Очищаем значения полей ввода
    del_f(fieldWidgets);

    // Заполняем поля ввода значениями из списка
    for (int i = 0; i < fieldValues.size(); ++i) {
        if (i < fieldWidgets.size()) {
            // Проверяем, является ли виджет полем ввода
            if (auto lineEdit = qobject_cast<QLineEdit*>(fieldWidgets[i])) {
                lineEdit->setText(fieldValues[i]); // Если да, устанавливаем текст
            } else if (auto comboBox = qobject_cast<QComboBox*>(fieldWidgets[i])) {
                int index = comboBox->findText(fieldValues[i]);
                if (index != -1) {
                    comboBox->setCurrentIndex(index);
                }
            } else {
                // Если не является ни одним из вышеуказанных типов, выводим предупреждение
                qDebug() << "Widget is not a QLineEdit or QComboBox and cannot be set with text!";
            }
        } else {
            qDebug() << "Not enough input fields to set all values!";
            break;
        }
    }
}



void edit_f(QSqlDatabase &dbconn, QTextEdit *teResult, QTableWidget *tableWidget, const QStringList &columnNames, const QList<QWidget*> &fieldWidgets, int curRow, const QString &tableName) {
    if (!dbconn.isOpen()) {
        dbconnect_f(dbconn, teResult);
        if (!dbconn.isOpen()) {
            QMessageBox::critical(nullptr, "Error", dbconn.lastError().text());
            return;
        }
    }

    // Проверяем, выбрана ли строка
    if (curRow < 0 || curRow >= tableWidget->rowCount()) {
        QMessageBox::critical(nullptr, "Error", "No row selected!");
        return;
    }

    // Получаем значение ID из таблицы
    QString id = tableWidget->item(curRow, 0)->text();

    // Получаем значения полей из виджетов
    QStringList fieldValues;
    for (int i = 0; i < fieldWidgets.size(); ++i) {
        // Проверяем, является ли виджет полем ввода
        if (auto lineEdit = qobject_cast<QLineEdit*>(fieldWidgets[i])) {
            fieldValues << lineEdit->text(); // Если да, получаем текст
        } else if (auto comboBox = qobject_cast<QComboBox*>(fieldWidgets[i])) {
            fieldValues << comboBox->currentText(); // Если это QComboBox, получаем текущий текст
        } else {
            // Если не является ни одним из вышеуказанных типов, добавляем пустую строку
            fieldValues << "";
            qDebug() << "Widget is not a QLineEdit or QComboBox and cannot get text!";
        }
    }

    // Сравниваем значение ID поля с соответствующим значением в таблице
    if (fieldValues[0] != id) {
        QMessageBox::information(nullptr, "Information", "Менять ID нельзя!");
        return;
    }

    // Проверяем, изменились ли данные
    bool dataChanged = false;
    for (int i = 1; i < fieldValues.size(); ++i) {
        if (fieldValues[i] != tableWidget->item(curRow, i)->text()) {
            dataChanged = true;
            break;
        }
    }

    if (!dataChanged) {
        QMessageBox::information(nullptr, "Information", "Данные не изменились.");
        return;
    }

    // Предложение подтверждения изменений
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(nullptr, "Edit", "Вы уверены, что хотите изменить данные?", QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::No) {
        return;
    }

    QSqlQuery query(dbconn);

    QString sqlstr = QString("UPDATE %1 SET ").arg(tableName);
    QStringList updateValues; // Временный список для значений полей, кроме поля с датой

    for (int i = 1; i < columnNames.size(); ++i) {
        if (columnNames[i].toLower().contains("date")) {
            if (fieldValues[i] != tableWidget->item(curRow, i)->text()) {
                QMessageBox::information(nullptr, "Information", QString("Нельзя изменить Дату!"));
            }
        } else {
            sqlstr += QString("%1 = ?, ").arg(columnNames[i]); // Добавляем имя поля в запрос UPDATE
            updateValues << fieldValues[i]; // Добавляем значение поля во временный список
        }
    }

    sqlstr.chop(2); // Удаляем последнюю запятую и пробел
    sqlstr += QString(" WHERE %1 = ?").arg(columnNames[0]); // Используем ID для фильтрации

    query.prepare(sqlstr);

    int paramIndex = 0; // Индекс параметра в запросе

    // Привязываем значения к параметрам запроса
    for (int i = 0; i < updateValues.size(); ++i) {
        query.bindValue(paramIndex, updateValues[i]);
        ++paramIndex;
    }

    // Последний параметр (ID)
    query.bindValue(paramIndex, id);

    if (!query.exec()) {
        QMessageBox::critical(nullptr, "Error", query.lastError().text());
        return;
    }

    // Выводим сообщение об успешном обновлении данных
    teResult->append(QString("Updated %1 rows").arg(query.numRowsAffected()));
}





// void selectAll_f(QSqlDatabase &dbconn, QTextEdit *teResult, QTableWidget *twOrg, const QString &tableName, const QStringList &fieldNames)
// {
//     dbconnect_f(dbconn, teResult);
//     if (!dbconn.isOpen())
//     {
//         teResult->append("Error: Database connection is not open.");
//         return;
//     }

//     QSqlQuery query(dbconn);

//     QString sqlstr = QString("SELECT %1 FROM %2 ORDER BY %3")
//                          .arg(fieldNames.join(", "))
//                          .arg(tableName)
//                          .arg(fieldNames.at(0));

//     if (!query.exec(sqlstr))
//     {
//         teResult->append("Error executing query:");
//         teResult->append(query.lastError().text());
//         return;
//     }

//     // Clear table contents
//     twOrg->clearContents();

//     // Resize table to fit the data
//     twOrg->setRowCount(0); // Clear rows
//     twOrg->setColumnCount(fieldNames.size());

//     int i = 0;
//     while (query.next())
//     {
//         //qDebug() << "Строка:" << i;
//         twOrg->insertRow(i); // Insert new row
//         for (int j = 0; j < fieldNames.size(); ++j)
//         {
//             QString fieldName = fieldNames.at(j);
//             //qDebug() << "Столбец:" << j << "Поле:" << fieldName;
//             QTableWidgetItem *item = new QTableWidgetItem(query.value(fieldName).toString());
//             twOrg->setItem(i, j, item);
//         }

//         // Установка выравнивания элементов таблицы
//         for (int j = 0; j < fieldNames.size(); ++j)
//         {
//             QTableWidgetItem *item = twOrg->item(i, j);
//             if (item)
//                 item->setTextAlignment(Qt::AlignCenter);
//             // else
//             //     qDebug() << "Элемент в строке" << i << "и столбце" << j << "равен нулю!";
//         }

//         i++;
//     }

//     // Resize columns to fit contents
//     twOrg->resizeColumnsToContents();
// }




// void del_f(const QList<QLineEdit*> &fieldWidgets) {
//     // Очищаем значения полей ввода
//     for (auto widget : fieldWidgets) {
//         widget->clear();
//     }
// }

// void on_click_f(QTableWidget *twOrg, QTextEdit *teResult, const QStringList &fieldNames, const QList<QLineEdit*> &fieldWidgets) {
//     int curRow = twOrg->currentRow();

//     // Проверяем, что выбранная строка действительно существует
//     if (curRow < 0 || curRow >= twOrg->rowCount()) {
//         // Если выбранная строка не существует, сбрасываем значения полей ввода и выходим из функции
//         del_f(fieldWidgets);
//         return;
//     }

//     // Получаем значения из выбранной строки
//     QStringList fieldValues;
//     for (int i = 0; i < fieldNames.size(); ++i) {
//         QString value = twOrg->item(curRow, i) ? twOrg->item(curRow, i)->text() : "";
//         fieldValues << value;
//     }

//     // Очищаем значения полей ввода
//     del_f(fieldWidgets);

//     // Заполняем поля ввода значениями из списка
//     for (int i = 0; i < fieldValues.size(); ++i) {
//         if (i < fieldWidgets.size()) {
//             fieldWidgets[i]->setText(fieldValues[i]);
//         } else {
//             qDebug() << "Not enough input fields to set all values!";
//             break;
//         }
//     }
// }



// void edit_f(QSqlDatabase &dbconn, QTextEdit *teResult, QTableWidget *tableWidget, const QStringList &columnNames, const QList<QLineEdit*> &fieldWidgets, int curRow, const QString &tableName) {
//     if (!dbconn.isOpen()) {
//         dbconnect_f(dbconn, teResult);
//         if (!dbconn.isOpen()) {
//             QMessageBox::critical(nullptr, "Error", dbconn.lastError().text());
//             return;
//         }
//     }

//     // Проверяем, выбрана ли строка
//     if (curRow < 0 || curRow >= tableWidget->rowCount()) {
//         QMessageBox::critical(nullptr, "Error", "No row selected!");
//         return;
//     }


//     // Получаем значения полей из виджетов
//     QStringList fieldValues;

//     for (int i = 0; i < fieldWidgets.size(); ++i) { // Начинаем с 1, чтобы пропустить ID
//         fieldValues << fieldWidgets[i]->text();

//     }



//     // Сравниваем значение поля с соответствующим значением в таблице
//     if (fieldWidgets[0]->text() != tableWidget->item(curRow, 0)->text()) { // Предполагается, что ID находится на первом месте в списке fieldWidgets
//         QMessageBox::information(nullptr, "Information", "Менять ID нельзя!");
//         return;
//     }


//     // Проверяем, изменились ли данные
//     bool dataChanged = false;
//     for (int i = 0; i < fieldValues.size(); ++i) {
//         if (fieldValues[i] != tableWidget->item(curRow, i + 1)->text()) { // Сдвигаем индекс на 1 из-за пропуска ID
//             dataChanged = true;
//             break;
//         }
//     }

//     if (!dataChanged) {
//         QMessageBox::information(nullptr, "Information", "Данные не изменились.");
//         return;
//     }

//     // Предложение подтверждения изменений
//     QMessageBox::StandardButton reply;
//     reply = QMessageBox::question(nullptr, "Edit", "Вы уверены, что хотите изменить данные?", QMessageBox::Yes|QMessageBox::No);
//     if (reply == QMessageBox::No) {
//         return;
//     }



//     QSqlQuery query(dbconn);

//     QString sqlstr = QString("UPDATE %1 SET ").arg(tableName);
//     for (int i = 1; i < columnNames.size(); ++i) { // Начинаем с 1, чтобы пропустить ID
//         sqlstr += QString("%1 = ?, ").arg(columnNames[i]);
//     }
//     sqlstr.chop(2); // Удаляем последнюю запятую и пробел
//     sqlstr += QString(" WHERE %1 = ?").arg(columnNames[0]); // Используем ID для фильтрации

//     query.prepare(sqlstr);

//     int paramIndex = 0; // Индекс параметра в запросе

//     // Привязываем значения к параметрам запроса
//     for (int i = 1; i < fieldValues.size(); ++i) { // Начинаем с 1, чтобы пропустить ID
//         query.bindValue(paramIndex, fieldValues[i]);
//         ++paramIndex;
//     }

//     // Последний параметр (ID)
//     query.bindValue(paramIndex, fieldValues[0]);

//     if (!query.exec()) {
//         QMessageBox::critical(nullptr, "Error", query.lastError().text());
//         return;
//     }







//     // Выводим сообщение об успешном обновлении данных
//     teResult->append(QString("Updated %1 rows").arg(query.numRowsAffected()));

// }






// void edit_f(QSqlDatabase &dbconn, QTextEdit *teResult, QTableWidget *tableWidget, const QStringList &columnNames, const QList<QLineEdit*> &fieldWidgets, int curRow, const QString &tableName) {
//     if (!dbconn.isOpen()) {
//         dbconnect_f(dbconn, teResult);
//         if (!dbconn.isOpen()) {
//             QMessageBox::critical(nullptr, "Error", dbconn.lastError().text());
//             return;
//         }
//     }

//     // Проверяем, выбрана ли строка
//     if (curRow < 0 || curRow >= tableWidget->rowCount()) {
//         QMessageBox::critical(nullptr, "Error", "No row selected!");
//         return;
//     }


//     // Получаем значения полей из виджетов
//     QStringList fieldValues;

//     for (int i = 0; i < fieldWidgets.size(); ++i) { // Начинаем с 1, чтобы пропустить ID
//         fieldValues << fieldWidgets[i]->text();

//     }



//     // Сравниваем значение поля с соответствующим значением в таблице
//     if (fieldWidgets[0]->text() != tableWidget->item(curRow, 0)->text()) { // Предполагается, что ID находится на первом месте в списке fieldWidgets
//         QMessageBox::information(nullptr, "Information", "Менять ID нельзя!");

//     }

//     // Проверяем, изменились ли данные
//     bool dataChanged = false;
//     for (int i = 0; i < fieldValues.size(); ++i) {
//         if (fieldValues[i] != tableWidget->item(curRow, i + 1)->text()) { // Сдвигаем индекс на 1 из-за пропуска ID
//             dataChanged = true;
//             break;
//         }
//     }

//     if (!dataChanged) {
//         QMessageBox::information(nullptr, "Information", "Данные не изменились.");
//         return;
//     }

//     // Предложение подтверждения изменений
//     QMessageBox::StandardButton reply;
//     reply = QMessageBox::question(nullptr, "Edit", "Вы уверены, что хотите изменить данные?", QMessageBox::Yes|QMessageBox::No);
//     if (reply == QMessageBox::No) {
//         return;
//     }

//     QSqlQuery query(dbconn);

//     QString sqlstr = QString("UPDATE %1 SET ").arg(tableName);
//     QStringList updateValues; // Временный список для значений полей, кроме поля с датой

//     for (int i = 1; i < columnNames.size(); ++i) {
//         if (columnNames[i].toLower().contains("date")) {
//             if (fieldValues[i] != tableWidget->item(curRow, i)->text()) {
//                 QMessageBox::information(nullptr, "Information", QString("Нельзя изменить Дату!"));

//             }
//         } else {
//             sqlstr += QString("%1 = ?, ").arg(columnNames[i]); // Добавляем имя поля в запрос UPDATE
//             updateValues << fieldValues[i]; // Добавляем значение поля во временный список
//         }
//     }

//     sqlstr.chop(2); // Удаляем последнюю запятую и пробел
//     sqlstr += QString(" WHERE %1 = ?").arg(columnNames[0]); // Используем ID для фильтрации

//     query.prepare(sqlstr);

//     int paramIndex = 0; // Индекс параметра в запросе

//     // Привязываем значения к параметрам запроса
//     for (int i = 0; i < updateValues.size(); ++i) {
//         query.bindValue(paramIndex, updateValues[i]);
//         ++paramIndex;
//     }

//     // Последний параметр (ID)
//     query.bindValue(paramIndex, fieldValues[0]);

//     if (!query.exec()) {
//         QMessageBox::critical(nullptr, "Error", query.lastError().text());
//         return;
//     }

//     // Выводим сообщение об успешном обновлении данных
//     teResult->append(QString("Updated %1 rows").arg(query.numRowsAffected()));
// }









// void add_f(QSqlDatabase &dbconn, const QStringList &columnNames, const QStringList &values, QTextEdit *teResult, const QString &tableName)
// {
//     if (!dbconn.isOpen()) {
//         dbconnect_f(dbconn, teResult);
//         if (!dbconn.isOpen()) {
//             QMessageBox::critical(nullptr, "Error", dbconn.lastError().text());
//             return;
//         }
//     }

//     QSqlQuery countQuery(dbconn);
//     if (!countQuery.exec(QString("SELECT COUNT(*) FROM %1").arg(tableName))) {
//         teResult->append(countQuery.lastQuery());
//         QMessageBox::critical(nullptr, "Error", countQuery.lastError().text());
//         return;
//     }

//     countQuery.next();
//     int rowCount = countQuery.value(0).toInt(); // Получаем количество строк в таблице
//     int newID = rowCount + 1; // Генерируем новый ID

//     // Заменяем первый параметр (ID) на новый уникальный идентификатор
//     QStringList modifiedValues = values;
//     modifiedValues.replace(0, QString::number(newID));

//     QSqlQuery query(dbconn);

//     QString sqlstr = QString("INSERT INTO %1 (%2) VALUES (%3)")
//                          .arg(tableName)
//                          .arg(columnNames.join(", "))
//                          .arg(QStringList(values.size(), "?").join(", "));

//     query.prepare(sqlstr);

//     // Привязываем значения к параметрам запроса
//     for (int i = 0; i < modifiedValues.size(); ++i) {
//         query.bindValue(i, modifiedValues.at(i));
//     }

//     if (!query.exec()) {
//         teResult->append(query.lastQuery());
//         QMessageBox::critical(nullptr, "Error", query.lastError().text());
//         return;
//     }

//     teResult->append(QString("Added %1 rows").arg(query.numRowsAffected()));
// }


