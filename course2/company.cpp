#include "company.h"
#include "ui_company.h"
#include "functions.h"
#include <QTimer>

company::company(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::company)
{
    ui->setupUi(this);


    connect(ui->btnSelectAll, SIGNAL(clicked(bool)), this, SLOT(selectAll()));
    connect(ui->btnConnect, SIGNAL(clicked(bool)), this, SLOT(dbconnect()));
    connect(ui->btnDel_2, SIGNAL(clicked(bool)), this, SLOT(del()));
    connect(ui->btnAdd_2, SIGNAL(clicked(bool)), this, SLOT(add()));  // Подключаем кнопку добавления
    connect(ui->btnEdit_2, SIGNAL(clicked(bool)), this, SLOT(edit()));  // Подключаем кнопку обновления
    connect(ui->btnRemove_2, SIGNAL(clicked(bool)), this, SLOT(remove()));

    QTimer::singleShot(0, this, &company::selectAll);
    QStringList columnNames = { "ID", "Name", "INN", "Requisites" };
    Table(ui->twOrg, columnNames);

    fieldWidgets = {ui->leID_2, ui->leName_2, ui->leINN_2};


    ////////////////////преобразование типа//////////////////


    QLineEdit *lineEdit = dynamic_cast<QLineEdit*>(ui->teReq_2);
    if (lineEdit) {
        fieldWidgets.append(lineEdit);
    } else {
        qDebug() << "Failed to cast teReq_2 to QLineEdit*";
    }
    ////////////////////////////////////////////////////////////////

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
    QStringList values;
    for (const auto &widget : fieldWidgets) {
        if (auto lineEdit = qobject_cast<QLineEdit*>(widget)) {
            values << lineEdit->text();
        } else if (auto textEdit = qobject_cast<QTextEdit*>(widget)) {
            values << textEdit->toPlainText();
        }
    }
    add_f(dbconn, fieldNames, values, ui->teResult, tableName);
    selectAll();

}


void company::remove()
{
    remove_t(dbconn,ui->teResult, ui->twOrg, tableName, ui->twOrg->currentRow());
    selectAll();
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









