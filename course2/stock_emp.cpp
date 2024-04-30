#include "stock_emp.h"
#include "ui_stock_emp.h"

stock_emp::stock_emp(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::stock_emp)
{
    ui->setupUi(this);
}

stock_emp::~stock_emp()
{
    delete ui;
}

void stock_emp::on_btnStock_clicked()
{
    stock stockW(nullptr, current_user);
    hide();
    stockW.setModal(true);
    stockW.exec();
}


void stock_emp::on_btnProduct_clicked()
{
    product productW(nullptr, current_user);
    hide();
    productW.setModal(true);
    productW.exec();
}


void stock_emp::on_btnOrder_product_clicked()
{
    order_product order_productW(nullptr, current_user);
    hide();
    order_productW.setModal(true);
    order_productW.exec();
}


void stock_emp::on_btnAuthorization_clicked()
{
    Authorization autW;
    hide();
    autW.setModal(true);
    autW.exec();
}

