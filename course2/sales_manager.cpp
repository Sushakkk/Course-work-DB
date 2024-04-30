#include "sales_manager.h"
#include "ui_sales_manager.h"
#include "mainwindow.h"


Sales_Manager::Sales_Manager(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Sales_Manager)
{
    ui->setupUi(this);
}

Sales_Manager::~Sales_Manager()
{
    delete ui;
}

void Sales_Manager::on_btnAuthorization_clicked()
{
    Authorization autW;
    hide();
    autW.setModal(true);
    autW.exec();
}



void Sales_Manager::on_btnOrder_clicked()
{
    order orderW(nullptr, current_user);
    hide();
    orderW.setModal(true);
    orderW.exec();
}


void Sales_Manager::on_btnClient_clicked()
{
    Client ClientW(nullptr, current_user);
    hide();
    ClientW.setModal(true);
    ClientW.exec();
}


void Sales_Manager::on_btnOrder_product_clicked()
{
    order_product order_productW(nullptr, current_user);
    hide();
    order_productW.setModal(true);
    order_productW.exec();
}

