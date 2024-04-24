#include "clientorder.h"
#include "ui_clientorder.h"

#include "functions.h"


ClientOrder::ClientOrder(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ClientOrder)
{
    ui->setupUi(this);


    // connect(ui->btnDel_2, SIGNAL(clicked(bool)), this, SLOT(del()));
    // connect(ui->btnAdd_2, SIGNAL(clicked(bool)), this, SLOT(add()));  // Подключаем кнопку добавления
    // connect(ui->btnEdit_2, SIGNAL(clicked(bool)), this, SLOT(edit()));  // Подключаем кнопку обновления
    // connect(ui->btnRemove_2, SIGNAL(clicked(bool)), this, SLOT(remove()));
    connect(ui->btnBack, SIGNAL(clicked(bool)), this, SLOT(back()));

    QTimer::singleShot(0, this, &ClientOrder::selectAll);

    QStringList columnNames = { "Номер Заказа", "ФИО Клиента", "ФИО Сотрудника", "Оплата", "Сумма заказа", "Дата" };
    Table(ui->twOrg, columnNames);

    fieldWidgets = {ui->leOrder_number, ui->leFio_client, ui->leFio_Emp, ui->lePay, ui->leSum, ui->leDate};


}

ClientOrder::~ClientOrder()
{
    delete ui;
}



void ClientOrder::dbconnect()
{
    dbconnect_f(dbconn, ui->teResult);

}


void ClientOrder::selectAll()
{
    selectAll_f(dbconn, ui->teResult, ui->twOrg, tableName, fieldNames);
}


void ClientOrder::back()
{
    goto_admin(this);
}


void ClientOrder::on_twOrg_itemSelectionChanged() {

    on_click_f(ui->twOrg, ui->teResult, fieldNames, fieldWidgets);
}



// void ClientOrder::add()
// {
//     QStringList values;
//     for (const auto &lineEdit : fieldWidgets) {
//         values << lineEdit->text();
//     }


//     // //отдельное добавление для поля
//     // values << ui->teReq_2->toPlainText();

//     add_f(dbconn, fieldNames, values, ui->teResult, tableName);
//     selectAll();

// }


// void ClientOrder::remove()
// {
//     remove_t(dbconn,ui->teResult, ui->twOrg, tableName, ui->twOrg->currentRow(), fieldNames);
//     selectAll();
//     del();
// }



// void ClientOrder::del()
// {
//     del_f(fieldWidgets);
// }


// void ClientOrder::edit()
// {

//     int curRow = ui->twOrg->currentRow();
//     edit_f(dbconn, ui->teResult, ui->twOrg, fieldNames, fieldWidgets, curRow, tableName);
//     selectAll();
//     del();

// }



