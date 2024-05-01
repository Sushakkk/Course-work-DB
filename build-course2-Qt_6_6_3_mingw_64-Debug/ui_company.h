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
    QFrame *frame_title_Form;
    QHBoxLayout *horizontalLayout_5;
    QLabel *ImgReport_2;
    QLabel *lbReport_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *lbID_2;
    QLineEdit *leID_2;
    QLabel *lbName_2;
    QLineEdit *leName_2;
    QLabel *lbINN_2;
    QLineEdit *leINN_2;
    QLabel *lbRequisites_2;
    QLineEdit *leRec;
    QTableWidget *twOrg;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAdd_2;
    QPushButton *btnEdit_2;
    QPushButton *btnDel_2;
    QPushButton *btnRemove_2;
    QPushButton *btnReport;
    QFrame *frame_4;
    QPushButton *btnBack;
    QTextEdit *teResult;

    void setupUi(QDialog *company)
    {
        if (company->objectName().isEmpty())
            company->setObjectName("company");
        company->resize(1139, 771);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(company->sizePolicy().hasHeightForWidth());
        company->setSizePolicy(sizePolicy);
        company->setMinimumSize(QSize(1077, 668));
        gridLayout_2 = new QGridLayout(company);
        gridLayout_2->setObjectName("gridLayout_2");
        frame_title_Form = new QFrame(company);
        frame_title_Form->setObjectName("frame_title_Form");
        frame_title_Form->setMaximumSize(QSize(311, 81));
        frame_title_Form->setFrameShape(QFrame::StyledPanel);
        frame_title_Form->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_title_Form);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        ImgReport_2 = new QLabel(frame_title_Form);
        ImgReport_2->setObjectName("ImgReport_2");
        ImgReport_2->setPixmap(QPixmap(QString::fromUtf8(":/rec/img/Form.png")));

        horizontalLayout_5->addWidget(ImgReport_2);

        lbReport_2 = new QLabel(frame_title_Form);
        lbReport_2->setObjectName("lbReport_2");
        lbReport_2->setMinimumSize(QSize(201, 64));
        lbReport_2->setMaximumSize(QSize(219, 64));
        lbReport_2->setStyleSheet(QString::fromUtf8("font: 20pt \"Segoe UI\";"));

        horizontalLayout_5->addWidget(lbReport_2);


        gridLayout_2->addWidget(frame_title_Form, 0, 0, 1, 1);

        frame = new QFrame(company);
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

        leID_2 = new QLineEdit(frame);
        leID_2->setObjectName("leID_2");

        gridLayout->addWidget(leID_2, 0, 1, 1, 1);

        lbName_2 = new QLabel(frame);
        lbName_2->setObjectName("lbName_2");

        gridLayout->addWidget(lbName_2, 1, 0, 1, 1);

        leName_2 = new QLineEdit(frame);
        leName_2->setObjectName("leName_2");

        gridLayout->addWidget(leName_2, 1, 1, 1, 1);

        lbINN_2 = new QLabel(frame);
        lbINN_2->setObjectName("lbINN_2");

        gridLayout->addWidget(lbINN_2, 2, 0, 1, 1);

        leINN_2 = new QLineEdit(frame);
        leINN_2->setObjectName("leINN_2");

        gridLayout->addWidget(leINN_2, 2, 1, 1, 1);

        lbRequisites_2 = new QLabel(frame);
        lbRequisites_2->setObjectName("lbRequisites_2");

        gridLayout->addWidget(lbRequisites_2, 3, 0, 1, 1);

        leRec = new QLineEdit(frame);
        leRec->setObjectName("leRec");

        gridLayout->addWidget(leRec, 3, 1, 1, 1);


        gridLayout_2->addWidget(frame, 1, 0, 1, 1);

        twOrg = new QTableWidget(company);
        twOrg->setObjectName("twOrg");
        twOrg->setMinimumSize(QSize(561, 561));

        gridLayout_2->addWidget(twOrg, 1, 1, 3, 1);

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

        btnReport = new QPushButton(frame_3);
        btnReport->setObjectName("btnReport");

        horizontalLayout->addWidget(btnReport);


        gridLayout_2->addWidget(frame_3, 2, 0, 1, 1);

        frame_4 = new QFrame(company);
        frame_4->setObjectName("frame_4");
        frame_4->setMinimumSize(QSize(351, 41));
        frame_4->setMaximumSize(QSize(351, 41));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        btnBack = new QPushButton(frame_4);
        btnBack->setObjectName("btnBack");
        btnBack->setGeometry(QRect(10, 10, 111, 24));

        gridLayout_2->addWidget(frame_4, 3, 0, 1, 1);

        teResult = new QTextEdit(company);
        teResult->setObjectName("teResult");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(teResult->sizePolicy().hasHeightForWidth());
        teResult->setSizePolicy(sizePolicy1);
        teResult->setReadOnly(true);

        gridLayout_2->addWidget(teResult, 4, 0, 1, 2);


        retranslateUi(company);

        QMetaObject::connectSlotsByName(company);
    } // setupUi

    void retranslateUi(QDialog *company)
    {
        company->setWindowTitle(QCoreApplication::translate("company", "Dialog", nullptr));
        ImgReport_2->setText(QString());
        lbReport_2->setText(QCoreApplication::translate("company", "\320\244\320\276\321\200\320\274\320\260 \320\232\320\276\320\274\320\277\320\260\320\275\320\270\320\270", nullptr));
        lbID_2->setText(QCoreApplication::translate("company", "\320\235\320\276\320\274\320\265\321\200 \320\232\320\276\320\274\320\277\320\260\320\275\320\270\320\270", nullptr));
        lbName_2->setText(QCoreApplication::translate("company", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        lbINN_2->setText(QCoreApplication::translate("company", "\320\230\320\235\320\235", nullptr));
        lbRequisites_2->setText(QCoreApplication::translate("company", "\320\240\320\265\320\272\320\262\320\270\320\267\320\270\321\202\321\213", nullptr));
        btnAdd_2->setText(QCoreApplication::translate("company", "Add", nullptr));
        btnEdit_2->setText(QCoreApplication::translate("company", "Edit", nullptr));
        btnDel_2->setText(QCoreApplication::translate("company", "Del", nullptr));
        btnRemove_2->setText(QCoreApplication::translate("company", "Remove", nullptr));
        btnReport->setText(QCoreApplication::translate("company", "\320\236\321\202\321\207\320\265\321\202 \320\237\321\200\320\270\320\261\321\213\320\273\320\270", nullptr));
        btnBack->setText(QCoreApplication::translate("company", "\320\235\320\260\320\267\320\260\320\264 ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class company: public Ui_company {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPANY_H
