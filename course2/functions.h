#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <QTextEdit>
#include <QTableWidget>
#include <QStringList>
#include <QSqlDatabase>
#include <QDebug>
#include <QLineEdit> // Добавим для работы с QLineEdit

void dbconnect_f(QSqlDatabase &dbconn, QTextEdit *teResult);
void selectAll_f(QSqlDatabase &dbconn, QTextEdit *teResult, QTableWidget *twOrg, const QString &tableName, const QStringList &fieldNames);
void Table(QTableWidget *tableWidget, const QStringList &columnNames);
void remove_t(QSqlDatabase &dbconn, QTextEdit *teResult, QTableWidget *tableWidget, const QString &tableName, int row, const QStringList &columnNames);
void add_f(QSqlDatabase &dbconn, const QStringList &columnNames, const QStringList &values, QTextEdit *teResult, const QString &tableName);

void del_f(const QList<QLineEdit*> &fieldWidgets); // Объявление функции clearAndSetInputFields

void on_click_f(QTableWidget *twOrg, QTextEdit *teResult, const QStringList &fieldNames, const QList<QLineEdit*> &fieldWidgets);



void edit_f(QSqlDatabase &dbconn, QTextEdit *teResult, QTableWidget *tableWidget, const QStringList &columnNames, const QList<QLineEdit*> &fieldWidgets, int curRow,  const QString &tableName);




#endif // FUNCTIONS_H
