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
    QPushButton *btnClient;
    QPushButton *btnCompany;
    QPushButton *btnEmp;
    QPushButton *btnProduct;
    QPushButton *btnRep_ord_new;
    QPushButton *btnOrder_product;
    QPushButton *btnStock;
    QPushButton *btnOrder;

    void setupUi(QDialog *admin)
    {
        if (admin->objectName().isEmpty())
            admin->setObjectName("admin");
        admin->resize(700, 727);
        gridLayout = new QGridLayout(admin);
        gridLayout->setObjectName("gridLayout");
        btnClient = new QPushButton(admin);
        btnClient->setObjectName("btnClient");

        gridLayout->addWidget(btnClient, 0, 0, 1, 1);

        btnCompany = new QPushButton(admin);
        btnCompany->setObjectName("btnCompany");

        gridLayout->addWidget(btnCompany, 1, 0, 1, 1);

        btnEmp = new QPushButton(admin);
        btnEmp->setObjectName("btnEmp");

        gridLayout->addWidget(btnEmp, 2, 0, 1, 1);

        btnProduct = new QPushButton(admin);
        btnProduct->setObjectName("btnProduct");

        gridLayout->addWidget(btnProduct, 3, 0, 1, 1);

        btnRep_ord_new = new QPushButton(admin);
        btnRep_ord_new->setObjectName("btnRep_ord_new");

        gridLayout->addWidget(btnRep_ord_new, 3, 1, 1, 1);

        btnOrder_product = new QPushButton(admin);
        btnOrder_product->setObjectName("btnOrder_product");

        gridLayout->addWidget(btnOrder_product, 4, 0, 1, 1);

        btnStock = new QPushButton(admin);
        btnStock->setObjectName("btnStock");

        gridLayout->addWidget(btnStock, 5, 0, 1, 1);

        btnOrder = new QPushButton(admin);
        btnOrder->setObjectName("btnOrder");

        gridLayout->addWidget(btnOrder, 6, 0, 1, 1);


        retranslateUi(admin);

        QMetaObject::connectSlotsByName(admin);
    } // setupUi

    void retranslateUi(QDialog *admin)
    {
        admin->setWindowTitle(QCoreApplication::translate("admin", "Dialog", nullptr));
        btnClient->setText(QCoreApplication::translate("admin", "\320\232\320\273\320\270\320\265\320\275\321\202\321\213", nullptr));
        btnCompany->setText(QCoreApplication::translate("admin", "\320\232\320\276\320\274\320\277\320\260\320\275\320\270\320\270 ", nullptr));
        btnEmp->setText(QCoreApplication::translate("admin", "\321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\270", nullptr));
        btnProduct->setText(QCoreApplication::translate("admin", "\320\242\320\276\320\262\320\260\321\200\321\213", nullptr));
        btnRep_ord_new->setText(QCoreApplication::translate("admin", "\320\236\321\202\321\207\320\265\321\202 \320\267\320\260\320\272\320\260\320\267\320\276\320\262 ", nullptr));
        btnOrder_product->setText(QCoreApplication::translate("admin", "\320\227\320\260\320\272\320\260\320\267\320\260\320\275\320\275\321\213\320\265 \321\202\320\276\320\262\320\260\321\200\321\213 ", nullptr));
        btnStock->setText(QCoreApplication::translate("admin", "\320\241\320\272\320\273\320\260\320\264\321\213", nullptr));
        btnOrder->setText(QCoreApplication::translate("admin", "\320\227\320\260\320\272\320\260\320\267\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
