#ifndef ADMIN_H
#define ADMIN_H

#include <QDialog>
#include <QSqlDatabase>

namespace Ui {
class admin;
}

class admin : public QDialog
{
    Q_OBJECT

public:
    explicit admin(QWidget *parent = nullptr);
    ~admin();

private slots:
    void on_btnClient_clicked();

    void on_btnCompany_clicked();

    void on_btnOrder_clicked();

private:
    Ui::admin *ui;
};

#endif // ADMIN_H
