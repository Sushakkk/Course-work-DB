#include "company_profit.h"
#include "ui_company_profit.h"
#include "functions.h"
#include <QTimer>
#include <QScrollArea>
#include <QMessageBox>



company_profit::company_profit(QWidget *parent, const QString &user)
    : QDialog(parent)
    , ui(new Ui::company_profit)
{
    ui->setupUi(this);
    current_user = user;

    connect(ui->btnBack, SIGNAL(clicked(bool)), this, SLOT(back()));

    QTimer::singleShot(0, this, &company_profit::selectAll);
    QStringList columnNames = { "Номер Компании", "Название Компании", "Количество Заказов", "Прибыль" };
    Table(ui->twOrg, columnNames);

    fieldWidgets = {ui->leID, ui->leName, ui->leCount_orders, ui->leSum};

    if (current_user=="Финансовый менеджер"){
        for (auto widget : fieldWidgets) {
            if (auto lineEdit = qobject_cast<QLineEdit*>(widget)) {
                lineEdit->setReadOnly(true);
            } else if (auto comboBox = qobject_cast<QComboBox*>(widget)) {
                comboBox->setEnabled(true); // или comboBox->setEditable(false), если хотите, чтобы он был только для чтения
            }
        }
    }




}

company_profit::~company_profit()
{
    delete ui;
}

void company_profit::dbconnect()
{
    dbconnect_f(dbconn, ui->teResult);

}


void company_profit::selectAll()
{
    selectAll_f(dbconn, ui->teResult, ui->twOrg, tableName, fieldNames);
}




void company_profit::on_twOrg_itemSelectionChanged() {

    on_click_f(ui->twOrg, ui->teResult, fieldNames, fieldWidgets);
}






void company_profit::back()
{
    company companyW(nullptr, current_user);
    hide();
    companyW.setModal(true);
    companyW.exec();
}



void company_profit::on_btnReport_orders_clicked()
{
    QString value= ui->leName->text();
    if(value==""){
         QMessageBox::critical(nullptr, "Error", "Выберите Запись!");

    }else{
        company_orders_search companyW(nullptr, current_user, value);
        hide();
        companyW.setModal(true);
        companyW.exec();
    }

}

