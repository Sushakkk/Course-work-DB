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

    //QTimer::singleShot(0, this, &order_new::selectAll);
    QStringList columnNames = { "Номер Заказа", "ФИО Клиента", "ФИО Сотрудника", "Оплата", "Сумма заказа", "Дата" };
    Table(ui->twOrg, columnNames);

    fieldWidgets = {ui->leOrder_number, ui->leFio_client, ui->leIFio_Emp, ui->lePay, ui->leSum, ui->leDate};

    for (auto widget : fieldWidgets) {
        if (auto lineEdit = qobject_cast<QLineEdit*>(widget)) {
            lineEdit->setReadOnly(false);
        } else if (auto comboBox = qobject_cast<QComboBox*>(widget)) {
            comboBox->setEnabled(false); // или comboBox->setEditable(false), если хотите, чтобы он был только для чтения
        }
    }




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

// void order_new::add()
// {

//     add_f(dbconn, fieldNames, fieldWidgets, ui->teResult, tableName);
//     selectAll();

// }


// void order_new::remove()
// {
//     remove_t(dbconn,ui->teResult, ui->twOrg, tableName, ui->twOrg->currentRow(), fieldNames);
//     selectAll();
//     del();
// }



// void order_new::del()
// {
//     del_f(fieldWidgets);
// }


// void order_new::edit()
// {

//     int curRow = ui->twOrg->currentRow();
//     edit_f(dbconn, ui->teResult, ui->twOrg, fieldNames, fieldWidgets, curRow, tableName);
//     selectAll();
//     del();

// }



