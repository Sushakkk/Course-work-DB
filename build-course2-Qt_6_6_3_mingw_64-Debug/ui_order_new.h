/********************************************************************************
** Form generated from reading UI file 'order_new.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDER_NEW_H
#define UI_ORDER_NEW_H

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

class Ui_order_new
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *lbID_2;
    QLabel *lbName_2;
    QLineEdit *leIFio_Emp;
    QLineEdit *leOrder_number;
    QLineEdit *leDate;
    QLineEdit *lePay;
    QLineEdit *leSum;
    QLabel *lbINN_2;
    QLineEdit *leFio_client;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QTableWidget *twOrg;
    QFrame *frame_4;
    QPushButton *btnBack;
    QTextEdit *teResult;

    void setupUi(QDialog *order_new)
    {
        if (order_new->objectName().isEmpty())
            order_new->setObjectName("order_new");
        order_new->resize(1130, 704);
        gridLayout_2 = new QGridLayout(order_new);
        gridLayout_2->setObjectName("gridLayout_2");
        frame = new QFrame(order_new);
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

        lbName_2 = new QLabel(frame);
        lbName_2->setObjectName("lbName_2");

        gridLayout->addWidget(lbName_2, 1, 0, 1, 1);

        leIFio_Emp = new QLineEdit(frame);
        leIFio_Emp->setObjectName("leIFio_Emp");

        gridLayout->addWidget(leIFio_Emp, 2, 1, 1, 1);

        leOrder_number = new QLineEdit(frame);
        leOrder_number->setObjectName("leOrder_number");

        gridLayout->addWidget(leOrder_number, 0, 1, 1, 1);

        leDate = new QLineEdit(frame);
        leDate->setObjectName("leDate");

        gridLayout->addWidget(leDate, 5, 1, 1, 1);

        lePay = new QLineEdit(frame);
        lePay->setObjectName("lePay");

        gridLayout->addWidget(lePay, 3, 1, 1, 1);

        leSum = new QLineEdit(frame);
        leSum->setObjectName("leSum");

        gridLayout->addWidget(leSum, 4, 1, 1, 1);

        lbINN_2 = new QLabel(frame);
        lbINN_2->setObjectName("lbINN_2");

        gridLayout->addWidget(lbINN_2, 2, 0, 1, 1);

        leFio_client = new QLineEdit(frame);
        leFio_client->setObjectName("leFio_client");

        gridLayout->addWidget(leFio_client, 1, 1, 1, 1);

        label = new QLabel(frame);
        label->setObjectName("label");

        gridLayout->addWidget(label, 3, 0, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 5, 0, 1, 1);


        gridLayout_2->addWidget(frame, 0, 0, 1, 1);

        twOrg = new QTableWidget(order_new);
        twOrg->setObjectName("twOrg");
        twOrg->setMinimumSize(QSize(561, 561));

        gridLayout_2->addWidget(twOrg, 0, 1, 2, 1);

        frame_4 = new QFrame(order_new);
        frame_4->setObjectName("frame_4");
        frame_4->setMinimumSize(QSize(351, 41));
        frame_4->setMaximumSize(QSize(351, 41));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        btnBack = new QPushButton(frame_4);
        btnBack->setObjectName("btnBack");
        btnBack->setGeometry(QRect(10, 10, 111, 24));

        gridLayout_2->addWidget(frame_4, 1, 0, 1, 1);

        teResult = new QTextEdit(order_new);
        teResult->setObjectName("teResult");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(teResult->sizePolicy().hasHeightForWidth());
        teResult->setSizePolicy(sizePolicy);
        teResult->setReadOnly(true);

        gridLayout_2->addWidget(teResult, 2, 0, 1, 2);


        retranslateUi(order_new);

        QMetaObject::connectSlotsByName(order_new);
    } // setupUi

    void retranslateUi(QDialog *order_new)
    {
        order_new->setWindowTitle(QCoreApplication::translate("order_new", "Dialog", nullptr));
        lbID_2->setText(QCoreApplication::translate("order_new", "\320\235\320\276\320\274\320\265\321\200 \320\267\320\260\320\272\320\260\320\267\320\260 ", nullptr));
        lbName_2->setText(QCoreApplication::translate("order_new", "\320\244\320\230\320\236 \320\232\320\273\320\270\320\265\320\275\321\202\320\260 ", nullptr));
        lbINN_2->setText(QCoreApplication::translate("order_new", "\320\244\320\230\320\236 \320\241\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\260", nullptr));
        label->setText(QCoreApplication::translate("order_new", "\320\236\320\277\320\273\320\260\321\202\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("order_new", "\320\241\321\203\320\274\320\274\320\260 \320\227\320\260\320\272\320\260\320\267\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("order_new", "\320\224\320\260\321\202\320\260 \320\227\320\260\320\272\320\260\320\267\320\260", nullptr));
        btnBack->setText(QCoreApplication::translate("order_new", "\320\235\320\260\320\267\320\260\320\264 ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class order_new: public Ui_order_new {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDER_NEW_H
