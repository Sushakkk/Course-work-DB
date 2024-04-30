/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_admin
{
public:
    QGridLayout *gridLayout;
    QPushButton *btnCompany;
    QPushButton *btnOrder;
    QPushButton *btnStock;
    QPushButton *btnEmp;
    QPushButton *btnClient;
    QPushButton *btnAuthorization;
    QPushButton *btnOrder_product;
    QPushButton *btnProduct;

    void setupUi(QDialog *admin)
    {
        if (admin->objectName().isEmpty())
            admin->setObjectName("admin");
        admin->resize(658, 727);
        gridLayout = new QGridLayout(admin);
        gridLayout->setObjectName("gridLayout");
        btnCompany = new QPushButton(admin);
        btnCompany->setObjectName("btnCompany");

        gridLayout->addWidget(btnCompany, 1, 0, 1, 1);

        btnOrder = new QPushButton(admin);
        btnOrder->setObjectName("btnOrder");

        gridLayout->addWidget(btnOrder, 3, 0, 1, 1);

        btnStock = new QPushButton(admin);
        btnStock->setObjectName("btnStock");

        gridLayout->addWidget(btnStock, 7, 0, 1, 1);

        btnEmp = new QPushButton(admin);
        btnEmp->setObjectName("btnEmp");

        gridLayout->addWidget(btnEmp, 2, 0, 1, 1);

        btnClient = new QPushButton(admin);
        btnClient->setObjectName("btnClient");

        gridLayout->addWidget(btnClient, 0, 0, 1, 1);

        btnAuthorization = new QPushButton(admin);
        btnAuthorization->setObjectName("btnAuthorization");
        btnAuthorization->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 255);"));

        gridLayout->addWidget(btnAuthorization, 9, 0, 1, 1);

        btnOrder_product = new QPushButton(admin);
        btnOrder_product->setObjectName("btnOrder_product");

        gridLayout->addWidget(btnOrder_product, 5, 0, 1, 1);

        btnProduct = new QPushButton(admin);
        btnProduct->setObjectName("btnProduct");

        gridLayout->addWidget(btnProduct, 6, 0, 1, 1);


        retranslateUi(admin);

        QMetaObject::connectSlotsByName(admin);
    } // setupUi

    void retranslateUi(QDialog *admin)
    {
        admin->setWindowTitle(QCoreApplication::translate("admin", "Dialog", nullptr));
        btnCompany->setText(QCoreApplication::translate("admin", "\320\232\320\276\320\274\320\277\320\260\320\275\320\270\320\270 ", nullptr));
        btnOrder->setText(QCoreApplication::translate("admin", "\320\227\320\260\320\272\320\260\320\267\321\213", nullptr));
        btnStock->setText(QCoreApplication::translate("admin", "\320\241\320\272\320\273\320\260\320\264\321\213", nullptr));
        btnEmp->setText(QCoreApplication::translate("admin", "C\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\270", nullptr));
        btnClient->setText(QCoreApplication::translate("admin", "\320\232\320\273\320\270\320\265\320\275\321\202\321\213", nullptr));
        btnAuthorization->setText(QCoreApplication::translate("admin", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        btnOrder_product->setText(QCoreApplication::translate("admin", "\320\227\320\260\320\272\320\260\320\267\320\260\320\275\320\275\321\213\320\265 \321\202\320\276\320\262\320\260\321\200\321\213 ", nullptr));
        btnProduct->setText(QCoreApplication::translate("admin", "\320\242\320\276\320\262\320\260\321\200\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
