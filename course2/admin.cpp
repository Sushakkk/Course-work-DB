#include "admin.h"
#include "ui_admin.h"
#include "client.h"
#include "company.h"
#include "order_new.h"
#include "order.h"
#include "clientorder.h"
#include "employee.h"


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
    order order;
    hide();
    order.setModal(true);
    order.exec();
}


void admin::on_btnRep_ord_new_clicked()
{
    ClientOrder client_order;
    hide();
    client_order.setModal(true);
    client_order.exec();
}


void admin::on_btnEmp_clicked()
{
    employee employeeW;
    hide();
    employeeW.setModal(true);
    employeeW.exec();
}

