/********************************************************************************
** Form generated from reading UI file 'HelloQt.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLOQT_H
#define UI_HELLOQT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelloQtClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *HelloQt_btn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *HelloQtClass)
    {
        if (HelloQtClass->objectName().isEmpty())
            HelloQtClass->setObjectName(QStringLiteral("HelloQtClass"));
        HelloQtClass->resize(276, 94);
        centralWidget = new QWidget(HelloQtClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        HelloQt_btn = new QPushButton(centralWidget);
        HelloQt_btn->setObjectName(QStringLiteral("HelloQt_btn"));

        gridLayout->addWidget(HelloQt_btn, 0, 0, 1, 1);

        HelloQtClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(HelloQtClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 276, 21));
        HelloQtClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(HelloQtClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        HelloQtClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(HelloQtClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        HelloQtClass->setStatusBar(statusBar);

        retranslateUi(HelloQtClass);

        QMetaObject::connectSlotsByName(HelloQtClass);
    } // setupUi

    void retranslateUi(QMainWindow *HelloQtClass)
    {
        HelloQtClass->setWindowTitle(QApplication::translate("HelloQtClass", "HelloQt", nullptr));
        HelloQt_btn->setText(QApplication::translate("HelloQtClass", "Hello Qt!!!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HelloQtClass: public Ui_HelloQtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLOQT_H
