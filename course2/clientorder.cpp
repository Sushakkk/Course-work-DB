#include "clientorder.h"
#include "ui_clientorder.h"

#include "functions.h"


ClientOrder::ClientOrder(QWidget *parent, const QString &user)
    : QDialog(parent)
    , ui(new Ui::ClientOrder)
{
    ui->setupUi(this);
    current_user = user;


    connect(ui->btnBack, SIGNAL(clicked(bool)), this, SLOT(back()));

    QTimer::singleShot(0, this, &ClientOrder::selectAll);

    QStringList columnNames = { "Номер Заказа", "Дата", "ФИО Клиента", "Оплата", "Сумма заказа" };
    Table(ui->twOrg, columnNames);


    fieldWidgets = {ui->leOrder_number,ui->leDate, ui->leFio_client, ui->lePay, ui->leSum};
    for (auto widget : fieldWidgets) {
        if (auto lineEdit = qobject_cast<QLineEdit*>(widget)) {
            lineEdit->setReadOnly(true);
        } else if (auto comboBox = qobject_cast<QComboBox*>(widget)) {
            comboBox->setEnabled(true); // или comboBox->setEditable(false), если хотите, чтобы он был только для чтения
        }
    }



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
    if(current_user=="Менеджер по продажам"){
        goto_sales_manager(this);
    }
    else{
        goto_admin(this);
    }
}


void ClientOrder::on_twOrg_itemSelectionChanged() {

    on_click_f(ui->twOrg, ui->teResult, fieldNames, fieldWidgets);
}



