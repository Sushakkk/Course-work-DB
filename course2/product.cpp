#include "product.h"
#include "ui_product.h"

product::product(QWidget *parent, const QString &user)
    : QDialog(parent)
    , ui(new Ui::product)
{
    ui->setupUi(this);
    current_user = user;
}

product::~product()
{
    delete ui;
}
