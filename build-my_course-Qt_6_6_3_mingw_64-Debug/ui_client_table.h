/********************************************************************************
** Form generated from reading UI file 'client_table.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_TABLE_H
#define UI_CLIENT_TABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *lbEmail;
    QLineEdit *leFio;
    QLabel *lbID;
    QLabel *lbFIO;
    QPushButton *btnDel;
    QLineEdit *leID;
    QPushButton *btnRemove;
    QPushButton *btnEdit;
    QLineEdit *leEmail;
    QPushButton *btnAdd;
    QTableWidget *twOrg;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(744, 575);
        frame = new QFrame(Dialog);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(-7, 40, 401, 341));
        frame->setMinimumSize(QSize(335, 326));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName("gridLayout");
        lbEmail = new QLabel(frame);
        lbEmail->setObjectName("lbEmail");

        gridLayout->addWidget(lbEmail, 2, 0, 1, 1);

        leFio = new QLineEdit(frame);
        leFio->setObjectName("leFio");

        gridLayout->addWidget(leFio, 1, 1, 1, 2);

        lbID = new QLabel(frame);
        lbID->setObjectName("lbID");

        gridLayout->addWidget(lbID, 0, 0, 1, 1);

        lbFIO = new QLabel(frame);
        lbFIO->setObjectName("lbFIO");

        gridLayout->addWidget(lbFIO, 1, 0, 1, 1);

        btnDel = new QPushButton(frame);
        btnDel->setObjectName("btnDel");

        gridLayout->addWidget(btnDel, 3, 2, 1, 1);

        leID = new QLineEdit(frame);
        leID->setObjectName("leID");

        gridLayout->addWidget(leID, 0, 1, 1, 1);

        btnRemove = new QPushButton(frame);
        btnRemove->setObjectName("btnRemove");

        gridLayout->addWidget(btnRemove, 3, 3, 1, 1);

        btnEdit = new QPushButton(frame);
        btnEdit->setObjectName("btnEdit");

        gridLayout->addWidget(btnEdit, 3, 1, 1, 1);

        leEmail = new QLineEdit(frame);
        leEmail->setObjectName("leEmail");

        gridLayout->addWidget(leEmail, 2, 1, 1, 2);

        btnAdd = new QPushButton(frame);
        btnAdd->setObjectName("btnAdd");

        gridLayout->addWidget(btnAdd, 3, 0, 1, 1);

        twOrg = new QTableWidget(Dialog);
        twOrg->setObjectName("twOrg");
        twOrg->setGeometry(QRect(390, 40, 341, 341));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        lbEmail->setText(QCoreApplication::translate("Dialog", "Email", nullptr));
        lbID->setText(QCoreApplication::translate("Dialog", "ID", nullptr));
        lbFIO->setText(QCoreApplication::translate("Dialog", "\320\244\320\230\320\236", nullptr));
        btnDel->setText(QCoreApplication::translate("Dialog", "Del", nullptr));
        btnRemove->setText(QCoreApplication::translate("Dialog", "Remove", nullptr));
        btnEdit->setText(QCoreApplication::translate("Dialog", "Edit", nullptr));
        btnAdd->setText(QCoreApplication::translate("Dialog", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_TABLE_H
