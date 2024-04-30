/********************************************************************************
** Form generated from reading UI file 'sales_manager.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALES_MANAGER_H
#define UI_SALES_MANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Sales_Manager
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QPushButton *btnClient;
    QPushButton *btnOrder;
    QPushButton *btnOrder_product;
    QPushButton *btnAuthorization;

    void setupUi(QDialog *Sales_Manager)
    {
        if (Sales_Manager->objectName().isEmpty())
            Sales_Manager->setObjectName("Sales_Manager");
        Sales_Manager->resize(549, 490);
        gridLayout_2 = new QGridLayout(Sales_Manager);
        gridLayout_2->setObjectName("gridLayout_2");
        frame = new QFrame(Sales_Manager);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(401, 351));
        frame->setMaximumSize(QSize(401, 351));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName("gridLayout");
        btnClient = new QPushButton(frame);
        btnClient->setObjectName("btnClient");

        gridLayout->addWidget(btnClient, 0, 0, 1, 1);

        btnOrder = new QPushButton(frame);
        btnOrder->setObjectName("btnOrder");

        gridLayout->addWidget(btnOrder, 1, 0, 1, 1);

        btnOrder_product = new QPushButton(frame);
        btnOrder_product->setObjectName("btnOrder_product");

        gridLayout->addWidget(btnOrder_product, 2, 0, 1, 1);

        btnAuthorization = new QPushButton(frame);
        btnAuthorization->setObjectName("btnAuthorization");
        btnAuthorization->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 255);"));

        gridLayout->addWidget(btnAuthorization, 3, 0, 1, 1);


        gridLayout_2->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(Sales_Manager);

        QMetaObject::connectSlotsByName(Sales_Manager);
    } // setupUi

    void retranslateUi(QDialog *Sales_Manager)
    {
        Sales_Manager->setWindowTitle(QCoreApplication::translate("Sales_Manager", "Dialog", nullptr));
        btnClient->setText(QCoreApplication::translate("Sales_Manager", "\320\232\320\273\320\270\320\265\320\275\321\202\321\213", nullptr));
        btnOrder->setText(QCoreApplication::translate("Sales_Manager", "\320\227\320\260\320\272\320\260\320\267\321\213", nullptr));
        btnOrder_product->setText(QCoreApplication::translate("Sales_Manager", "\320\227\320\260\320\272\320\260\320\267\320\260\320\275\320\275\321\213\320\265 \321\202\320\276\320\262\320\260\321\200\321\213 ", nullptr));
        btnAuthorization->setText(QCoreApplication::translate("Sales_Manager", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sales_Manager: public Ui_Sales_Manager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALES_MANAGER_H
