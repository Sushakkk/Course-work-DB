#include "order_new.h"
#include "ui_order_new.h"
#include "functions.h"

#include "add_product.h"



order_new::order_new(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::order_new)
{
    //ui->btnDel_2->setVisible(false);


    // connect(ui->btnDel_2, SIGNAL(clicked(bool)), this, SLOT(del()));
    // connect(ui->btnAdd_2, SIGNAL(clicked(bool)), this, SLOT(add()));  // Подключаем кнопку добавления
    connect(ui->btnEdit_2, SIGNAL(clicked(bool)), this, SLOT(edit()));  // Подключаем кнопку обновления
    connect(ui->btnRemove_2, SIGNAL(clicked(bool)), this, SLOT(remove()));
    connect(ui->btnBack, SIGNAL(clicked(bool)), this, SLOT(back()));

    QTimer::singleShot(0, this, &order_new::selectAll);
    QStringList columnNames = { "Номер Заказа", "Дата","ID Клиента", "ID Сотрудника", "Оплата"};
    Table(ui->twOrg, columnNames);



    fieldWidgets = {ui->leOrder_number, ui->leDate_2, ui->cbFio_client, ui->cbFio_emp, ui->cBpay};
    ui->leOrder_number->setPlaceholderText("Автоматически");
    ui->leDate_2->setPlaceholderText("Автоматически");


    ///////////////////////////////////////////////
    QString table = "client";
    QPair<QString, QString> columns("client_id", "client_fio");
    insert_ComboBoxFro(ui->teResult, dbconn, ui->cbFio_client, table, columns,1);

    ///////////////////////////////////////////////
    table = "employee";
    columns = QPair<QString, QString>("emp_id", "emp_fio");
    insert_ComboBoxFro(ui->teResult, dbconn, ui->cbFio_emp, table, columns,1);
    /////////////////////////////////////////////////





}

order_new::~order_new()
{
    delete ui;
}



void order_new::dbconnect()
{
    dbconnect_f(dbconn, ui->teResult);

}


void order_new::selectAll()
{
    selectAll_f(dbconn, ui->teResult, ui->twOrg, tableName, fieldNames);
    //del();
}


void order_new::back()
{
    goto_admin(this);
}


void order_new::on_twOrg_itemSelectionChanged() {

    on_click_f(ui->twOrg, ui->teResult, fieldNames, fieldWidgets);
}



// void order_new::add()
// {

//     // add_f(dbconn, fieldNames, fieldWidgets, ui->teResult, tableName);
//     // selectAll();
//     // add_product add_productW;
//     // hide();
//     // add_productW.setModal(true);
//     // add_productW.exec();

// }


void order_new::remove()
{
    remove_t(dbconn,ui->teResult, ui->twOrg, tableName, ui->twOrg->currentRow(), fieldNames);
    selectAll();
    //del();
}



// void order_new::del()
// {
//     del_f(fieldWidgets);
// }


void order_new::edit()
{

    int curRow = ui->twOrg->currentRow();
    edit_f(dbconn, ui->teResult, ui->twOrg, fieldNames, fieldWidgets, curRow, tableName);
    selectAll();
    //del();

}



