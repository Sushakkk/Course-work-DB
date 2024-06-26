#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "admin.h"
#include "sales_manager.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    admin adminW;
    hide();
    adminW.setModal(true);
    adminW.exec();
    ui->setupUi(this);
    ui->cbLogin->clear();
    for(const QString& value : users) {
        ui->cbLogin->addItem(value);
    }
    ui->cbLogin->setCurrentIndex(-1);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnEntry_clicked()
{


    QString login = ui->cbLogin->currentText();
    QString password = ui->lePass->text();

    for (int i = 0; i < users.size(); ++i) {
        if (login == users[i] && password == user_password[i]) {
            QMessageBox::information(this, "Вход", "Вы успешно вошли");
            if(i==0){
                admin adminW;
                hide();
                adminW.setModal(true);
                adminW.exec();
                return;
            } else if (i==1){
                Sales_Manager sales_managerW;
                hide();
                sales_managerW.setModal(true);
                sales_managerW.exec();

            }else{

                QMessageBox::warning(this, "Вход", "Пользователя не существует");
            }
    }


   }


    // admin adminW;
    // hide();
    // adminW.setModal(true);
    // adminW.exec();

}

