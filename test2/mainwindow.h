#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QtSql>
#include <QtCore>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void dbconnect();

private slots:
    void on_btnConnect_clicked();
    void on_btnSelectAll_clicked();
    // void on_btnAdd_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase dbconn;
};

#endif // MAINWINDOW_H
