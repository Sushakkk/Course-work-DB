#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlError> // Добавленный заголовочный файл
#include <QMessageBox>
#include <QDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),  // Вызываем конструктор родительского класса
    ui(new Ui::MainWindow)  // Создаем объект пользовательского интерфейса
{
    ui->setupUi(this);  // Настройка пользовательского интерфейса

    // Подключаем сигналы от кнопок к слотам
    connect(ui->btnConnect, SIGNAL(clicked(bool)), this, SLOT(dbconnect()));
    connect(ui->btnAdd, SIGNAL(clicked(bool)), this, SLOT(add()));  // Подключаем кнопку добавления
    // connect(ui->btnEdit, SIGNAL(clicked(bool)), this, SLOT(edit()));  // Подключаем кнопку обновления
    //connect(ui->btnRemove, SIGNAL(clicked(bool)), this, SLOT(remove()));  // Подключаем кнопку удаления

    // Вызываем метод selectAll() через таймер с нулевой задержкой, чтобы он выполнился после инициализации интерфейса
    QTimer::singleShot(0, this, &MainWindow::selectAll);

    // Устанавливаем количество столбцов в компоненте таблицы
    ui->twOrg->setColumnCount(4);

    // Задаем заголовки столбцов таблицы
    ui->twOrg->setHorizontalHeaderItem(0, new QTableWidgetItem("ID"));
    ui->twOrg->setHorizontalHeaderItem(1, new QTableWidgetItem("Name"));
    ui->twOrg->setHorizontalHeaderItem(2, new QTableWidgetItem("INN"));
    ui->twOrg->setHorizontalHeaderItem(3, new QTableWidgetItem("Requisites"));


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


void MainWindow::dbconnect()
{
    if(!dbconn.isOpen())
    {
        ui->teResult->append("SQL drivers:");
        ui->teResult->append(QSqlDatabase::drivers().join(","));
        dbconn=QSqlDatabase::addDatabase("QPSQL");
        dbconn.setDatabaseName("btest");
        dbconn.setHostName("localhost");
        dbconn.setUserName("student");
        dbconn.setPassword("123");


        if( dbconn.open() )
            ui->teResult->append("Connect is open...");
        else
        {
            ui->teResult->append("Error of connect:");
            ui->teResult->append(dbconn.lastError().text());
        }
    }
    else

    ui->teResult->append("Connect is already open...");

}

void MainWindow::on_btnConnect_clicked()
{
    dbconnect(); // Вызов функции для подключения к БД при нажатии на кнопку
}



MainWindow::~MainWindow()
{
    if( dbconn.isOpen())
        dbconn.close();
    delete ui;
}

void MainWindow::on_btnSelectAll_clicked()
{
    // Если соединение не открыто, подключаемся к базе данных
    if (!dbconn.isOpen())
    {
        dbconnect();
        if (!dbconn.isOpen())
        {
            QMessageBox::critical(this, "Error", dbconn.lastError().text());
            return;
        }
    }

    // Создаем объект запроса с привязкой к установленному соединению
    QSqlQuery query(QSqlDatabase::database("QPSQL"));
    // Создаем строку запроса на выборку данных
    QString sqlstr = "SELECT * FROM company";

    if (!query.exec(sqlstr))
    {
        QMessageBox::critical(this, "Error", query.lastError().text());
        qDebug() << "Error executing query:" << query.lastError().text();
        return;
    }
    else
    {
        qDebug() << "Query executed successfully";
    }

    // Если запрос не активен (не удалось выполнить запрос),
    // выводим сообщение об ошибке и выходим из функции
    if (!query.isActive())
    {
        QMessageBox::critical(this, "Error", "Query is not active");
        return;
    }

    // Устанавливаем количество строк для компонента таблицы
    ui->twOrg->setRowCount(0);

    // Прочитываем все строки результата (курсора) и выводим их в компонент таблицы
    int i = 0;
    while (query.next())
    {
        ui->twOrg->insertRow(i);
        ui->twOrg->setItem(i, 0, new QTableWidgetItem(query.value("Company_ID").toString()));
        ui->twOrg->setItem(i, 1, new QTableWidgetItem(query.value("Company_name").toString()));
        ui->twOrg->setItem(i, 2, new QTableWidgetItem(query.value("Company_INN").toString()));
        ui->twOrg->setItem(i, 3, new QTableWidgetItem(query.value("Company_requisites").toString()));

    }
    i++;
}


// void MainWindow::on_btnAdd_clicked()
// {
//     // Подключиться к БД
//     if (!dbconn.isOpen())
//     {
//         dbconnect();
//         if (!dbconn.isOpen())
//         {
//             QMessageBox::critical(this, "Error", dbconn.lastError().text());
//             return;
//         }
//     }

//     QSqlQuery query(dbconn);

//     // Создать строку запроса
//     QString sqlstr = "INSERT INTO company(Company_name, Company_INN, Company_requisites) VALUES (?, ?, ?)";

//     // Подготовить запрос
//     query.prepare(sqlstr);

//     // Передать параметры из полей ввода в запрос
//     query.bindValue(0, ui->leName->text());
//     query.bindValue(1, ui->leINN->text());
//     query.bindValue(2, ui->teReq->toPlainText());

//     // Выполнить запрос
//     if (!query.exec())
//     {
//         ui->teResult->append(query.lastQuery());
//         QMessageBox::critical(this, "Error", query.lastError().text());
//         return;
//     }

//     // Если запрос выполнен, то вывести сообщение об добавлении строки
//     ui->teResult->append(QString("Added %1 rows").arg(query.numRowsAffected()));

//     // Получить текущее количество строк в таблице
//     int rowCount = ui->twOrg->rowCount();

//     // Вставить новую строку в конец таблицы
//     ui->twOrg->insertRow(rowCount);

//     // Установить значения для новой строки
//     ui->twOrg->setItem(rowCount, 0, new QTableWidgetItem(query.value("Company_ID").toString()));
//     ui->twOrg->setItem(rowCount, 1, new QTableWidgetItem(query.value("Company_name").toString()));
//     ui->twOrg->setItem(rowCount, 2, new QTableWidgetItem(query.value("Company_INN").toString()));
//     ui->twOrg->setItem(rowCount, 3, new QTableWidgetItem(query.value("Company_requisites").toString()));
// }




