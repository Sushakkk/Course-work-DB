#include "mainwindow.h"  // Подключаем заголовочный файл главного окна

#include "./ui_mainwindow.h"  // Подключаем сгенерированный файл с интерфейсом пользователя
#include <QMessageBox>         // Подключаем заголовочный файл для вывода сообщений
#include <QSqlQuery>           // Подключаем заголовочный файл для выполнения SQL-запросов
#include <QSqlError>           // Подключаем заголовочный файл для работы с ошибками SQL
#include <QTimer>              // Подключаем заголовочный файл для работы с таймерами
#include <QDebug>              // Подключаем заголовочный файл для вывода отладочной информации


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),  // Вызываем конструктор родительского класса
    ui(new Ui::MainWindow)  // Создаем объект пользовательского интерфейса
{
    ui->setupUi(this);  // Настройка пользовательского интерфейса

    // Подключаем сигналы от кнопок к слотам
    connect(ui->btnConnect, SIGNAL(clicked(bool)), this, SLOT(dbconnect()));
    connect(ui->btnAdd, SIGNAL(clicked(bool)), this, SLOT(add()));  // Подключаем кнопку добавления
    connect(ui->btnEdit, SIGNAL(clicked(bool)), this, SLOT(edit()));  // Подключаем кнопку обновления
    connect(ui->btnRemove, SIGNAL(clicked(bool)), this, SLOT(remove()));  // Подключаем кнопку удаления

    // Вызываем метод selectAll() через таймер с нулевой задержкой, чтобы он выполнился после инициализации интерфейса
    QTimer::singleShot(0, this, &MainWindow::selectAll);

    // Устанавливаем количество столбцов в компоненте таблицы
    ui->twOrg->setColumnCount(6);

    // Задаем заголовки столбцов таблицы
    ui->twOrg->setHorizontalHeaderItem(0, new QTableWidgetItem("Гость"));
    ui->twOrg->setHorizontalHeaderItem(1, new QTableWidgetItem("ФИО"));
    ui->twOrg->setHorizontalHeaderItem(2, new QTableWidgetItem("Адрес"));
    ui->twOrg->setHorizontalHeaderItem(3, new QTableWidgetItem("Почта"));
    ui->twOrg->setHorizontalHeaderItem(4, new QTableWidgetItem("Телефон"));
    ui->twOrg->setHorizontalHeaderItem(5, new QTableWidgetItem("Кредитная карта"));


    // Устанавливаем растягивание последнего столбца при изменении размера формы
    ui->twOrg->horizontalHeader()->setStretchLastSection(true);

    // Включаем возможность прокрутки содержимого таблицы
    ui->twOrg->setAutoScroll(true);

    // Устанавливаем режим выделения ячеек: только одна строка
    ui->twOrg->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->twOrg->setSelectionBehavior(QAbstractItemView::SelectRows);

    // Разрешаем пользователю сортировать данные по столбцам
    ui->twOrg->setSortingEnabled(true);
    ui->twOrg->sortByColumn(0, Qt::AscendingOrder);

    // Запрещаем редактирование ячеек таблицы
    ui->twOrg->setEditTriggers(QAbstractItemView::NoEditTriggers);

}


MainWindow::~MainWindow()
{
    if (dbconn.isOpen())  // Проверяем, открыто ли соединение с базой данных
        dbconn.close();   // Закрываем соединение
    delete ui;  // Освобождаем память, выделенную под пользовательский интерфейс
}


void MainWindow::selectAll()
{
    // Проверяем, открыто ли соединение с базой данных
    if (!dbconn.isOpen())
    {
        // Пытаемся открыть соединение
        dbconnect();
        if (!dbconn.isOpen())
        {
            QMessageBox::critical(this, "Error", dbconn.lastError().text());
            return;
        }
    }

    // Создаем объект запроса с привязкой к установленному соединению с базой данных
    QSqlQuery query(dbconn);

    // Создаем строку запроса на выборку всех данных из таблицы guests
    QString sqlstr = "SELECT * FROM guests";

    if (!query.exec(sqlstr))
    {
        QMessageBox::critical(this, "Error", query.lastError().text());
        return;
    }

    // Очищаем таблицу перед обновлением
    ui->twOrg->clearContents();

    // Получаем количество записей в результате запроса
    int rowCount = 0;
    if (query.isActive())
        rowCount = query.size();
    ui->twOrg->setRowCount(rowCount);

    // Прочитать в цикле все строки результата (курсора)
    int i = 0;
    while (query.next())
    {
        ui->twOrg->setItem(i, 0, new QTableWidgetItem(query.value("guest_id").toString()));
        ui->twOrg->setItem(i, 1, new QTableWidgetItem(query.value("full_name").toString()));
        ui->twOrg->setItem(i, 2, new QTableWidgetItem(query.value("address").toString()));
        ui->twOrg->setItem(i, 3, new QTableWidgetItem(query.value("email").toString()));
        ui->twOrg->setItem(i, 4, new QTableWidgetItem(query.value("phone").toString()));
        ui->twOrg->setItem(i, 5, new QTableWidgetItem(query.value("credit_card_number").toString()));

        // Устанавливаем выравнивание содержимого ячеек по центру
        for (int j = 0; j < ui->twOrg->columnCount(); ++j)
        {
            ui->twOrg->item(i, j)->setTextAlignment(Qt::AlignCenter);
        }

        i++;
    }

    // Подгоняем размер столбцов под содержимое
    ui->twOrg->resizeColumnsToContents();
}


void MainWindow::add()
{
    if( !dbconn.isOpen() )
    {
        dbconnect();
        if( !dbconn.isOpen() )
        {
            QMessageBox::critical(this,"Error",dbconn.lastError().text());
            return;
        }
    }

    QSqlQuery query(dbconn);  // Создаем объект запроса с привязкой к установленному соединению

    QString sqlstr = "insert into guests(guest_id, full_name, address, email, phone, credit_card_number) values(?, ?, ?, ?, ?, ?)";  // Формируем строку SQL-запроса для вставки данных в таблицу

    query.prepare(sqlstr);  // Подготавливаем запрос к выполнению

    query.bindValue(0, ui->leguest->text().toInt());  // Привязываем значение поля "Гость" к параметру запроса
    query.bindValue(1, ui->lefull_name->text());  // Привязываем значение поля "ФИО" к параметру запроса
    query.bindValue(2, ui->leaddress->text());  // Привязываем значение поля "Адрес" к параметру запроса
    query.bindValue(3, ui->leemail->text());  // Привязываем значение поля "Почта" к параметру запроса
    query.bindValue(4, ui->lephone->text());  // Привязываем значение поля "Телефон" к параметру запроса
    query.bindValue(5, ui->lecredit_card_number->text());  // Привязываем значение поля "Кредитная карта" к параметру запроса

    if( !query.exec() )
    {
        ui->teResult->append( query.lastQuery());
        QMessageBox::critical(this,"Error",query.lastError().text());
        return;
    }
    // Если запрос выполнен, то вывести сообщение одобавлении строки
    ui->teResult->append( QString("AddRead %1 rows").arg(query.numRowsAffected()) );
    // и обновить записи в компоненте таблицы
    selectAll();
}






void MainWindow::remove()
{
    if( !dbconn.isOpen() )
    {
        dbconnect();
        if( !dbconn.isOpen() )
        {
            QMessageBox::critical(this,"Error",dbconn.lastError().text());
            return;
        }
    }

    int currow = ui->twOrg->currentRow();

    if( currow < 0 )
    {
        QMessageBox::critical(this,"Error","Not selected row!");
        return;
    }


    if( QMessageBox::question(this,"Delete","Delete row?", QMessageBox::Cancel,QMessageBox::Ok)==QMessageBox::Cancel)
        return;

    // Создать объект запроса
    QSqlQuery query(dbconn);

    QString sqlstr = "delete from guests where guest_id = '" + ui->twOrg->item(currow,0)->text() + "'";

    if( !query.exec(sqlstr) )
    {
        ui->teResult->append( query.lastQuery());
        QMessageBox::critical(this,"Error",query.lastError().text());
        return;
    }
    // Вывести сообщение об удалении строки
    ui->teResult->append( QString("Del %1 rows").arg(query.numRowsAffected()) );
    // Обновить содержимое компонента таблицы
    selectAll();
}







void MainWindow::dbconnect()
{
    // Добавление путей к драйверам баз данных
    QCoreApplication::addLibraryPath("/opt/homebrew/share/qt/plugins");
    QCoreApplication::addLibraryPath("/usr/local/lib/qt/plugins/sqldrivers");

    // Проверка, открыто ли соединение с базой данных
    if(!dbconn.isOpen())
    {
        // Если соединение не открыто, вывести список доступных драйверов БД
        ui->teResult->append("SQL drivers:");
        ui->teResult->append(QSqlDatabase::drivers().join(","));

        // Создание глобальной переменной для установки соединения с БД
        dbconn = QSqlDatabase::addDatabase("QPSQL");

        // Установка параметров соединения: имя БД, адрес хоста, логин и пароль пользователя, порт (если отличается от стандартного)
        dbconn.setDatabaseName("гостиница Космос");
        dbconn.setHostName("localhost");
        dbconn.setUserName("student");
        dbconn.setPassword("1");

        if( dbconn.open() )
            ui->teResult->append("Connect is open...");
        else
        {
            ui->teResult->append("Error of connect:");
            ui->teResult->append(dbconn.lastError().text());
        }
    }
    else
        // Если соединение уже открыто, то сообщить об этом
        ui->teResult->append("Connect is already open...");
}


void MainWindow::on_btnDelete_clicked()
{
    // Очистка всех полей ввода
    ui->leguest->clear();
    ui->lefull_name->clear();
    ui->leaddress->clear();
    ui->leemail->clear();
    ui->lephone->clear();
    ui->lecredit_card_number->clear();
}

void MainWindow::edit()
{
    if (!dbconn.isOpen())
    {
        dbconnect();
        if (!dbconn.isOpen())
        {
            QMessageBox::critical(this, "Error", dbconn.lastError().text());
            return;
        }
    }

    int curRow = ui->twOrg->currentRow();

    if (curRow < 0)
    {
        QMessageBox::critical(this, "Error", "No row selected!");
        return;
    }

    QString guestId = ui->twOrg->item(curRow, 0)->text();
    QString fullName = ui->lefull_name->text();
    QString address = ui->leaddress->text();
    QString email = ui->leemail->text();
    QString phone = ui->lephone->text();
    QString creditCardNumber = ui->lecredit_card_number->text();

    QSqlQuery query(dbconn);
    QString sqlstr = "UPDATE guests SET full_name = ?, address = ?, email = ?, phone = ?, credit_card_number = ? WHERE guest_id = ?";

    query.prepare(sqlstr);
    query.bindValue(0, fullName);
    query.bindValue(1, address);
    query.bindValue(2, email);
    query.bindValue(3, phone);
    query.bindValue(4, creditCardNumber);
    query.bindValue(5, guestId);

    if (!query.exec())
    {
        QMessageBox::critical(this, "Error", query.lastError().text());
        return;
    }

    ui->teResult->append(QString("Updated %1 rows").arg(query.numRowsAffected()));

    selectAll();
}


void MainWindow::on_twOrg_itemSelectionChanged()
{
    // Получаем выбранную строку
    int curRow = ui->twOrg->currentRow();

    // Проверяем, что выбранная строка действительно существует
    if (curRow < 0 || curRow >= ui->twOrg->rowCount()) {
        // Если выбранная строка не существует, сбрасываем значения полей ввода и выходим из функции
        ui->leguest->clear();
        ui->lefull_name->clear();
        ui->leaddress->clear();
        ui->leemail->clear();
        ui->lephone->clear();
        ui->lecredit_card_number->clear();
        return;
    }

    // Получаем значения из выбранной строки
    QString guestId = ui->twOrg->item(curRow, 0) ? ui->twOrg->item(curRow, 0)->text() : "";
    QString fullName = ui->twOrg->item(curRow, 1) ? ui->twOrg->item(curRow, 1)->text() : "";
    QString address = ui->twOrg->item(curRow, 2) ? ui->twOrg->item(curRow, 2)->text() : "";
    QString email = ui->twOrg->item(curRow, 3) ? ui->twOrg->item(curRow, 3)->text() : "";
    QString phone = ui->twOrg->item(curRow, 4) ? ui->twOrg->item(curRow, 4)->text() : "";
    QString creditCardNumber = ui->twOrg->item(curRow, 5) ? ui->twOrg->item(curRow, 5)->text() : "";

    // Заполняем поля ввода значениями из выбранной строки
    ui->leguest->setText(guestId);
    ui->lefull_name->setText(fullName);
    ui->leaddress->setText(address);
    ui->leemail->setText(email);
    ui->lephone->setText(phone);
    ui->lecredit_card_number->setText(creditCardNumber);
}
