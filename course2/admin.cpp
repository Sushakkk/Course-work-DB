#include "admin.h"
#include "ui_admin.h"


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
    Client clientW(nullptr, current_user);
    hide();
    clientW.setModal(true);
    clientW.exec();

}


void admin::on_btnCompany_clicked()
{
    company companyW(nullptr, current_user);
    hide();
    companyW.setModal(true);
    companyW.exec();
}



void admin::on_btnRep_ord_new_clicked()
{
    ClientOrder client_order(nullptr, current_user);
    hide();
    client_order.setModal(true);
    client_order.exec();
}


void admin::on_btnEmp_clicked()
{
    employee employeeW(nullptr, current_user);
    hide();
    employeeW.setModal(true);
    employeeW.exec();
}


void admin::on_btnStock_clicked()
{
    stock stockW(nullptr, current_user);
    hide();
    stockW.setModal(true);
    stockW.exec();
}


void admin::on_btnOrder_product_clicked()
{
    order_product order_productW(nullptr, current_user);
    hide();
    order_productW.setModal(true);
    order_productW.exec();
}


void admin::on_btnOrder_clicked()
{
    order orderW(nullptr, current_user);
    hide();
    orderW.setModal(true);
    orderW.exec();
}


void admin::on_btnAuthorization_clicked()
{
    Authorization autW;
    hide();
    autW.setModal(true);
    autW.exec();
}


void admin::on_btnProduct_clicked()
{
    product productW(nullptr, current_user);
    hide();
    productW.setModal(true);
    productW.exec();
}

