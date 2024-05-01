/********************************************************************************
** Form generated from reading UI file 'financial_manager.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINANCIAL_MANAGER_H
#define UI_FINANCIAL_MANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Financial_Manager
{
public:
    QGridLayout *gridLayout;
    QFrame *frame_title_Report;
    QHBoxLayout *horizontalLayout_3;
    QLabel *ImgReport;
    QLabel *lbReport;
    QPushButton *btnCompany;
    QPushButton *btnCompany_orders;
    QPushButton *btnAuthorization;

    void setupUi(QDialog *Financial_Manager)
    {
        if (Financial_Manager->objectName().isEmpty())
            Financial_Manager->setObjectName("Financial_Manager");
        Financial_Manager->resize(472, 519);
        gridLayout = new QGridLayout(Financial_Manager);
        gridLayout->setObjectName("gridLayout");
        frame_title_Report = new QFrame(Financial_Manager);
        frame_title_Report->setObjectName("frame_title_Report");
        frame_title_Report->setMinimumSize(QSize(291, 84));
        frame_title_Report->setMaximumSize(QSize(391, 84));
        frame_title_Report->setFrameShape(QFrame::StyledPanel);
        frame_title_Report->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_title_Report);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        ImgReport = new QLabel(frame_title_Report);
        ImgReport->setObjectName("ImgReport");
        ImgReport->setPixmap(QPixmap(QString::fromUtf8(":/rec/img/men.png")));

        horizontalLayout_3->addWidget(ImgReport);

        lbReport = new QLabel(frame_title_Report);
        lbReport->setObjectName("lbReport");
        lbReport->setMinimumSize(QSize(184, 64));
        lbReport->setStyleSheet(QString::fromUtf8("font: 20pt \"Segoe UI\";"));

        horizontalLayout_3->addWidget(lbReport);


        gridLayout->addWidget(frame_title_Report, 0, 0, 1, 1);

        btnCompany = new QPushButton(Financial_Manager);
        btnCompany->setObjectName("btnCompany");

        gridLayout->addWidget(btnCompany, 1, 0, 1, 1);

        btnCompany_orders = new QPushButton(Financial_Manager);
        btnCompany_orders->setObjectName("btnCompany_orders");

        gridLayout->addWidget(btnCompany_orders, 2, 0, 1, 1);

        btnAuthorization = new QPushButton(Financial_Manager);
        btnAuthorization->setObjectName("btnAuthorization");
        btnAuthorization->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 255);"));

        gridLayout->addWidget(btnAuthorization, 3, 0, 1, 1);


        retranslateUi(Financial_Manager);

        QMetaObject::connectSlotsByName(Financial_Manager);
    } // setupUi

    void retranslateUi(QDialog *Financial_Manager)
    {
        Financial_Manager->setWindowTitle(QCoreApplication::translate("Financial_Manager", "Dialog", nullptr));
        ImgReport->setText(QString());
        lbReport->setText(QCoreApplication::translate("Financial_Manager", "\320\244\320\270\320\275\320\260\320\275\321\201\320\276\320\262\321\213\320\271 \320\234\320\265\320\275\320\265\320\264\320\266\320\265\321\200", nullptr));
        btnCompany->setText(QCoreApplication::translate("Financial_Manager", "\320\232\320\276\320\274\320\277\320\260\320\275\320\270\320\270 ", nullptr));
        btnCompany_orders->setText(QCoreApplication::translate("Financial_Manager", "\320\227\320\260\320\272\320\260\320\267\321\213 \320\232\320\276\320\274\320\277\320\260\320\275\320\270\320\271 ", nullptr));
        btnAuthorization->setText(QCoreApplication::translate("Financial_Manager", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Financial_Manager: public Ui_Financial_Manager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINANCIAL_MANAGER_H
