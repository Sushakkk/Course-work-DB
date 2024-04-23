/********************************************************************************
** Form generated from reading UI file 'company.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPANY_H
#define UI_COMPANY_H

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
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_company
{
public:
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QLabel *lbINN_2;
    QLabel *lbRequisites_2;
    QPushButton *btnDel_2;
    QPushButton *btnEdit_2;
    QLineEdit *leINN_2;
    QLineEdit *leID_2;
    QPushButton *btnAdd_2;
    QLineEdit *leName_2;
    QLabel *lbID_2;
    QLabel *lbName_2;
    QPushButton *btnRemove_2;
    QTextEdit *teReq_2;
    QPushButton *btnConnect;
    QTextEdit *teResult;
    QTableWidget *twOrg;
    QPushButton *btnSelectAll;

    void setupUi(QDialog *company)
    {
        if (company->objectName().isEmpty())
            company->setObjectName("company");
        company->resize(823, 620);
        frame = new QFrame(company);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(3, 40, 471, 326));
        frame->setMinimumSize(QSize(335, 326));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName("gridLayout_2");
        lbINN_2 = new QLabel(frame);
        lbINN_2->setObjectName("lbINN_2");

        gridLayout_2->addWidget(lbINN_2, 2, 0, 1, 1);

        lbRequisites_2 = new QLabel(frame);
        lbRequisites_2->setObjectName("lbRequisites_2");

        gridLayout_2->addWidget(lbRequisites_2, 3, 0, 1, 1);

        btnDel_2 = new QPushButton(frame);
        btnDel_2->setObjectName("btnDel_2");

        gridLayout_2->addWidget(btnDel_2, 4, 2, 1, 1);

        btnEdit_2 = new QPushButton(frame);
        btnEdit_2->setObjectName("btnEdit_2");

        gridLayout_2->addWidget(btnEdit_2, 4, 1, 1, 1);

        leINN_2 = new QLineEdit(frame);
        leINN_2->setObjectName("leINN_2");

        gridLayout_2->addWidget(leINN_2, 2, 1, 1, 2);

        leID_2 = new QLineEdit(frame);
        leID_2->setObjectName("leID_2");

        gridLayout_2->addWidget(leID_2, 0, 1, 1, 1);

        btnAdd_2 = new QPushButton(frame);
        btnAdd_2->setObjectName("btnAdd_2");

        gridLayout_2->addWidget(btnAdd_2, 4, 0, 1, 1);

        leName_2 = new QLineEdit(frame);
        leName_2->setObjectName("leName_2");

        gridLayout_2->addWidget(leName_2, 1, 1, 1, 2);

        lbID_2 = new QLabel(frame);
        lbID_2->setObjectName("lbID_2");

        gridLayout_2->addWidget(lbID_2, 0, 0, 1, 1);

        lbName_2 = new QLabel(frame);
        lbName_2->setObjectName("lbName_2");

        gridLayout_2->addWidget(lbName_2, 1, 0, 1, 1);

        btnRemove_2 = new QPushButton(frame);
        btnRemove_2->setObjectName("btnRemove_2");

        gridLayout_2->addWidget(btnRemove_2, 4, 3, 1, 1);

        teReq_2 = new QTextEdit(frame);
        teReq_2->setObjectName("teReq_2");

        gridLayout_2->addWidget(teReq_2, 3, 1, 1, 2);

        btnConnect = new QPushButton(company);
        btnConnect->setObjectName("btnConnect");
        btnConnect->setGeometry(QRect(3, 10, 75, 24));
        teResult = new QTextEdit(company);
        teResult->setObjectName("teResult");
        teResult->setGeometry(QRect(3, 372, 782, 233));
        teResult->setReadOnly(true);
        twOrg = new QTableWidget(company);
        twOrg->setObjectName("twOrg");
        twOrg->setGeometry(QRect(480, 40, 305, 326));
        btnSelectAll = new QPushButton(company);
        btnSelectAll->setObjectName("btnSelectAll");
        btnSelectAll->setGeometry(QRect(480, 10, 305, 24));
        btnSelectAll->setMinimumSize(QSize(305, 0));

        retranslateUi(company);

        QMetaObject::connectSlotsByName(company);
    } // setupUi

    void retranslateUi(QDialog *company)
    {
        company->setWindowTitle(QCoreApplication::translate("company", "Dialog", nullptr));
        lbINN_2->setText(QCoreApplication::translate("company", "INN", nullptr));
        lbRequisites_2->setText(QCoreApplication::translate("company", "Requisites", nullptr));
        btnDel_2->setText(QCoreApplication::translate("company", "Del", nullptr));
        btnEdit_2->setText(QCoreApplication::translate("company", "Edit", nullptr));
        btnAdd_2->setText(QCoreApplication::translate("company", "Add", nullptr));
        lbID_2->setText(QCoreApplication::translate("company", "ID", nullptr));
        lbName_2->setText(QCoreApplication::translate("company", "Name", nullptr));
        btnRemove_2->setText(QCoreApplication::translate("company", "Remove", nullptr));
        btnConnect->setText(QCoreApplication::translate("company", "Connect", nullptr));
        btnSelectAll->setText(QCoreApplication::translate("company", "Select All", nullptr));
    } // retranslateUi

};

namespace Ui {
    class company: public Ui_company {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPANY_H
