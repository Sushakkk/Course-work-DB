/********************************************************************************
** Form generated from reading UI file 'employee.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEE_H
#define UI_EMPLOYEE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_employee
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frame_4;
    QPushButton *btnBack;
    QTableWidget *twOrg;
    QFrame *frame;
    QLabel *lbINN_2;
    QLabel *lbName_2;
    QLabel *lbID_2;
    QFrame *frame_2;
    QGridLayout *gridLayout;
    QLineEdit *leID;
    QLineEdit *leFio_emp;
    QComboBox *cB_company;
    QTextEdit *teResult;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAdd_2;
    QPushButton *btnEdit_2;
    QPushButton *btnDel_2;
    QPushButton *btnRemove_2;

    void setupUi(QDialog *employee)
    {
        if (employee->objectName().isEmpty())
            employee->setObjectName("employee");
        employee->resize(1115, 665);
        gridLayout_2 = new QGridLayout(employee);
        gridLayout_2->setObjectName("gridLayout_2");
        frame_4 = new QFrame(employee);
        frame_4->setObjectName("frame_4");
        frame_4->setMinimumSize(QSize(351, 41));
        frame_4->setMaximumSize(QSize(351, 41));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        btnBack = new QPushButton(frame_4);
        btnBack->setObjectName("btnBack");
        btnBack->setGeometry(QRect(10, 10, 111, 24));

        gridLayout_2->addWidget(frame_4, 3, 0, 1, 1);

        twOrg = new QTableWidget(employee);
        twOrg->setObjectName("twOrg");
        twOrg->setMinimumSize(QSize(541, 441));

        gridLayout_2->addWidget(twOrg, 0, 1, 4, 1);

        frame = new QFrame(employee);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(531, 326));
        frame->setMaximumSize(QSize(531, 326));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lbINN_2 = new QLabel(frame);
        lbINN_2->setObjectName("lbINN_2");
        lbINN_2->setGeometry(QRect(20, 240, 56, 16));
        lbName_2 = new QLabel(frame);
        lbName_2->setObjectName("lbName_2");
        lbName_2->setGeometry(QRect(10, 180, 95, 16));
        lbID_2 = new QLabel(frame);
        lbID_2->setObjectName("lbID_2");
        lbID_2->setGeometry(QRect(40, 120, 16, 16));
        lbID_2->setMaximumSize(QSize(16, 16));
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(130, 70, 391, 241));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_2);
        gridLayout->setObjectName("gridLayout");
        leID = new QLineEdit(frame_2);
        leID->setObjectName("leID");

        gridLayout->addWidget(leID, 0, 0, 1, 1);

        leFio_emp = new QLineEdit(frame_2);
        leFio_emp->setObjectName("leFio_emp");

        gridLayout->addWidget(leFio_emp, 1, 0, 1, 1);

        cB_company = new QComboBox(frame_2);
        cB_company->setObjectName("cB_company");

        gridLayout->addWidget(cB_company, 2, 0, 1, 1);


        gridLayout_2->addWidget(frame, 0, 0, 1, 1);

        teResult = new QTextEdit(employee);
        teResult->setObjectName("teResult");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(teResult->sizePolicy().hasHeightForWidth());
        teResult->setSizePolicy(sizePolicy);
        teResult->setMaximumSize(QSize(16777215, 83));
        teResult->setReadOnly(true);

        gridLayout_2->addWidget(teResult, 4, 0, 1, 2);

        frame_3 = new QFrame(employee);
        frame_3->setObjectName("frame_3");
        frame_3->setMaximumSize(QSize(491, 44));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_3);
        horizontalLayout->setObjectName("horizontalLayout");
        btnAdd_2 = new QPushButton(frame_3);
        btnAdd_2->setObjectName("btnAdd_2");

        horizontalLayout->addWidget(btnAdd_2);

        btnEdit_2 = new QPushButton(frame_3);
        btnEdit_2->setObjectName("btnEdit_2");

        horizontalLayout->addWidget(btnEdit_2);

        btnDel_2 = new QPushButton(frame_3);
        btnDel_2->setObjectName("btnDel_2");

        horizontalLayout->addWidget(btnDel_2);

        btnRemove_2 = new QPushButton(frame_3);
        btnRemove_2->setObjectName("btnRemove_2");

        horizontalLayout->addWidget(btnRemove_2);


        gridLayout_2->addWidget(frame_3, 2, 0, 1, 1);


        retranslateUi(employee);

        QMetaObject::connectSlotsByName(employee);
    } // setupUi

    void retranslateUi(QDialog *employee)
    {
        employee->setWindowTitle(QCoreApplication::translate("employee", "Dialog", nullptr));
        btnBack->setText(QCoreApplication::translate("employee", "\320\235\320\260\320\267\320\260\320\264 ", nullptr));
        lbINN_2->setText(QCoreApplication::translate("employee", "\320\232\320\276\320\274\320\277\320\260\320\275\320\270\321\217", nullptr));
        lbName_2->setText(QCoreApplication::translate("employee", "\320\244\320\230\320\236 \320\241\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\260", nullptr));
        lbID_2->setText(QCoreApplication::translate("employee", "ID", nullptr));
        btnAdd_2->setText(QCoreApplication::translate("employee", "Add", nullptr));
        btnEdit_2->setText(QCoreApplication::translate("employee", "Edit", nullptr));
        btnDel_2->setText(QCoreApplication::translate("employee", "Del", nullptr));
        btnRemove_2->setText(QCoreApplication::translate("employee", "Remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class employee: public Ui_employee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEE_H
