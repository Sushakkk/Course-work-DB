#include "financial_manager.h"
#include "ui_financial_manager.h"

Financial_Manager::Financial_Manager(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Financial_Manager)
{
    ui->setupUi(this);
}

Financial_Manager::~Financial_Manager()
{
    delete ui;
}

void Financial_Manager::on_btnCompany_clicked()
{
    company companyW(nullptr, current_user);
    hide();
    companyW.setModal(true);
    companyW.exec();
}


void Financial_Manager::on_btnCompany_orders_clicked()
{
    company_orders_search companyW(nullptr, current_user);
    hide();
    companyW.setModal(true);
    companyW.exec();
}


void Financial_Manager::on_btnAuthorization_clicked()
{
    Authorization autW;
    hide();
    autW.setModal(true);
    autW.exec();
}

