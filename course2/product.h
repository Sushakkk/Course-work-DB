#ifndef PRODUCT_H
#define PRODUCT_H

#include <QDialog>

namespace Ui {
class product;
}

class product : public QDialog
{
    Q_OBJECT

public:
    explicit product(QWidget *parent = nullptr, const QString &user = "");
    ~product();

private:
    Ui::product *ui;
    QString current_user;
};

#endif // PRODUCT_H
