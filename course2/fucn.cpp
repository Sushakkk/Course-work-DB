#include "fucn.h"

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











void del_f1(const QList<QWidget*> &fieldWidgets) {
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



void on_click_f1(QTableWidget *twOrg, QTextEdit *teResult, const QStringList &fieldNames, const QList<QWidget*> &fieldWidgets) {
    int curRow = twOrg->currentRow();

    // Проверяем, что выбранная строка действительно существует
    if (curRow < 0 || curRow >= twOrg->rowCount()) {
        // Если выбранная строка не существует, сбрасываем значения полей ввода и выходим из функции
        del_f1(fieldWidgets);
        return;
    }

    // Получаем значения из выбранной строки
    QStringList fieldValues;
    for (int i = 0; i < fieldNames.size(); ++i) {
        QString value = twOrg->item(curRow, i) ? twOrg->item(curRow, i)->text() : "";
        fieldValues << value;
    }

    // Очищаем значения полей ввода
    del_f1(fieldWidgets);

    // Заполняем поля ввода значениями из списка
    for (int i = 0; i < fieldValues.size(); ++i) {
        if (i < fieldWidgets.size()) {
            // Проверяем, является ли виджет полем ввода
            if (auto lineEdit = qobject_cast<QLineEdit*>(fieldWidgets[i])) {
                lineEdit->setText(fieldValues[i]); // Если да, устанавливаем текст
            } else if (auto comboBox = qobject_cast<QComboBox*>(fieldWidgets[i])) {
                // Если это QComboBox, устанавливаем текст с помощью метода setCurrentText
                comboBox->setCurrentText(fieldValues[i]);
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








void edit_f1(QSqlDatabase &dbconn, QTextEdit *teResult, QTableWidget *tableWidget, const QStringList &columnNames, const QList<QWidget*> &fieldWidgets, int curRow, const QString &tableName) {
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
