#include "company_orders_search.h"
#include "ui_company_orders_search.h"
#include "mainwindow.h"
#include "functions.h"



company_orders_search::company_orders_search(QWidget *parent, const QString &user, const QString &name)
    : QDialog(parent)
    , ui(new Ui::company_orders_search)
{
    ui->setupUi(this);
    current_user = user;
    current_name =name;


    connect(ui->btnBack, SIGNAL(clicked(bool)), this, SLOT(back()));


    QStringList columnNames = { "Название Компании", "Номер Заказа","Дата", "ФИО Клиента", "Сумма заказа" };
    Table(ui->twOrg, columnNames);


    fieldWidgets = {ui->leComp_name,ui->leOrder_number,ui->leDate, ui->leFio_client, ui->leSum_order};
    for (auto widget : fieldWidgets) {
        if (auto lineEdit = qobject_cast<QLineEdit*>(widget)) {
            lineEdit->setReadOnly(true);
        } else if (auto comboBox = qobject_cast<QComboBox*>(widget)) {
            comboBox->setEnabled(true); // или comboBox->setEditable(false), если хотите, чтобы он был только для чтения
        }
    }
    if(name!=""){
        ui->cbComp_name->hide();
        ui->btnReport->hide();
         QTimer::singleShot(0, this, &company_orders_search::selectAll);
    }else{

        QString table = "company";
        QPair<QString, QString> columns("company_id", "company_name");
        insert_ComboBoxFro(ui->teResult, dbconn, ui->cbComp_name, table, columns,1);

        ui->cbComp_name->setCurrentIndex(-1);
        ui->cbComp_name->setPlaceholderText("Выберите Компанию");
    }




}

company_orders_search::~company_orders_search()
{
    delete ui;
}



void company_orders_search::dbconnect()
{
    dbconnect_f(dbconn, ui->teResult);

}

void company_orders_search::selectAll()
{


    QString str = "company_name = '%1'";
    str = str.arg(current_name);
    selectAll_f_report(dbconn, ui->teResult, ui->twOrg, tableName, fieldNames,str);


}


void company_orders_search::back()
{
    if(current_name!=""){
        company_profit companyW(nullptr, current_user);
        hide();
        companyW.setModal(true);
        companyW.exec();
    }else{
        back_f(this, current_user);}
}


void company_orders_search::on_twOrg_itemSelectionChanged() {

    on_click_f(ui->twOrg, ui->teResult, fieldNames, fieldWidgets);
}




void company_orders_search::on_btnReport_clicked()
{
    QString currentValue = ui->cbComp_name->currentText();
    if (currentValue!=""){
        QString str = "company_name = '%1'";
        str = str.arg(currentValue);
        selectAll_f_report(dbconn, ui->teResult, ui->twOrg, tableName, fieldNames,str);
    }
}

