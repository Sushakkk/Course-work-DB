#include "stock.h"
#include "ui_stock.h"
#include "functions.h"
#include <QTimer>
#include <QScrollArea>




stock::stock(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::stock)
{
    ui->setupUi(this);



    connect(ui->btnDel_2, SIGNAL(clicked(bool)), this, SLOT(del()));
    connect(ui->btnAdd_2, SIGNAL(clicked(bool)), this, SLOT(add()));  // Подключаем кнопку добавления
    connect(ui->btnEdit_2, SIGNAL(clicked(bool)), this, SLOT(edit()));  // Подключаем кнопку обновления
    connect(ui->btnRemove_2, SIGNAL(clicked(bool)), this, SLOT(remove()));
    connect(ui->btnBack, SIGNAL(clicked(bool)), this, SLOT(back()));

    QTimer::singleShot(0, this, &stock::selectAll);
    QStringList columnNames = { "Номер склада", "Адресс" };
    Table(ui->twOrg, columnNames);

    fieldWidgets = {ui->leID, ui->leAdress};
    ui->leID->setPlaceholderText("Автоматически");



}

stock::~stock()
{
    delete ui;
}

void stock::dbconnect()
{
    dbconnect_f(dbconn, ui->teResult);

}


void stock::selectAll()
{
    selectAll_f(dbconn, ui->teResult, ui->twOrg, tableName, fieldNames);
}


void stock::add()
{

    add_f(dbconn, fieldNames, fieldWidgets, ui->teResult, tableName);
    selectAll();

}


void stock::remove()
{
    remove_t(dbconn,ui->teResult, ui->twOrg, tableName, ui->twOrg->currentRow(), fieldNames);
    selectAll();
    del();
}



void stock::on_twOrg_itemSelectionChanged() {

    on_click_f(ui->twOrg, ui->teResult, fieldNames, fieldWidgets);
}


void stock::del()
{
    del_f(fieldWidgets);
}


void stock::edit()
{

    int curRow = ui->twOrg->currentRow();
    edit_f(dbconn, ui->teResult, ui->twOrg, fieldNames, fieldWidgets, curRow, tableName);
    selectAll();
    del();

}


void stock::back()
{
    goto_admin(this);
}

