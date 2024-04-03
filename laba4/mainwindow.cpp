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

    connect(ui->btnSelectAll, SIGNAL(clicked(bool)), this, SLOT(selectAll())); //это если я хочу данные добавить после нажатия на кнопку
    // Вызываем метод selectAll() через таймер с нулевой задержкой, чтобы он выполнился после инициализации интерфейса
    QTimer::singleShot(0, this, &MainWindow::selectAll);



    connect(ui->btnConnect, SIGNAL(clicked(bool)), this, SLOT(dbconnect()));
    connect(ui->btnDel, SIGNAL(clicked(bool)), this, SLOT(del()));
    connect(ui->btnAdd, SIGNAL(clicked(bool)), this, SLOT(add()));  // Подключаем кнопку добавления
    connect(ui->btnEdit, SIGNAL(clicked(bool)), this, SLOT(edit()));  // Подключаем кнопку обновления
    connect(ui->btnRemove, SIGNAL(clicked(bool)), this, SLOT(remove()));  // Подключаем кнопку удаления




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

    // Создаем строку запроса на выборку всех данных из таблицы company, отсортированных по Company_ID
    QString sqlstr = "SELECT * FROM company ORDER BY Company_ID";

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
        // qDebug() << "Company_ID: " << query.value("Company_ID").toString(); // выводим Company_ID в консоль
        // qDebug() << "Company_name: " << query.value("Company_name").toString(); // выводим Company_name в консоль
        // qDebug() << "Company_INN: " << query.value("Company_INN").toString(); // выводим Company_INN в консоль
        // qDebug() << "Company_requisites: " << query.value("Company_requisites").toString(); // выводим Company_requisites в консоль
        ui->twOrg->setItem(i, 0, new QTableWidgetItem(query.value("Company_ID").toString()));
        ui->twOrg->setItem(i, 1, new QTableWidgetItem(query.value("Company_name").toString()));
        ui->twOrg->setItem(i, 2, new QTableWidgetItem(query.value("Company_INN").toString()));
        ui->twOrg->setItem(i, 3, new QTableWidgetItem(query.value("Company_requisites").toString()));

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


void MainWindow::add() {
    if (!dbconn.isOpen()) {
        dbconnect();
        if (!dbconn.isOpen()) {
            QMessageBox::critical(this, "Error", dbconn.lastError().text());
            return;
        }
    }

    QSqlQuery countQuery(dbconn); // Создаем запрос для подсчета количества записей
    if (!countQuery.exec("SELECT COUNT(*) FROM company")) {
        QMessageBox::critical(this, "Error", countQuery.lastError().text());
        return;
    }

    countQuery.next();
    int rowCount = countQuery.value(0).toInt(); // Получаем количество записей в таблице
    int newID = rowCount + 1; // Генерируем новый ID

    QSqlQuery query(dbconn); // Создаем объект запроса с привязкой к установленному соединению

    QString sqlstr = "INSERT INTO company(Company_ID,Company_name, Company_INN, Company_requisites) VALUES (?, ?, ?, ?)"; // Формируем строку SQL-запроса для вставки данных в таблицу

    query.prepare(sqlstr); // Подготавливаем запрос к выполнению

    query.bindValue(0, newID); // Используем новый ID
    query.bindValue(1, ui->leName->text());
    query.bindValue(2, ui->leINN->text());
    query.bindValue(3, ui->teReq->toPlainText());

    if (!query.exec()) {
        ui->teResult->append(query.lastQuery());
        QMessageBox::critical(this, "Error", query.lastError().text());
        return;
    }

    // Если запрос выполнен, то вывести сообщение о добавлении строки
    ui->teResult->append(QString("Added %1 rows").arg(query.numRowsAffected()));
    // и обновить записи в компоненте таблицы
    selectAll();
}







void MainWindow::dbconnect()
{
    // Проверка, открыто ли соединение с базой данных
    if(!dbconn.isOpen())
    {
        // Если соединение не открыто, вывести список доступных драйверов БД
        ui->teResult->append("SQL drivers:");
        ui->teResult->append(QSqlDatabase::drivers().join(","));

        // Создание глобальной переменной для установки соединения с БД
        dbconn = QSqlDatabase::addDatabase("QPSQL");

        // Установка параметров соединения: имя БД, адрес хоста, логин и пароль пользователя, порт (если отличается от стандартного)
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
        // Если соединение уже открыто, то сообщить об этом
        ui->teResult->append("Connect is already open...");
}

void MainWindow::del()
{
    qDebug() << "Clearing input fields";
    // Очистка всех полей ввода
    ui->leID->clear();
    ui->leName->clear();
    ui->leINN->clear();
    ui->teReq->clear();
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

    QString sqlstr = "delete from company where Company_ID = '" + ui->twOrg->item(currow,0)->text() + "'";

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
    del();
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

    QString Company_ID = ui->twOrg->item(curRow, 0)->text();
    QString Company_name = ui->leName->text();
    QString Company_INN = ui->leINN->text();
    QString Company_requisites = ui->teReq->toPlainText();

    // Проверяем, изменились ли данные
    if (Company_name == ui->twOrg->item(curRow, 1)->text() &&
        Company_INN == ui->twOrg->item(curRow, 2)->text() &&
        Company_requisites == ui->twOrg->item(curRow, 3)->text())
    {
        QMessageBox::information(this, "Information", "Данные не изменились.");
        return;
    }



    QSqlQuery query(dbconn);
    QString sqlstr = "UPDATE company SET Company_name = ?, Company_INN = ?, Company_requisites = ? WHERE Company_ID = ?";

    query.prepare(sqlstr);
    query.bindValue(0, Company_name);
    query.bindValue(1, Company_INN);
    query.bindValue(2, Company_requisites);
    query.bindValue(3, Company_ID);


    if (!query.exec())
    {
        QMessageBox::critical(this, "Error", query.lastError().text());
        return;
    }

    ui->teResult->append(QString("Updated %1 rows").arg(query.numRowsAffected()));

    selectAll();
    if( QMessageBox::question(this,"Edit","Изменить Данные?", QMessageBox::Cancel,QMessageBox::Ok)==QMessageBox::Cancel)
        return;


    ui->leID->setText(Company_ID);
    ui->leName->setText(Company_name);
    ui->leINN->setText(Company_INN);
    ui->teReq->setText(Company_requisites);
}


void MainWindow::on_twOrg_itemSelectionChanged()
{
    // Получаем выбранную строку
    int curRow = ui->twOrg->currentRow();

    // Проверяем, что выбранная строка действительно существует
    if (curRow < 0 || curRow >= ui->twOrg->rowCount()) {
        // Если выбранная строка не существует, сбрасываем значения полей ввода и выходим из функции
        ui->leID->clear();
        ui->leName->clear();
        ui->leINN->clear();
        ui->teReq->clear();
        return;
    }

    // Получаем значения из выбранной строки


    //QString Company_requisites = ui->teReq->toPlainText();
    QString Company_ID = ui->twOrg->item(curRow, 0) ? ui->twOrg->item(curRow, 0)->text() : "";
    QString Company_name = ui->twOrg->item(curRow, 1) ? ui->twOrg->item(curRow, 1)->text() : "";
    QString Company_INN = ui->twOrg->item(curRow, 2) ? ui->twOrg->item(curRow, 2)->text() : "";
    QString Company_requisites = ui->twOrg->item(curRow, 3) ? ui->twOrg->item(curRow, 3)->text() : "";


    // Заполняем поля ввода значениями из выбранной строки

    ui->leID->setText(Company_ID);
    ui->leName->setText(Company_name);
    ui->leINN->setText(Company_INN);
    ui->teReq->setText(Company_requisites);


}



