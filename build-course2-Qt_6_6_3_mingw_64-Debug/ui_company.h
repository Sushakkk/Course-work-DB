/********************************************************************************
** Form generated from reading UI file 'company.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPANY_H
#define UI_COMPANY_H

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

class Ui_company
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLineEdit *leID_2;
    QLineEdit *leINN_2;
    QLabel *lbRequisites_2;
    QLineEdit *leName_2;
    QLabel *lbID_2;
    QLabel *lbINN_2;
    QLabel *lbName_2;
    QFrame *frame_2;
    QLineEdit *leRec;
    QTableWidget *twOrg;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAdd_2;
    QPushButton *btnEdit_2;
    QPushButton *btnDel_2;
    QPushButton *btnRemove_2;
    QFrame *frame_4;
    QPushButton *btnBack;
    QTextEdit *teResult;

    void setupUi(QDialog *company)
    {
        if (company->objectName().isEmpty())
            company->setObjectName("company");
        company->resize(1077, 668);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(company->sizePolicy().hasHeightForWidth());
        company->setSizePolicy(sizePolicy);
        company->setMinimumSize(QSize(1077, 668));
        gridLayout_2 = new QGridLayout(company);
        gridLayout_2->setObjectName("gridLayout_2");
        frame = new QFrame(company);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(335, 326));
        frame->setMaximumSize(QSize(492, 464));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName("gridLayout");
        leID_2 = new QLineEdit(frame);
        leID_2->setObjectName("leID_2");

        gridLayout->addWidget(leID_2, 0, 1, 1, 1);

        leINN_2 = new QLineEdit(frame);
        leINN_2->setObjectName("leINN_2");

        gridLayout->addWidget(leINN_2, 2, 1, 1, 1);

        lbRequisites_2 = new QLabel(frame);
        lbRequisites_2->setObjectName("lbRequisites_2");

        gridLayout->addWidget(lbRequisites_2, 3, 0, 1, 1);

        leName_2 = new QLineEdit(frame);
        leName_2->setObjectName("leName_2");

        gridLayout->addWidget(leName_2, 1, 1, 1, 1);

        lbID_2 = new QLabel(frame);
        lbID_2->setObjectName("lbID_2");

        gridLayout->addWidget(lbID_2, 0, 0, 1, 1);

        lbINN_2 = new QLabel(frame);
        lbINN_2->setObjectName("lbINN_2");

        gridLayout->addWidget(lbINN_2, 2, 0, 1, 1);

        lbName_2 = new QLabel(frame);
        lbName_2->setObjectName("lbName_2");

        gridLayout->addWidget(lbName_2, 1, 0, 1, 1);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setMinimumSize(QSize(631, 81));
        frame_2->setMaximumSize(QSize(631, 91));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        leRec = new QLineEdit(frame_2);
        leRec->setObjectName("leRec");
        leRec->setGeometry(QRect(0, 20, 411, 51));
        leRec->setMinimumSize(QSize(408, 51));
        leRec->setMaximumSize(QSize(611, 51));

        gridLayout->addWidget(frame_2, 3, 1, 1, 1);


        gridLayout_2->addWidget(frame, 0, 0, 1, 1);

        twOrg = new QTableWidget(company);
        twOrg->setObjectName("twOrg");
        twOrg->setMinimumSize(QSize(561, 561));

        gridLayout_2->addWidget(twOrg, 0, 1, 3, 1);

        frame_3 = new QFrame(company);
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


        gridLayout_2->addWidget(frame_3, 1, 0, 1, 1);

        frame_4 = new QFrame(company);
        frame_4->setObjectName("frame_4");
        frame_4->setMinimumSize(QSize(351, 41));
        frame_4->setMaximumSize(QSize(351, 41));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        btnBack = new QPushButton(frame_4);
        btnBack->setObjectName("btnBack");
        btnBack->setGeometry(QRect(10, 10, 111, 24));

        gridLayout_2->addWidget(frame_4, 2, 0, 1, 1);

        teResult = new QTextEdit(company);
        teResult->setObjectName("teResult");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(teResult->sizePolicy().hasHeightForWidth());
        teResult->setSizePolicy(sizePolicy1);
        teResult->setReadOnly(true);

        gridLayout_2->addWidget(teResult, 3, 0, 1, 2);


        retranslateUi(company);

        QMetaObject::connectSlotsByName(company);
    } // setupUi

    void retranslateUi(QDialog *company)
    {
        company->setWindowTitle(QCoreApplication::translate("company", "Dialog", nullptr));
        lbRequisites_2->setText(QCoreApplication::translate("company", "\320\240\320\265\320\272\320\262\320\270\320\267\320\270\321\202\321\213", nullptr));
        lbID_2->setText(QCoreApplication::translate("company", "ID", nullptr));
        lbINN_2->setText(QCoreApplication::translate("company", "INN", nullptr));
        lbName_2->setText(QCoreApplication::translate("company", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        btnAdd_2->setText(QCoreApplication::translate("company", "Add", nullptr));
        btnEdit_2->setText(QCoreApplication::translate("company", "Edit", nullptr));
        btnDel_2->setText(QCoreApplication::translate("company", "Del", nullptr));
        btnRemove_2->setText(QCoreApplication::translate("company", "Remove", nullptr));
        btnBack->setText(QCoreApplication::translate("company", "\320\235\320\260\320\267\320\260\320\264 ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class company: public Ui_company {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPANY_H
