#include "order_product.h"
#include "ui_order_product.h"
#include "functions.h"
#include "order.h"
#include <QTimer>
#include <QScrollArea>


order_product::order_product(QWidget *parent, const QString &currentId)
    : QDialog(parent)
    , ui(new Ui::order_product)
{
    ui->setupUi(this);



    connect(ui->btnDel_2, SIGNAL(clicked(bool)), this, SLOT(del()));
    connect(ui->btnAdd_2, SIGNAL(clicked(bool)), this, SLOT(add()));  // Подключаем кнопку добавления
    connect(ui->btnEdit_2, SIGNAL(clicked(bool)), this, SLOT(edit()));  // Подключаем кнопку обновления
    connect(ui->btnRemove_2, SIGNAL(clicked(bool)), this, SLOT(remove()));
    connect(ui->btnBack, SIGNAL(clicked(bool)), this, SLOT(back()));

    QTimer::singleShot(0, this, &order_product::selectAll);
    QStringList columnNames = { "Номер операции", "Номер заказа" , "Название товара", "Количество"};
    Table(ui->twOrg, columnNames);

    fieldWidgets = {ui->leID, ui->cbID_order, ui->cbID_product, ui->leQuantity};
    ui->leID->setPlaceholderText("Автоматически");


    ///////////////////////////////////////////////

    QString table = "product";
    QPair<QString, QString> columns = QPair<QString, QString>("pr_id", "pr_name");
    insert_ComboBoxFro(ui->teResult, dbconn, ui->cbID_product, table, columns,1);

    clearComboBoxes(fieldWidgets);
    /////////////////////////////////////////////////

    table = "orders";
    columns= QPair<QString, QString>("order_number", "order_number");



    if(!currentId.isEmpty()){
        flag_for_order=true;
        ui->cbID_order->addItem(currentId);

        ui->cbID_order->setCurrentText(currentId);
        ui->cbID_order->setEnabled(true);
    }
    else{
        ///////////////////////////////////////////////
        insert_ComboBoxFro(ui->teResult, dbconn, ui->cbID_order, table, columns,0);
        clearComboBoxes(fieldWidgets);

    }

}

order_product::~order_product()
{
    delete ui;
}

void order_product::dbconnect()
{
    dbconnect_f(dbconn, ui->teResult);

}


void order_product::selectAll()
{
    selectAll_f(dbconn, ui->teResult, ui->twOrg, tableName, fieldNames);
}


void order_product::add()
{

    add_f(dbconn, fieldNames, fieldWidgets, ui->teResult, tableName);
    selectAll();

}


void order_product::remove()
{
    remove_t(dbconn,ui->teResult, ui->twOrg, tableName, ui->twOrg->currentRow(), fieldNames);
    selectAll();
    del();
}



void order_product::on_twOrg_itemSelectionChanged() {

    on_click_f(ui->twOrg, ui->teResult, fieldNames, fieldWidgets);
}


void order_product::del()
{
    del_f(fieldWidgets);
}


void order_product::edit()
{

    int curRow = ui->twOrg->currentRow();
    edit_f(dbconn, ui->teResult, ui->twOrg, fieldNames, fieldWidgets, curRow, tableName);
    selectAll();
    del();

}


void order_product::back()
{
    if(flag_for_order){
        order orderW;
        hide();
        orderW.setModal(true);
        orderW.exec();
    }else{
        goto_admin(this);
    }

}

