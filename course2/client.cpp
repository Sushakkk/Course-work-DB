#include "client.h"
#include "ui_client.h"
#include "functions.h" // Подключаем заголовочный файл с функциями
#include "fucn.h"




Client::Client(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Client)
{
    ui->setupUi(this);

    // Подключаем сигналы и слоты
    connect(ui->btnDel_2, SIGNAL(clicked(bool)), this, SLOT(del()));
    connect(ui->btnAdd_2, SIGNAL(clicked(bool)), this, SLOT(add()));
    connect(ui->btnEdit_2, SIGNAL(clicked(bool)), this, SLOT(edit()));
    connect(ui->btnRemove_2, SIGNAL(clicked(bool)), this, SLOT(remove()));
    connect(ui->btnBack, SIGNAL(clicked(bool)), this, SLOT(back()));

    QTimer::singleShot(0, this, &Client::selectAll);

    // Создаем список заголовков столбцов
    QStringList columnNames = { "ID", "ФИО", "Email" };

    // Вызываем функцию для настройки таблицы
    Table(ui->twOrg, columnNames);

    // Создаем список полей ввода для полей таблицы
    fieldWidgets = {ui->leID_2, ui->leFio_2, ui->leEmail_2};

    ui->leID_2->setPlaceholderText("Автоматически");



}

Client::~Client()
{
    delete ui;
}


void Client::dbconnect()
{
    dbconnect_f(dbconn, ui->teResult);

}


void Client::selectAll()
{
    selectAll_f(dbconn, ui->teResult, ui->twOrg, tableName, fieldNames);
}


void Client::add()
{

    add_f(dbconn, fieldNames, fieldWidgets, ui->teResult, tableName);
    selectAll();

}


void Client::remove()
{
    remove_t(dbconn,ui->teResult, ui->twOrg, tableName, ui->twOrg->currentRow(), fieldNames);
    selectAll();
    del();
}



void Client::on_twOrg_itemSelectionChanged() {
    on_click_f(ui->twOrg, ui->teResult, fieldNames, fieldWidgets);
}



void Client::del()
{
    del_f(fieldWidgets);
}



void Client::edit()
{
    int curRow = ui->twOrg->currentRow();

    edit_f(dbconn, ui->teResult, ui->twOrg, fieldNames, fieldWidgets, curRow, tableName);

    selectAll();
    del();

}

void Client::back()
{
    goto_admin(this);
}



