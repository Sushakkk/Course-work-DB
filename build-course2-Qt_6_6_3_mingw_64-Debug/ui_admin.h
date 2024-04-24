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
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_admin
{
public:
    QPushButton *btnClient;
    QPushButton *btnCompany;
    QPushButton *btnOrder;

    void setupUi(QDialog *admin)
    {
        if (admin->objectName().isEmpty())
            admin->setObjectName("admin");
        admin->resize(595, 491);
        btnClient = new QPushButton(admin);
        btnClient->setObjectName("btnClient");
        btnClient->setGeometry(QRect(70, 90, 371, 81));
        btnCompany = new QPushButton(admin);
        btnCompany->setObjectName("btnCompany");
        btnCompany->setGeometry(QRect(140, 210, 221, 71));
        btnOrder = new QPushButton(admin);
        btnOrder->setObjectName("btnOrder");
        btnOrder->setGeometry(QRect(220, 320, 161, 81));

        retranslateUi(admin);

        QMetaObject::connectSlotsByName(admin);
    } // setupUi

    void retranslateUi(QDialog *admin)
    {
        admin->setWindowTitle(QCoreApplication::translate("admin", "Dialog", nullptr));
        btnClient->setText(QCoreApplication::translate("admin", "\320\232\320\273\320\270\320\265\320\275\321\202\321\213", nullptr));
        btnCompany->setText(QCoreApplication::translate("admin", "\320\232\320\276\320\274\320\277\320\260\320\275\320\270\320\270 ", nullptr));
        btnOrder->setText(QCoreApplication::translate("admin", "\320\227\320\260\320\272\320\260\320\267\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
