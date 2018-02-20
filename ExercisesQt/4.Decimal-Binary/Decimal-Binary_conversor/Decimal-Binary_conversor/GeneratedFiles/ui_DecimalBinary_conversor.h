/********************************************************************************
** Form generated from reading UI file 'DecimalBinary_conversor.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DECIMALBINARY_CONVERSOR_H
#define UI_DECIMALBINARY_CONVERSOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DecimalBinary_conversorClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpinBox *decimalSpinBox;
    QSpinBox *binarySpinBox;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *toBinaryBtn;
    QSpacerItem *horizontalSpacer;
    QPushButton *toDecimalBtn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DecimalBinary_conversorClass)
    {
        if (DecimalBinary_conversorClass->objectName().isEmpty())
            DecimalBinary_conversorClass->setObjectName(QStringLiteral("DecimalBinary_conversorClass"));
        DecimalBinary_conversorClass->resize(400, 200);
        DecimalBinary_conversorClass->setMinimumSize(QSize(400, 0));
        DecimalBinary_conversorClass->setMaximumSize(QSize(16777215, 200));
        centralWidget = new QWidget(DecimalBinary_conversorClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(16777215, 20));

        verticalLayout->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        decimalSpinBox = new QSpinBox(centralWidget);
        decimalSpinBox->setObjectName(QStringLiteral("decimalSpinBox"));
        decimalSpinBox->setMaximum(999999999);

        horizontalLayout->addWidget(decimalSpinBox);

        binarySpinBox = new QSpinBox(centralWidget);
        binarySpinBox->setObjectName(QStringLiteral("binarySpinBox"));
        binarySpinBox->setMaximum(999999999);

        horizontalLayout->addWidget(binarySpinBox);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addLayout(verticalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        toBinaryBtn = new QPushButton(centralWidget);
        toBinaryBtn->setObjectName(QStringLiteral("toBinaryBtn"));

        horizontalLayout_3->addWidget(toBinaryBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        toDecimalBtn = new QPushButton(centralWidget);
        toDecimalBtn->setObjectName(QStringLiteral("toDecimalBtn"));

        horizontalLayout_3->addWidget(toDecimalBtn);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        DecimalBinary_conversorClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(DecimalBinary_conversorClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        DecimalBinary_conversorClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DecimalBinary_conversorClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        DecimalBinary_conversorClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(DecimalBinary_conversorClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        DecimalBinary_conversorClass->setStatusBar(statusBar);

        retranslateUi(DecimalBinary_conversorClass);

        QMetaObject::connectSlotsByName(DecimalBinary_conversorClass);
    } // setupUi

    void retranslateUi(QMainWindow *DecimalBinary_conversorClass)
    {
        DecimalBinary_conversorClass->setWindowTitle(QApplication::translate("DecimalBinary_conversorClass", "DecimalBinary_conversor", nullptr));
        label->setText(QApplication::translate("DecimalBinary_conversorClass", "Decimal-Binary conversor", nullptr));
        label_4->setText(QApplication::translate("DecimalBinary_conversorClass", "Decimal", nullptr));
        label_5->setText(QApplication::translate("DecimalBinary_conversorClass", "Binary", nullptr));
        toBinaryBtn->setText(QApplication::translate("DecimalBinary_conversorClass", "To binary", nullptr));
        toDecimalBtn->setText(QApplication::translate("DecimalBinary_conversorClass", "To decimal", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DecimalBinary_conversorClass: public Ui_DecimalBinary_conversorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DECIMALBINARY_CONVERSOR_H
