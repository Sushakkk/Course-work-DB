#include "company.h"
#include "ui_company.h"
#include "functions.h"
#include <QTimer>
#include <QScrollArea>



company::company(QWidget *parent, const QString &user)
    : QDialog(parent)
    , ui(new Ui::company)
{
    ui->setupUi(this);
    current_user = user;



    connect(ui->btnDel_2, SIGNAL(clicked(bool)), this, SLOT(del()));
    connect(ui->btnAdd_2, SIGNAL(clicked(bool)), this, SLOT(add()));  // Подключаем кнопку добавления
    connect(ui->btnEdit_2, SIGNAL(clicked(bool)), this, SLOT(edit()));  // Подключаем кнопку обновления
    connect(ui->btnRemove_2, SIGNAL(clicked(bool)), this, SLOT(remove()));
    connect(ui->btnBack, SIGNAL(clicked(bool)), this, SLOT(back()));

    QTimer::singleShot(0, this, &company::selectAll);
    QStringList columnNames = { "ID", "Название Компании", "ИНН", "Реквизиты" };
    Table(ui->twOrg, columnNames);

    fieldWidgets = {ui->leID_2, ui->leName_2, ui->leINN_2, ui->leRec};
    ui->leID_2->setPlaceholderText("Автоматически");

    if (current_user=="Финансовый менеджер"){
            for (auto widget : fieldWidgets) {
            if (auto lineEdit = qobject_cast<QLineEdit*>(widget)) {
                lineEdit->setReadOnly(true);
            } else if (auto comboBox = qobject_cast<QComboBox*>(widget)) {
                comboBox->setEnabled(true); // или comboBox->setEditable(false), если хотите, чтобы он был только для чтения
            }
        }
    }else{
        ui->btnReport->hide();
    }




}

company::~company()
{
    delete ui;
}

void company::dbconnect()
{
    dbconnect_f(dbconn, ui->teResult);

}


void company::selectAll()
{
    selectAll_f(dbconn, ui->teResult, ui->twOrg, tableName, fieldNames);
}


void company::add()
{

    add_f(dbconn, fieldNames, fieldWidgets, ui->teResult, tableName);
    selectAll();

}


void company::remove()
{
    remove_t(dbconn,ui->teResult, ui->twOrg, tableName, ui->twOrg->currentRow(), fieldNames);
    selectAll();
    del();
}



void company::on_twOrg_itemSelectionChanged() {

    on_click_f(ui->twOrg, ui->teResult, fieldNames, fieldWidgets);
}


void company::del()
{
    del_f(fieldWidgets);
}


void company::edit()
{

    int curRow = ui->twOrg->currentRow();
    edit_f(dbconn, ui->teResult, ui->twOrg, fieldNames, fieldWidgets, curRow, tableName);
    selectAll();
    del();

}


void company::back()
{
  back_f(this,current_user);
}


void company::on_btnReport_clicked()
{
    company_profit companyW(nullptr, current_user);
    hide();
    companyW.setModal(true);
    companyW.exec();
}

