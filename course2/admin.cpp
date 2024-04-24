#include "admin.h"
#include "ui_admin.h"
#include "client.h"
#include "company.h"
#include "order_new.h"
#include "order.h"
#include "clientorder.h"



admin::admin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::admin)
{
    ui->setupUi(this);
}

admin::~admin()
{
    delete ui;
}

void admin::on_btnClient_clicked()
{
    Client clientW;
    hide();
    clientW.setModal(true);
    clientW.exec();

}


void admin::on_btnCompany_clicked()
{
    company companyW;
    hide();
    companyW.setModal(true);
    companyW.exec();
}


void admin::on_btnOrder_clicked()
{
    ClientOrder  order_new_W;
    hide();
    order_new_W.setModal(true);
    order_new_W.exec();
}

