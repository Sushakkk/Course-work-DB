#include "order_new.h"
#include "ui_order_new.h"

#include "functions.h"

order_new::order_new(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::order_new)
{

    //connect(ui->btnSelectAll, SIGNAL(clicked(bool)), this, SLOT(selectAll()));
    //connect(ui->btnConnect, SIGNAL(clicked(bool)), this, SLOT(dbconnect()));
    // connect(ui->btnDel_2, SIGNAL(clicked(bool)), this, SLOT(del()));
    // connect(ui->btnAdd_2, SIGNAL(clicked(bool)), this, SLOT(add()));  // Подключаем кнопку добавления
    // connect(ui->btnEdit_2, SIGNAL(clicked(bool)), this, SLOT(edit()));  // Подключаем кнопку обновления
    //connect(ui->btnRemove_2, SIGNAL(clicked(bool)), this, SLOT(remove()));
    connect(ui->btnBack, SIGNAL(clicked(bool)), this, SLOT(back()));

    QTimer::singleShot(0, this, &order_new::selectAll);
    QStringList columnNames = { "Номер Заказа", "ФИО Клиента", "ФИО Сотрудника", "Оплата", "Сумма заказа", "Дата" };
    Table(ui->twOrg, columnNames);

    fieldWidgets = {ui->leOrder_number, ui->leFio_client, ui->leIFio_Emp, ui->lePay, ui->leSum, ui->leDate};



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
}


void order_new::back()
{
    goto_admin(this);
}


void order_new::on_twOrg_itemSelectionChanged() {

    on_click_f(ui->twOrg, ui->teResult, fieldNames, fieldWidgets);
}

// void company::add()
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


// void company::remove()
// {
//     remove_t(dbconn,ui->teResult, ui->twOrg, tableName, ui->twOrg->currentRow(), fieldNames);
//     selectAll();
//     del();
// }






// void company::del()
// {
//     del_f(fieldWidgets);
// }


// void company::edit()
// {

//     int curRow = ui->twOrg->currentRow();
//     edit_f(dbconn, ui->teResult, ui->twOrg, fieldNames, fieldWidgets, curRow, tableName);
//     selectAll();
//     del();

// }



