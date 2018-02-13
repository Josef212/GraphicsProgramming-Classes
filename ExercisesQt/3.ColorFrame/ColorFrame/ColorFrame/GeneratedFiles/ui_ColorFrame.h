/********************************************************************************
** Form generated from reading UI file 'ColorFrame.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORFRAME_H
#define UI_COLORFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ColorFrameClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QFrame *colorFrame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *RedLayout;
    QLabel *label;
    QSlider *redSlider;
    QSpinBox *redSpinBox;
    QHBoxLayout *GreenLayout;
    QLabel *label_2;
    QSlider *greenSlider;
    QSpinBox *greenSpinBox;
    QHBoxLayout *BlueLayout;
    QLabel *label_3;
    QSlider *blueSlider;
    QSpinBox *blueSpinBox;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ColorFrameClass)
    {
        if (ColorFrameClass->objectName().isEmpty())
            ColorFrameClass->setObjectName(QStringLiteral("ColorFrameClass"));
        ColorFrameClass->resize(753, 551);
        centralWidget = new QWidget(ColorFrameClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        colorFrame = new QFrame(centralWidget);
        colorFrame->setObjectName(QStringLiteral("colorFrame"));
        colorFrame->setFrameShape(QFrame::StyledPanel);
        colorFrame->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(colorFrame, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        RedLayout = new QHBoxLayout();
        RedLayout->setSpacing(6);
        RedLayout->setObjectName(QStringLiteral("RedLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        RedLayout->addWidget(label);

        redSlider = new QSlider(centralWidget);
        redSlider->setObjectName(QStringLiteral("redSlider"));
        redSlider->setOrientation(Qt::Horizontal);

        RedLayout->addWidget(redSlider);

        redSpinBox = new QSpinBox(centralWidget);
        redSpinBox->setObjectName(QStringLiteral("redSpinBox"));

        RedLayout->addWidget(redSpinBox);


        verticalLayout->addLayout(RedLayout);

        GreenLayout = new QHBoxLayout();
        GreenLayout->setSpacing(6);
        GreenLayout->setObjectName(QStringLiteral("GreenLayout"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        GreenLayout->addWidget(label_2);

        greenSlider = new QSlider(centralWidget);
        greenSlider->setObjectName(QStringLiteral("greenSlider"));
        greenSlider->setOrientation(Qt::Horizontal);

        GreenLayout->addWidget(greenSlider);

        greenSpinBox = new QSpinBox(centralWidget);
        greenSpinBox->setObjectName(QStringLiteral("greenSpinBox"));

        GreenLayout->addWidget(greenSpinBox);


        verticalLayout->addLayout(GreenLayout);

        BlueLayout = new QHBoxLayout();
        BlueLayout->setSpacing(6);
        BlueLayout->setObjectName(QStringLiteral("BlueLayout"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        BlueLayout->addWidget(label_3);

        blueSlider = new QSlider(centralWidget);
        blueSlider->setObjectName(QStringLiteral("blueSlider"));
        blueSlider->setOrientation(Qt::Horizontal);

        BlueLayout->addWidget(blueSlider);

        blueSpinBox = new QSpinBox(centralWidget);
        blueSpinBox->setObjectName(QStringLiteral("blueSpinBox"));

        BlueLayout->addWidget(blueSpinBox);


        verticalLayout->addLayout(BlueLayout);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);

        ColorFrameClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ColorFrameClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 753, 21));
        ColorFrameClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ColorFrameClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ColorFrameClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ColorFrameClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ColorFrameClass->setStatusBar(statusBar);

        retranslateUi(ColorFrameClass);
        QObject::connect(redSpinBox, SIGNAL(valueChanged(int)), redSlider, SLOT(setValue(int)));
        QObject::connect(redSlider, SIGNAL(valueChanged(int)), redSpinBox, SLOT(setValue(int)));
        QObject::connect(greenSpinBox, SIGNAL(valueChanged(int)), greenSlider, SLOT(setValue(int)));
        QObject::connect(greenSlider, SIGNAL(valueChanged(int)), greenSpinBox, SLOT(setValue(int)));
        QObject::connect(blueSpinBox, SIGNAL(valueChanged(int)), blueSlider, SLOT(setValue(int)));
        QObject::connect(blueSlider, SIGNAL(valueChanged(int)), blueSpinBox, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(ColorFrameClass);
    } // setupUi

    void retranslateUi(QMainWindow *ColorFrameClass)
    {
        ColorFrameClass->setWindowTitle(QApplication::translate("ColorFrameClass", "ColorFrame", nullptr));
        label->setText(QApplication::translate("ColorFrameClass", "Red", nullptr));
        label_2->setText(QApplication::translate("ColorFrameClass", "Green", nullptr));
        label_3->setText(QApplication::translate("ColorFrameClass", "Blue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ColorFrameClass: public Ui_ColorFrameClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORFRAME_H
