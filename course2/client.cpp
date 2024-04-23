#include "client.h"
#include "ui_client.h"
#include "functions.h" // Подключаем заголовочный файл с функциями


#include <QTimer>              // Подключаем заголовочный файл для работы с таймерами



Client::Client(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Client)
{
    ui->setupUi(this);

    connect(ui->btnSelectAll, SIGNAL(clicked(bool)), this, SLOT(selectAll()));
    connect(ui->btnConnect, SIGNAL(clicked(bool)), this, SLOT(dbconnect()));
    connect(ui->btnDel, SIGNAL(clicked(bool)), this, SLOT(del()));
    connect(ui->btnAdd, SIGNAL(clicked(bool)), this, SLOT(add()));  // Подключаем кнопку добавления
    connect(ui->btnEdit, SIGNAL(clicked(bool)), this, SLOT(edit()));  // Подключаем кнопку обновления
    connect(ui->btnRemove, SIGNAL(clicked(bool)), this, SLOT(remove()));

    QTimer::singleShot(0, this, &Client::selectAll);
    QStringList columnNames = { "ID", "ФИО", "Email" };
    Table(ui->twOrg, columnNames);



    fieldWidgets = {ui->leID, ui->leFio, ui->leEmail};

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
    QStringList values;
    for (const auto &lineEdit : fieldWidgets) {
        values << lineEdit->text();
    }
    add_f(dbconn, fieldNames, values, ui->teResult, tableName);
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



