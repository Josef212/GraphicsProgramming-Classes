#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Demo.h"

class Demo : public QMainWindow
{
	Q_OBJECT

public:
	Demo(QWidget *parent = Q_NULLPTR);

private:
	Ui::DemoClass ui;
};
