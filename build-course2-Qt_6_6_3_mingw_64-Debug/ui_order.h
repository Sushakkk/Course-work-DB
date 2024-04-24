/********************************************************************************
** Form generated from reading UI file 'order.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDER_H
#define UI_ORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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

class Ui_order
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *lbID_2;
    QLineEdit *leOrder_number;
    QLabel *label_3;
    QLineEdit *leDate_2;
    QLabel *lbName_2;
    QLineEdit *leId_client;
    QLabel *lbINN_2;
    QLineEdit *leId_emp;
    QLabel *label;
    QLineEdit *lePay;
    QTableWidget *twOrg;
    QFrame *frame_4;
    QPushButton *btnBack;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAdd_2;
    QPushButton *btnEdit_2;
    QPushButton *btnDel_2;
    QPushButton *btnRemove_2;
    QTextEdit *teResult;

    void setupUi(QDialog *order)
    {
        if (order->objectName().isEmpty())
            order->setObjectName("order");
        order->resize(1163, 741);
        gridLayout_2 = new QGridLayout(order);
        gridLayout_2->setObjectName("gridLayout_2");
        frame = new QFrame(order);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(335, 326));
        frame->setMaximumSize(QSize(492, 464));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName("gridLayout");
        lbID_2 = new QLabel(frame);
        lbID_2->setObjectName("lbID_2");

        gridLayout->addWidget(lbID_2, 0, 0, 1, 1);

        leOrder_number = new QLineEdit(frame);
        leOrder_number->setObjectName("leOrder_number");

        gridLayout->addWidget(leOrder_number, 0, 1, 1, 1);

        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        leDate_2 = new QLineEdit(frame);
        leDate_2->setObjectName("leDate_2");

        gridLayout->addWidget(leDate_2, 1, 1, 1, 1);

        lbName_2 = new QLabel(frame);
        lbName_2->setObjectName("lbName_2");

        gridLayout->addWidget(lbName_2, 2, 0, 1, 1);

        leId_client = new QLineEdit(frame);
        leId_client->setObjectName("leId_client");

        gridLayout->addWidget(leId_client, 2, 1, 1, 1);

        lbINN_2 = new QLabel(frame);
        lbINN_2->setObjectName("lbINN_2");

        gridLayout->addWidget(lbINN_2, 3, 0, 1, 1);

        leId_emp = new QLineEdit(frame);
        leId_emp->setObjectName("leId_emp");

        gridLayout->addWidget(leId_emp, 3, 1, 1, 1);

        label = new QLabel(frame);
        label->setObjectName("label");

        gridLayout->addWidget(label, 4, 0, 1, 1);

        lePay = new QLineEdit(frame);
        lePay->setObjectName("lePay");

        gridLayout->addWidget(lePay, 4, 1, 1, 1);


        gridLayout_2->addWidget(frame, 0, 0, 1, 1);

        twOrg = new QTableWidget(order);
        twOrg->setObjectName("twOrg");
        twOrg->setMinimumSize(QSize(561, 561));

        gridLayout_2->addWidget(twOrg, 0, 1, 3, 1);

        frame_4 = new QFrame(order);
        frame_4->setObjectName("frame_4");
        frame_4->setMinimumSize(QSize(351, 41));
        frame_4->setMaximumSize(QSize(351, 41));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        btnBack = new QPushButton(frame_4);
        btnBack->setObjectName("btnBack");
        btnBack->setGeometry(QRect(10, 10, 111, 24));

        gridLayout_2->addWidget(frame_4, 1, 0, 1, 1);

        frame_3 = new QFrame(order);
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

        teResult = new QTextEdit(order);
        teResult->setObjectName("teResult");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(teResult->sizePolicy().hasHeightForWidth());
        teResult->setSizePolicy(sizePolicy);
        teResult->setReadOnly(true);

        gridLayout_2->addWidget(teResult, 3, 0, 1, 2);


        retranslateUi(order);

        QMetaObject::connectSlotsByName(order);
    } // setupUi

    void retranslateUi(QDialog *order)
    {
        order->setWindowTitle(QCoreApplication::translate("order", "Dialog", nullptr));
        lbID_2->setText(QCoreApplication::translate("order", "\320\235\320\276\320\274\320\265\321\200 \320\267\320\260\320\272\320\260\320\267\320\260 ", nullptr));
        label_3->setText(QCoreApplication::translate("order", "\320\224\320\260\321\202\320\260 \320\227\320\260\320\272\320\260\320\267\320\260", nullptr));
        lbName_2->setText(QCoreApplication::translate("order", " ID \320\232\320\273\320\270\320\265\320\275\321\202\320\260", nullptr));
        lbINN_2->setText(QCoreApplication::translate("order", "ID \320\241\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\260", nullptr));
        label->setText(QCoreApplication::translate("order", "\320\236\320\277\320\273\320\260\321\202\320\260", nullptr));
        btnBack->setText(QCoreApplication::translate("order", "\320\235\320\260\320\267\320\260\320\264 ", nullptr));
        btnAdd_2->setText(QCoreApplication::translate("order", "Add", nullptr));
        btnEdit_2->setText(QCoreApplication::translate("order", "Edit", nullptr));
        btnDel_2->setText(QCoreApplication::translate("order", "Del", nullptr));
        btnRemove_2->setText(QCoreApplication::translate("order", "Remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class order: public Ui_order {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDER_H
