/********************************************************************************
** Form generated from reading UI file 'authorization.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHORIZATION_H
#define UI_AUTHORIZATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Authorization
{
public:
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *cbLogin;
    QLabel *label_2;
    QLineEdit *lePass;
    QPushButton *btnEntry;
    QLabel *label_3;

    void setupUi(QDialog *Authorization)
    {
        if (Authorization->objectName().isEmpty())
            Authorization->setObjectName("Authorization");
        Authorization->resize(346, 276);
        frame = new QFrame(Authorization);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 80, 321, 171));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(frame);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        cbLogin = new QComboBox(frame);
        cbLogin->setObjectName("cbLogin");

        gridLayout->addWidget(cbLogin, 0, 1, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lePass = new QLineEdit(frame);
        lePass->setObjectName("lePass");

        gridLayout->addWidget(lePass, 1, 1, 1, 1);

        btnEntry = new QPushButton(frame);
        btnEntry->setObjectName("btnEntry");

        gridLayout->addWidget(btnEntry, 2, 1, 1, 1);

        label_3 = new QLabel(Authorization);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(120, 30, 151, 41));
        label_3->setStyleSheet(QString::fromUtf8("font: 16pt \"Segoe UI\";"));

        retranslateUi(Authorization);

        QMetaObject::connectSlotsByName(Authorization);
    } // setupUi

    void retranslateUi(QDialog *Authorization)
    {
        Authorization->setWindowTitle(QCoreApplication::translate("Authorization", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Authorization", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_2->setText(QCoreApplication::translate("Authorization", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        btnEntry->setText(QCoreApplication::translate("Authorization", "\320\222\321\205\320\276\320\264", nullptr));
        label_3->setText(QCoreApplication::translate("Authorization", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Authorization: public Ui_Authorization {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHORIZATION_H
