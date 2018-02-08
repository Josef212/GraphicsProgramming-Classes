/********************************************************************************
** Form generated from reading UI file 'Exercise1Dials.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXERCISE1DIALS_H
#define UI_EXERCISE1DIALS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDial>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Exercise1DialsClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLCDNumber *lcdNumber;
    QDial *dial;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLCDNumber *lcdNumber_2;
    QDial *dial_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Exercise1DialsClass)
    {
        if (Exercise1DialsClass->objectName().isEmpty())
            Exercise1DialsClass->setObjectName(QStringLiteral("Exercise1DialsClass"));
        Exercise1DialsClass->resize(350, 300);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Exercise1DialsClass->sizePolicy().hasHeightForWidth());
        Exercise1DialsClass->setSizePolicy(sizePolicy);
        Exercise1DialsClass->setMinimumSize(QSize(350, 300));
        Exercise1DialsClass->setMaximumSize(QSize(350, 300));
        centralWidget = new QWidget(Exercise1DialsClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));

        verticalLayout->addWidget(lcdNumber);

        dial = new QDial(centralWidget);
        dial->setObjectName(QStringLiteral("dial"));
        dial->setMaximum(23);

        verticalLayout->addWidget(dial);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        lcdNumber_2 = new QLCDNumber(centralWidget);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));

        verticalLayout_2->addWidget(lcdNumber_2);

        dial_2 = new QDial(centralWidget);
        dial_2->setObjectName(QStringLiteral("dial_2"));
        dial_2->setMaximum(59);

        verticalLayout_2->addWidget(dial_2);


        horizontalLayout->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        Exercise1DialsClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Exercise1DialsClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 350, 21));
        Exercise1DialsClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Exercise1DialsClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Exercise1DialsClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Exercise1DialsClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Exercise1DialsClass->setStatusBar(statusBar);

        retranslateUi(Exercise1DialsClass);
        QObject::connect(dial, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));
        QObject::connect(dial_2, SIGNAL(valueChanged(int)), lcdNumber_2, SLOT(display(int)));
        QObject::connect(pushButton, SIGNAL(clicked()), Exercise1DialsClass, SLOT(close()));

        QMetaObject::connectSlotsByName(Exercise1DialsClass);
    } // setupUi

    void retranslateUi(QMainWindow *Exercise1DialsClass)
    {
        Exercise1DialsClass->setWindowTitle(QApplication::translate("Exercise1DialsClass", "Exercise1Dials", nullptr));
        label->setText(QApplication::translate("Exercise1DialsClass", "Hours", nullptr));
        label_2->setText(QApplication::translate("Exercise1DialsClass", "Minutes", nullptr));
        pushButton->setText(QApplication::translate("Exercise1DialsClass", "Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Exercise1DialsClass: public Ui_Exercise1DialsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXERCISE1DIALS_H
