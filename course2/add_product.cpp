#include "add_product.h"
#include "ui_add_product.h"
#include "functions.h"
#include <QTimer>
#include <QScrollArea>




    add_product::add_product(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::add_product)
{
    ui->setupUi(this);



    connect(ui->btnDel_2, SIGNAL(clicked(bool)), this, SLOT(del()));
    connect(ui->btnAdd_2, SIGNAL(clicked(bool)), this, SLOT(add()));  // Подключаем кнопку добавления
    connect(ui->btnEdit_2, SIGNAL(clicked(bool)), this, SLOT(edit()));  // Подключаем кнопку обновления
    connect(ui->btnRemove_2, SIGNAL(clicked(bool)), this, SLOT(remove()));


    QTimer::singleShot(0, this, &add_product::selectAll);
    QStringList columnNames = {"Номер", "Название товара", "Количество"};
    Table(ui->twOrg, columnNames);

    fieldWidgets = {ui->leOp,ui->cbID_product, ui->leQuantity};
    ui->leOp->setReadOnly(true);

    ///////////////////////////////////////////////
    QString table = "product";
    QPair<QString, QString> columns = QPair<QString, QString>("pr_id", "pr_name");
    insert_ComboBoxFro(ui->teResult, dbconn, ui->cbID_product, table, columns,1);
    /////////////////////////////////////////////////
    clearComboBoxes(fieldWidgets);


}

add_product::~add_product()
{
    delete ui;
}

void add_product::dbconnect()
{
    dbconnect_f(dbconn, ui->teResult);

}


void add_product::selectAll()
{
    selectAll_f(dbconn, ui->teResult, ui->twOrg, tableName, fieldNames);
}


void add_product::add()
{

    add_f(dbconn, fieldNames, fieldWidgets, ui->teResult, tableName);
    selectAll();

}


void add_product::remove()
{
    remove_t(dbconn,ui->teResult, ui->twOrg, tableName, ui->twOrg->currentRow(), fieldNames);
    selectAll();
    del();
}



void add_product::on_twOrg_itemSelectionChanged() {

    on_click_f(ui->twOrg, ui->teResult, fieldNames, fieldWidgets);
}


void add_product::del()
{
    del_f(fieldWidgets);
}


void add_product::edit()
{

    int curRow = ui->twOrg->currentRow();
    edit_f(dbconn, ui->teResult, ui->twOrg, fieldNames, fieldWidgets, curRow, tableName);
    selectAll();
    del();

}





void add_product::on_btnAdd_clicked()
{

}


void add_product::del_table (){

    // // Подключение к базе данных
    // dbconnect_f(dbconn, ui->teResult);
    // if (!dbconn.isOpen())
    // {
    //     qDebug() << "Error: Database connection is not open.";
    //     return;
    // }

    // // Формирование SQL-запроса для удаления всех записей из таблицы
    // QString queryStr = QString("DELETE FROM %1").arg(tableName);

    // // Выполнение SQL-запроса
    // QSqlQuery query(dbconn);
    // if (!query.exec(queryStr))
    // {
    //     qDebug() << "Error executing query:" << query.lastError().text();
    //     return;
    // }

    // // Очистка полей ввода
    // clear_fields(fieldWidgets);

}
