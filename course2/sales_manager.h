#ifndef SALES_MANAGER_H
#define SALES_MANAGER_H

#include <QDialog>

namespace Ui {
class Sales_Manager;
}

class Sales_Manager : public QDialog
{
    Q_OBJECT

public:
    explicit Sales_Manager(QWidget *parent = nullptr);
    ~Sales_Manager();

private slots:
    void on_btnAuthorization_clicked();

    void on_btnOrder_clicked();

    void on_btnClient_clicked();

private:
    Ui::Sales_Manager *ui;
    QString current_user= "Менеджер по продажам";
};

#endif // SALES_MANAGER_H
