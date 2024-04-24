#ifndef COMPANY_H
#define COMPANY_H

#include <QDialog>
#include <QSqlDatabase>
#include <QLineEdit>

namespace Ui {
class company;
}

class company : public QDialog
{
    Q_OBJECT

public:
    explicit company(QWidget *parent = nullptr);
    ~company();

private slots:

    void dbconnect();
    void selectAll();
    void add();
    void remove();
    void del();
    void edit();
    void on_twOrg_itemSelectionChanged();

    void back();

private:
    Ui::company *ui;
    QSqlDatabase dbconn;
    QString tableName= "company";
    QStringList fieldNames= { "Company_ID","Company_name", "Company_INN", "Company_requisites" };
    QList<QLineEdit*> fieldWidgets;
};

#endif // COMPANY_H







