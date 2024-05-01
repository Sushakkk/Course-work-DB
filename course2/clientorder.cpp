#include "clientorder.h"
#include "ui_clientorder.h"
#include "mainwindow.h"
#include "functions.h"



ClientOrder::ClientOrder(QWidget *parent, const QString &user,const QString &fio)
    : QDialog(parent)
    , ui(new Ui::ClientOrder)
{
    ui->setupUi(this);
    current_user = user;
    current_fio=fio;


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

    if(current_fio!=""){
        QString str = "client_fio = '%1'";
        str = str.arg(current_fio);

        selectAll_f_report(dbconn, ui->teResult, ui->twOrg, tableName, fieldNames,str);

    }else{

        selectAll_f(dbconn, ui->teResult, ui->twOrg, tableName, fieldNames);}


}


void ClientOrder::back()
{   if(current_fio!=""){
        Client orderW(nullptr, current_user);
        hide();
        orderW.setModal(true);
        orderW.exec();
    }
    else if(current_user=="Менеджер по продажам"){
        order orderW(nullptr, current_user);
        hide();
        orderW.setModal(true);
        orderW.exec();
    }
    else{
        goto_admin(this);
    }
}


void ClientOrder::on_twOrg_itemSelectionChanged() {

    on_click_f(ui->twOrg, ui->teResult, fieldNames, fieldWidgets);
}



