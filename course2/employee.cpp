#include "employee.h"
#include "ui_employee.h"
#include "functions.h"
#include <QTimer>
#include <QScrollArea>



employee::employee(QWidget *parent, const QString &user)
    : QDialog(parent)
    , ui(new Ui::employee)
{
    ui->setupUi(this);
    current_user = user;



    connect(ui->btnDel_2, SIGNAL(clicked(bool)), this, SLOT(del()));
    connect(ui->btnAdd_2, SIGNAL(clicked(bool)), this, SLOT(add()));  // Подключаем кнопку добавления
    connect(ui->btnEdit_2, SIGNAL(clicked(bool)), this, SLOT(edit()));  // Подключаем кнопку обновления
    connect(ui->btnRemove_2, SIGNAL(clicked(bool)), this, SLOT(remove()));
    connect(ui->btnBack, SIGNAL(clicked(bool)), this, SLOT(back()));

    QTimer::singleShot(0, this, &employee::selectAll);
    QStringList columnNames = { "ID", "ФИО", "Название Компании" };
    Table(ui->twOrg, columnNames);



    fieldWidgets = {ui->leID, ui->leFio_emp, ui->cB_company};
    ui->leID->setPlaceholderText("Автоматически");

///////////////////////////////////////////////
    QString table = "company";
    QPair<QString, QString> columns("company_id", "company_name");
    insert_ComboBoxFro(ui->teResult, dbconn, ui->cB_company, table, columns,1);

/////////////////////////////////////////////////////
    clearComboBoxes(fieldWidgets);





}

employee::~employee()
{
    delete ui;
}

void employee::dbconnect()
{
    dbconnect_f(dbconn, ui->teResult);

}


void employee::selectAll()
{

    selectAll_f(dbconn, ui->teResult, ui->twOrg, tableName, fieldNames);
}


void employee::add()
{

    add_f(dbconn, fieldNames, fieldWidgets, ui->teResult, tableName);
    selectAll();

}


void employee::remove()
{
    remove_t(dbconn,ui->teResult, ui->twOrg, tableName, ui->twOrg->currentRow(), fieldNames);
    selectAll();
    del();
}



void employee::on_twOrg_itemSelectionChanged() {

    on_click_f(ui->twOrg, ui->teResult, fieldNames, fieldWidgets);
}


void employee::del()
{
    del_f(fieldWidgets);
}


void employee::edit()
{

    int curRow = ui->twOrg->currentRow();
    edit_f(dbconn, ui->teResult, ui->twOrg, fieldNames, fieldWidgets, curRow, tableName);
    selectAll();
    del();

}


void employee::back()
{
    goto_admin(this);
}

