/********************************************************************************
** Form generated from reading UI file 'Exercise2CutPasteText.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXERCISE2CUTPASTETEXT_H
#define UI_EXERCISE2CUTPASTETEXT_H

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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Exercise2CutPasteTextClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEdit;
    QVBoxLayout *verticalLayout;
    QPushButton *cutButton;
    QPushButton *pasteButton;
    QSpacerItem *verticalSpacer;
    QLabel *showTextLabel;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Exercise2CutPasteTextClass)
    {
        if (Exercise2CutPasteTextClass->objectName().isEmpty())
            Exercise2CutPasteTextClass->setObjectName(QStringLiteral("Exercise2CutPasteTextClass"));
        Exercise2CutPasteTextClass->resize(503, 278);
        centralWidget = new QWidget(Exercise2CutPasteTextClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        horizontalLayout->addWidget(textEdit);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        cutButton = new QPushButton(centralWidget);
        cutButton->setObjectName(QStringLiteral("cutButton"));

        verticalLayout->addWidget(cutButton);

        pasteButton = new QPushButton(centralWidget);
        pasteButton->setObjectName(QStringLiteral("pasteButton"));

        verticalLayout->addWidget(pasteButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);

        showTextLabel = new QLabel(centralWidget);
        showTextLabel->setObjectName(QStringLiteral("showTextLabel"));

        verticalLayout_2->addWidget(showTextLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_2->addWidget(pushButton_3);


        verticalLayout_2->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        Exercise2CutPasteTextClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Exercise2CutPasteTextClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 503, 21));
        Exercise2CutPasteTextClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Exercise2CutPasteTextClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Exercise2CutPasteTextClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Exercise2CutPasteTextClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Exercise2CutPasteTextClass->setStatusBar(statusBar);

        retranslateUi(Exercise2CutPasteTextClass);
        QObject::connect(pushButton_3, SIGNAL(clicked()), Exercise2CutPasteTextClass, SLOT(close()));

        QMetaObject::connectSlotsByName(Exercise2CutPasteTextClass);
    } // setupUi

    void retranslateUi(QMainWindow *Exercise2CutPasteTextClass)
    {
        Exercise2CutPasteTextClass->setWindowTitle(QApplication::translate("Exercise2CutPasteTextClass", "Exercise2CutPasteText", nullptr));
        label->setText(QApplication::translate("Exercise2CutPasteTextClass", "Text", nullptr));
        cutButton->setText(QApplication::translate("Exercise2CutPasteTextClass", "Cut", nullptr));
        pasteButton->setText(QApplication::translate("Exercise2CutPasteTextClass", "Paste", nullptr));
        showTextLabel->setText(QString());
        pushButton_3->setText(QApplication::translate("Exercise2CutPasteTextClass", "Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Exercise2CutPasteTextClass: public Ui_Exercise2CutPasteTextClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXERCISE2CUTPASTETEXT_H
