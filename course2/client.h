#ifndef CLIENT_H
#define CLIENT_H

#include <QDialog>
#include <QSqlDatabase>

#include <QLineEdit> // Добавим для работы с QLineEdit


namespace Ui {
class Client;
}

class Client : public QDialog
{
    Q_OBJECT

public:
    explicit Client(QWidget *parent = nullptr, const QString &user = "", bool report=true);
    ~Client();

private slots:

    void dbconnect();
    void selectAll();
    void add();
    void remove();
    void del();
    void on_twOrg_itemSelectionChanged();

    void back();
    void edit();

    void on_btnReport_clicked();

private:
    Ui::Client *ui;
    QSqlDatabase dbconn;
    QString tableName= "client";
    QStringList fieldNames= { "client_ID", "client_fio", "cl_contact_inf" };
    QList<QWidget*> fieldWidgets;
    QString current_user;

};

#endif // CLIENT_H
