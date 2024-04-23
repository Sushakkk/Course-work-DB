/********************************************************************************
** Form generated from reading UI file 'client.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_H
#define UI_CLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Client
{
public:
    QFrame *frame;
    QLabel *lbEmail;
    QLineEdit *leFio;
    QLabel *lbID;
    QLabel *lbFIO;
    QPushButton *btnDel;
    QLineEdit *leID;
    QPushButton *btnRemove;
    QPushButton *btnEdit;
    QPushButton *btnAdd;
    QLineEdit *leEmail;
    QTableWidget *twOrg;
    QPushButton *btnConnect;
    QPushButton *btnSelectAll;
    QTextEdit *teResult;

    void setupUi(QDialog *Client)
    {
        if (Client->objectName().isEmpty())
            Client->setObjectName("Client");
        Client->resize(753, 582);
        frame = new QFrame(Client);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(10, 20, 361, 326));
        frame->setMinimumSize(QSize(335, 326));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lbEmail = new QLabel(frame);
        lbEmail->setObjectName("lbEmail");
        lbEmail->setGeometry(QRect(10, 183, 29, 16));
        leFio = new QLineEdit(frame);
        leFio->setObjectName("leFio");
        leFio->setGeometry(QRect(81, 116, 241, 22));
        lbID = new QLabel(frame);
        lbID->setObjectName("lbID");
        lbID->setGeometry(QRect(10, 49, 16, 16));
        lbFIO = new QLabel(frame);
        lbFIO->setObjectName("lbFIO");
        lbFIO->setGeometry(QRect(10, 116, 27, 16));
        btnDel = new QPushButton(frame);
        btnDel->setObjectName("btnDel");
        btnDel->setGeometry(QRect(195, 250, 75, 24));
        leID = new QLineEdit(frame);
        leID->setObjectName("leID");
        leID->setGeometry(QRect(78, 49, 251, 22));
        btnRemove = new QPushButton(frame);
        btnRemove->setObjectName("btnRemove");
        btnRemove->setGeometry(QRect(276, 250, 75, 24));
        btnEdit = new QPushButton(frame);
        btnEdit->setObjectName("btnEdit");
        btnEdit->setGeometry(QRect(91, 250, 75, 24));
        btnAdd = new QPushButton(frame);
        btnAdd->setObjectName("btnAdd");
        btnAdd->setGeometry(QRect(10, 250, 75, 24));
        leEmail = new QLineEdit(frame);
        leEmail->setObjectName("leEmail");
        leEmail->setGeometry(QRect(87, 183, 241, 22));
        twOrg = new QTableWidget(Client);
        twOrg->setObjectName("twOrg");
        twOrg->setGeometry(QRect(390, 0, 341, 341));
        btnConnect = new QPushButton(Client);
        btnConnect->setObjectName("btnConnect");
        btnConnect->setGeometry(QRect(90, 380, 75, 24));
        btnSelectAll = new QPushButton(Client);
        btnSelectAll->setObjectName("btnSelectAll");
        btnSelectAll->setGeometry(QRect(280, 380, 305, 41));
        btnSelectAll->setMinimumSize(QSize(305, 0));
        teResult = new QTextEdit(Client);
        teResult->setObjectName("teResult");
        teResult->setGeometry(QRect(20, 440, 782, 233));
        teResult->setReadOnly(true);

        retranslateUi(Client);

        QMetaObject::connectSlotsByName(Client);
    } // setupUi

    void retranslateUi(QDialog *Client)
    {
        Client->setWindowTitle(QCoreApplication::translate("Client", "Dialog", nullptr));
        lbEmail->setText(QCoreApplication::translate("Client", "Email", nullptr));
        lbID->setText(QCoreApplication::translate("Client", "ID", nullptr));
        lbFIO->setText(QCoreApplication::translate("Client", "\320\244\320\230\320\236", nullptr));
        btnDel->setText(QCoreApplication::translate("Client", "Del", nullptr));
        btnRemove->setText(QCoreApplication::translate("Client", "Remove", nullptr));
        btnEdit->setText(QCoreApplication::translate("Client", "Edit", nullptr));
        btnAdd->setText(QCoreApplication::translate("Client", "Add", nullptr));
        btnConnect->setText(QCoreApplication::translate("Client", "Connect", nullptr));
        btnSelectAll->setText(QCoreApplication::translate("Client", "Select All", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Client: public Ui_Client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H
