#include "order.h"
#include "ui_order.h"
#include "functions.h"
#include "order_product.h"
#include "clientorder.h"

#include <QSqlQuery>


order::order(QWidget *parent, const QString &user)
    : QDialog(parent)
    , ui(new Ui::order)
{
    ui->setupUi(this);

    current_user = user;
    if(current_user!="Менеджер по продажам"){
        ui->btnReport_order->hide();
    }


    connect(ui->btnDel_2, SIGNAL(clicked(bool)), this, SLOT(del()));
    connect(ui->btnAdd_2, SIGNAL(clicked(bool)), this, SLOT(add()));  // Подключаем кнопку добавления
    connect(ui->btnEdit_2, SIGNAL(clicked(bool)), this, SLOT(edit()));  // Подключаем кнопку обновления
    connect(ui->btnRemove_2, SIGNAL(clicked(bool)), this, SLOT(remove()));
    connect(ui->btnBack, SIGNAL(clicked(bool)), this, SLOT(back()));

    QTimer::singleShot(0, this, &order::selectAll);
    QStringList columnNames = { "Номер Заказа", "Дата","ФИО Клиента", "ФИO Сотрудника", "Оплата"};
    Table(ui->twOrg, columnNames);



    fieldWidgets = {ui->leOrder_number, ui->leDate_2, ui->cbFio_client, ui->cbFio_emp, ui->cBpay};
    ui->leOrder_number->setPlaceholderText("Автоматически");
    ui->leDate_2->setPlaceholderText("Автоматически");


    ///////////////////////////////////////////////
    QString table = "client";
    QPair<QString, QString> columns("client_id", "client_fio");
    insert_ComboBoxFro(ui->teResult, dbconn, ui->cbFio_client, table, columns,1);

    ///////////////////////////////////////////////
    table = "employee";
    columns = QPair<QString, QString>("emp_id", "emp_fio");
    insert_ComboBoxFro(ui->teResult, dbconn, ui->cbFio_emp, table, columns,1);
    /////////////////////////////////////////////////

   // ui->btnDel_2->setVisible(false);






}

order::~order()
{
    delete ui;
}



void order::dbconnect()
{
    dbconnect_f(dbconn, ui->teResult);

}


void order::selectAll()
{
    selectAll_f(dbconn, ui->teResult, ui->twOrg, tableName, fieldNames);
    del();
}


void order::back()
{
    back_f(this,current_user);
}


void order::on_twOrg_itemSelectionChanged() {

    on_click_f(ui->twOrg, ui->teResult, fieldNames, fieldWidgets);
}



void order::add()
{

    add_f(dbconn, fieldNames, fieldWidgets, ui->teResult, tableName);
    selectAll();


    QSqlQuery countQuery(dbconn);
    if (!countQuery.exec(QString("SELECT COUNT(*) FROM %1").arg(tableName))) {
        //teResult->append(countQuery.lastQuery());
        //QMessageBox::critical(nullptr, "Error", countQuery.lastError().text());
        return;
    }

    countQuery.next();
    int rowCount = countQuery.value(0).toInt(); // Получаем количество строк в таблице
    currentId = QString::number(rowCount); // Преобразуем в строку



    order_product order_productW(nullptr,current_user, currentId);
    hide();
    order_productW.setModal(true);
    order_productW.exec();
}


void order::remove()
{
    remove_t(dbconn,ui->teResult, ui->twOrg, tableName, ui->twOrg->currentRow(), fieldNames);
    selectAll();
    del();
}



void order::del()
{
    del_f(fieldWidgets);
}


void order::edit()
{

    int curRow = ui->twOrg->currentRow();
    edit_f(dbconn, ui->teResult, ui->twOrg, fieldNames, fieldWidgets, curRow, tableName);
    selectAll();
    del();

}

void order::on_btnReport_order_clicked()
{
    ClientOrder orderW(nullptr, current_user);
    hide();
    orderW.setModal(true);
    orderW.exec();
}

