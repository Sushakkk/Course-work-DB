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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_order
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QLabel *lbID_2;
    QLabel *label_3;
    QLabel *lbName_2;
    QLabel *lbINN_2;
    QLabel *label;
    QComboBox *cBpay;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout;
    QLineEdit *leOrder_number;
    QLineEdit *leDate_2;
    QComboBox *cbFio_client;
    QComboBox *cbFio_emp;
    QFrame *frame_4;
    QPushButton *btnBack;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAdd_2;
    QPushButton *btnEdit_2;
    QPushButton *btnDel_2;
    QPushButton *btnRemove_2;
    QTextEdit *teResult;
    QTableWidget *twOrg;

    void setupUi(QDialog *order)
    {
        if (order->objectName().isEmpty())
            order->setObjectName("order");
        order->resize(1396, 810);
        gridLayout = new QGridLayout(order);
        gridLayout->setObjectName("gridLayout");
        frame = new QFrame(order);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(571, 411));
        frame->setMaximumSize(QSize(571, 411));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lbID_2 = new QLabel(frame);
        lbID_2->setObjectName("lbID_2");
        lbID_2->setGeometry(QRect(10, 61, 78, 16));
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 140, 64, 16));
        lbName_2 = new QLabel(frame);
        lbName_2->setObjectName("lbName_2");
        lbName_2->setGeometry(QRect(10, 219, 78, 16));
        lbINN_2 = new QLabel(frame);
        lbINN_2->setObjectName("lbINN_2");
        lbINN_2->setGeometry(QRect(10, 298, 95, 16));
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 377, 40, 16));
        cBpay = new QComboBox(frame);
        cBpay->addItem(QString());
        cBpay->addItem(QString());
        cBpay->setObjectName("cBpay");
        cBpay->setGeometry(QRect(130, 377, 50, 22));
        cBpay->setMaximumSize(QSize(51, 22));
        frame_5 = new QFrame(frame);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(110, 0, 441, 371));
        frame_5->setMinimumSize(QSize(441, 371));
        frame_5->setMaximumSize(QSize(441, 371));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_5);
        verticalLayout->setObjectName("verticalLayout");
        leOrder_number = new QLineEdit(frame_5);
        leOrder_number->setObjectName("leOrder_number");

        verticalLayout->addWidget(leOrder_number);

        leDate_2 = new QLineEdit(frame_5);
        leDate_2->setObjectName("leDate_2");

        verticalLayout->addWidget(leDate_2);

        cbFio_client = new QComboBox(frame_5);
        cbFio_client->setObjectName("cbFio_client");

        verticalLayout->addWidget(cbFio_client);

        cbFio_emp = new QComboBox(frame_5);
        cbFio_emp->setObjectName("cbFio_emp");

        verticalLayout->addWidget(cbFio_emp);


        gridLayout->addWidget(frame, 0, 0, 1, 1);

        frame_4 = new QFrame(order);
        frame_4->setObjectName("frame_4");
        frame_4->setMinimumSize(QSize(351, 41));
        frame_4->setMaximumSize(QSize(351, 41));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        btnBack = new QPushButton(frame_4);
        btnBack->setObjectName("btnBack");
        btnBack->setGeometry(QRect(10, 10, 111, 24));

        gridLayout->addWidget(frame_4, 1, 0, 1, 1);

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


        gridLayout->addWidget(frame_3, 2, 0, 1, 1);

        teResult = new QTextEdit(order);
        teResult->setObjectName("teResult");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(teResult->sizePolicy().hasHeightForWidth());
        teResult->setSizePolicy(sizePolicy);
        teResult->setMaximumSize(QSize(16777215, 121));
        teResult->setReadOnly(true);

        gridLayout->addWidget(teResult, 3, 0, 1, 2);

        twOrg = new QTableWidget(order);
        twOrg->setObjectName("twOrg");
        twOrg->setMinimumSize(QSize(871, 561));

        gridLayout->addWidget(twOrg, 0, 1, 3, 1);


        retranslateUi(order);

        QMetaObject::connectSlotsByName(order);
    } // setupUi

    void retranslateUi(QDialog *order)
    {
        order->setWindowTitle(QCoreApplication::translate("order", "Dialog", nullptr));
        lbID_2->setText(QCoreApplication::translate("order", "\320\235\320\276\320\274\320\265\321\200 \320\267\320\260\320\272\320\260\320\267\320\260 ", nullptr));
        label_3->setText(QCoreApplication::translate("order", "\320\224\320\260\321\202\320\260 \320\227\320\260\320\272\320\260\320\267\320\260", nullptr));
        lbName_2->setText(QCoreApplication::translate("order", " \320\244\320\230\320\236 \320\232\320\273\320\270\320\265\320\275\321\202\320\260", nullptr));
        lbINN_2->setText(QCoreApplication::translate("order", "\320\244\320\230\320\236 \320\241\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\260", nullptr));
        label->setText(QCoreApplication::translate("order", "\320\236\320\277\320\273\320\260\321\202\320\260", nullptr));
        cBpay->setItemText(0, QCoreApplication::translate("order", "true", nullptr));
        cBpay->setItemText(1, QCoreApplication::translate("order", "false", nullptr));

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
