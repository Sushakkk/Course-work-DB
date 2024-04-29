#include "authorization.h"
#include "ui_authorization.h"
#include "admin.h"
#include "sales_manager.h"
#include <QMessageBox>

Authorization::Authorization(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Authorization)
{
    ui->setupUi(this);
    ui->cbLogin->clear();
    for(const QString& value : users) {
        ui->cbLogin->addItem(value);
    }
    ui->cbLogin->setCurrentIndex(-1);
}

Authorization::~Authorization()
{
    delete ui;
}

void Authorization::on_btnEntry_clicked()
{


    QString login = ui->cbLogin->currentText();
    QString password = ui->lePass->text();

    bool flag=false;

    for (int i = 0; i < users.size(); ++i) {
        if (login == users[i] && password == user_password[i]) {
            user=users[i];
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


            }
            flag==true;
        }

    }
    if(!flag){
        QMessageBox::warning(this, "Вход", "Пользователя не существует");
        return;
    }


    // admin adminW;
    // hide();
    // adminW.setModal(true);
    // adminW.exec();

}

