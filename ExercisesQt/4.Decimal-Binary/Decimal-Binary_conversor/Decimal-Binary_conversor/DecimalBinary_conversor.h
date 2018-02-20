#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_DecimalBinary_conversor.h"

class DecimalBinary_conversor : public QMainWindow
{
	Q_OBJECT

public:
	DecimalBinary_conversor(QWidget *parent = Q_NULLPTR);

public slots:
	void ToDecimal();
	void ToBinary();

private:
	Ui::DecimalBinary_conversorClass ui;
};
