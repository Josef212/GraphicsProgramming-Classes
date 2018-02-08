#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Exercise1Dials.h"

class Exercise1Dials : public QMainWindow
{
	Q_OBJECT

public:
	Exercise1Dials(QWidget *parent = Q_NULLPTR);

private:
	Ui::Exercise1DialsClass ui;
};
