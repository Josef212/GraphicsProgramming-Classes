#include "DecimalBinary_conversor.h"

DecimalBinary_conversor::DecimalBinary_conversor(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	connect(ui.toBinaryBtn, SIGNAL(clicked()), this, SLOT(ToBinary()));
	connect(ui.toDecimalBtn, SIGNAL(clicked()), this, SLOT(ToDecimal()));
}

void DecimalBinary_conversor::ToDecimal()
{
	unsigned int value = (unsigned int)ui.binarySpinBox->value();

	ui.decimalSpinBox->setValue(value);
}

void DecimalBinary_conversor::ToBinary()
{
	unsigned int value = (unsigned int)ui.decimalSpinBox->value();

	ui.binarySpinBox->setValue(value);
}