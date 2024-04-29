#include "client.h"
#include "ui_client.h"
#include "functions.h"
#include "mainwindow.h"
#include <QSqlQuery> // Импортируем необходимые заголовочные файлы

Client::Client(QWidget *parent, const QString &user, bool report)
    : QDialog(parent)
    , ui(new Ui::Client)
{
    ui->setupUi(this);
    current_user = user;
    if(current_user!="Менеджер по продажам"){
        ui->btnReport->hide();
    }


    // Подключаем сигналы и слоты
    connect(ui->btnDel_2, SIGNAL(clicked(bool)), this, SLOT(del()));
    connect(ui->btnAdd_2, SIGNAL(clicked(bool)), this, SLOT(add()));
    connect(ui->btnEdit_2, SIGNAL(clicked(bool)), this, SLOT(edit()));
    connect(ui->btnRemove_2, SIGNAL(clicked(bool)), this, SLOT(remove()));
    connect(ui->btnBack, SIGNAL(clicked(bool)), this, SLOT(back()));

    QTimer::singleShot(0, this, &Client::selectAll);

    // Создаем список заголовков столбцов
    QStringList columnNames = { "ID", "ФИО", "Email" };

    // Вызываем функцию для настройки таблицы
    Table(ui->twOrg, columnNames);

    // Создаем список полей ввода для полей таблицы
    fieldWidgets = {ui->leID_2, ui->leFio_2, ui->leEmail_2};

    ui->leID_2->setPlaceholderText("Автоматически");

    if (report==false){
        for (auto widget : fieldWidgets) {
            if (auto lineEdit = qobject_cast<QLineEdit*>(widget)) {
                lineEdit->setReadOnly(true);
            } else if (auto comboBox = qobject_cast<QComboBox*>(widget)) {
                comboBox->setEnabled(true); // или comboBox->setEditable(false), если хотите, чтобы он был только для чтения
            }
        }

        ui->frame_Buttons->hide();
        ui->frame_title_Form->hide();

        // Переместите объявление countQuery сюда
        QSqlQuery countQuery(dbconn); // Затем создаем объект QSqlQuery

        if (!countQuery.exec(QString("SELECT COUNT(*) FROM %1").arg(tableName))) {
            return;
        }

        countQuery.next();
        int rowCount = countQuery.value(0).toInt(); // Получаем количество строк в таблице

        ui->lbSum_client->setText(QString::number(rowCount)); // Устанавливаем количество строк в QLabel
        ui->lbSum_client->setEnabled(true);
    }
    else{
        //для основной формы
        ui->frame_title_Report->hide();
        ui->Full_Client->hide();
    }
}


Client::~Client()
{
    delete ui;
}


void Client::dbconnect()
{
    dbconnect_f(dbconn, ui->teResult);

}


void Client::selectAll()
{
    selectAll_f(dbconn, ui->teResult, ui->twOrg, tableName, fieldNames);

}


void Client::add()
{

    add_f(dbconn, fieldNames, fieldWidgets, ui->teResult, tableName);
    selectAll();

}


void Client::remove()
{
    remove_t(dbconn,ui->teResult, ui->twOrg, tableName, ui->twOrg->currentRow(), fieldNames);
    selectAll();
    del();
}



void Client::on_twOrg_itemSelectionChanged() {
    on_click_f(ui->twOrg, ui->teResult, fieldNames, fieldWidgets);
}



void Client::del()
{
    del_f(fieldWidgets);
}



void Client::edit()
{
    int curRow = ui->twOrg->currentRow();

    edit_f(dbconn, ui->teResult, ui->twOrg, fieldNames, fieldWidgets, curRow, tableName);

    selectAll();
    del();

}

void Client::back()
{
   back_f(this,current_user);
}




void Client::on_btnReport_clicked()
{

    Client orderW(nullptr, current_user, false);
    hide();
    orderW.setModal(true);
    orderW.exec();
}

