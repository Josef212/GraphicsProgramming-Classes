/********************************************************************************
** Form generated from reading UI file 'DisplaySave_image.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYSAVE_IMAGE_H
#define UI_DISPLAYSAVE_IMAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DisplaySave_imageClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *loadBtn;
    QSpacerItem *horizontalSpacer;
    QPushButton *saveBtn;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *closeBtn;
    QGraphicsView *image;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DisplaySave_imageClass)
    {
        if (DisplaySave_imageClass->objectName().isEmpty())
            DisplaySave_imageClass->setObjectName(QStringLiteral("DisplaySave_imageClass"));
        DisplaySave_imageClass->resize(646, 489);
        DisplaySave_imageClass->setMinimumSize(QSize(500, 400));
        centralWidget = new QWidget(DisplaySave_imageClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        loadBtn = new QPushButton(centralWidget);
        loadBtn->setObjectName(QStringLiteral("loadBtn"));

        horizontalLayout->addWidget(loadBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        saveBtn = new QPushButton(centralWidget);
        saveBtn->setObjectName(QStringLiteral("saveBtn"));

        horizontalLayout->addWidget(saveBtn);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        closeBtn = new QPushButton(centralWidget);
        closeBtn->setObjectName(QStringLiteral("closeBtn"));

        horizontalLayout_2->addWidget(closeBtn);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        image = new QGraphicsView(centralWidget);
        image->setObjectName(QStringLiteral("image"));

        gridLayout->addWidget(image, 0, 0, 1, 1);

        DisplaySave_imageClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(DisplaySave_imageClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 646, 21));
        DisplaySave_imageClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DisplaySave_imageClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        DisplaySave_imageClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(DisplaySave_imageClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        DisplaySave_imageClass->setStatusBar(statusBar);

        retranslateUi(DisplaySave_imageClass);
        QObject::connect(closeBtn, SIGNAL(clicked()), DisplaySave_imageClass, SLOT(close()));

        QMetaObject::connectSlotsByName(DisplaySave_imageClass);
    } // setupUi

    void retranslateUi(QMainWindow *DisplaySave_imageClass)
    {
        DisplaySave_imageClass->setWindowTitle(QApplication::translate("DisplaySave_imageClass", "DisplaySave_image", nullptr));
        loadBtn->setText(QApplication::translate("DisplaySave_imageClass", "Load", nullptr));
        saveBtn->setText(QApplication::translate("DisplaySave_imageClass", "Save", nullptr));
        closeBtn->setText(QApplication::translate("DisplaySave_imageClass", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DisplaySave_imageClass: public Ui_DisplaySave_imageClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYSAVE_IMAGE_H
