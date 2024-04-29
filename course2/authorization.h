#ifndef AUTHORIZATION_H
#define AUTHORIZATION_H

#include <QDialog>
#include <QMainWindow>
#include <QSqlDatabase>

namespace Ui {
class Authorization;
}

class Authorization : public QDialog
{
    Q_OBJECT

public:
    explicit Authorization(QWidget *parent = nullptr);
    ~Authorization();

private slots:
    void on_btnEntry_clicked();

private:
    Ui::Authorization *ui;
    QSqlDatabase dbconn;
    QString user;
    QStringList users = {"Администратор", "Менеджер по продажам", "Сотрудник склада", "Финансовый менеджер"};
    QStringList user_password = {"1", "2", "3", "4"};
};
#endif // MAINWINDOW_H

