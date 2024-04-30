#include "product.h"
#include "ui_product.h"

#include "functions.h"




product::product(QWidget *parent, const QString &user)
    : QDialog(parent)
    , ui(new Ui::product)
{
    ui->setupUi(this);
    current_user = user;



    connect(ui->btnDel_2, SIGNAL(clicked(bool)), this, SLOT(del()));
    connect(ui->btnAdd_2, SIGNAL(clicked(bool)), this, SLOT(add()));  // Подключаем кнопку добавления
    connect(ui->btnEdit_2, SIGNAL(clicked(bool)), this, SLOT(edit()));  // Подключаем кнопку обновления
    connect(ui->btnRemove_2, SIGNAL(clicked(bool)), this, SLOT(remove()));
    connect(ui->btnBack, SIGNAL(clicked(bool)), this, SLOT(back()));

    QTimer::singleShot(0, this, &product::selectAll);
    QStringList columnNames = { "Номер товара", "Название товара", "Цена Товара", "Количество", "Наличие на складе" , "Адрес склада"  };
    Table(ui->twOrg, columnNames);



    fieldWidgets = {ui->lePr_ID, ui->lePr_name, ui->lePr_price, ui->leQuantity, ui->leAvail_stock, ui->cbStock_address};
    ui->leAvail_stock->setReadOnly(true);
    ui->lePr_ID->setReadOnly(true);
    ui->lePr_ID->setPlaceholderText("Автоматически");
    ui->leAvail_stock->setPlaceholderText("Автоматически");
    ///////////////////////////////////////////////
    QString table = "stock";
    QPair<QString, QString> columns("stock_id", "stock_address");
    insert_ComboBoxFro(ui->teResult, dbconn, ui->cbStock_address, table, columns,1);

    /////////////////////////////////////////////////////


    clearComboBoxes(fieldWidgets);





}

product::~product()
{
    delete ui;
}

void product::dbconnect()
{
    dbconnect_f(dbconn, ui->teResult);

}


void product::selectAll()
{

    selectAll_f(dbconn, ui->teResult, ui->twOrg, tableName, fieldNames);
}


void product::add()
{

    add_f(dbconn, fieldNames, fieldWidgets, ui->teResult, tableName);
    selectAll();

}


void product::remove()
{
    remove_t(dbconn,ui->teResult, ui->twOrg, tableName, ui->twOrg->currentRow(), fieldNames);
    selectAll();
    del();
}



void product::on_twOrg_itemSelectionChanged() {

    on_click_f(ui->twOrg, ui->teResult, fieldNames, fieldWidgets);
}


void product::del()
{
    del_f(fieldWidgets);
}


void product::edit()
{

    int curRow = ui->twOrg->currentRow();
    edit_f(dbconn, ui->teResult, ui->twOrg, fieldNames, fieldWidgets, curRow, tableName);
    selectAll();
    del();

}


void product::back()
{
    back_f(this, current_user);
}
