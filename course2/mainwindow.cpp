#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "admin.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnEntry_clicked()
{
    QString login = ui->leLogin->text();
    QString password = ui->lePass->text();

    // if(login=="student" && password =="123"){
    //     QMessageBox::information(this, "Вход", "Вы успешно вошли");
    //     //ui->statusbar->showMessage("Вы успешно вошли");
    //     admin adminW;
    //     hide();
    //     adminW.setModal(true);
    //     adminW.exec();
    // }else {
    //     QMessageBox::warning(this, "Вход", "Пользователя не существует");
    //     //ui->statusbar->showMessage("Пользователя не существует");
    // }



    admin adminW;
    hide();
    adminW.setModal(true);
    adminW.exec();

}

