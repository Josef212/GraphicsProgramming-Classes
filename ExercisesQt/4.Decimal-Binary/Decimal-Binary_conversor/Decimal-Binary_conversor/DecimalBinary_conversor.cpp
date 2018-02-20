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
	long long n = (long long)ui.binarySpinBox->value();

	int decimalNumber = 0, i = 0, reminder;

	while(n!=0)
	{
		reminder = n % 2;
		n /= 10;
		decimalNumber += reminder * pow(2, i);
		++i;
	}

	ui.decimalSpinBox->setValue(decimalNumber);
}

void DecimalBinary_conversor::ToBinary()
{
	long long n = (long long)ui.decimalSpinBox->value();
	long long ret = 0;
	int remainder, i = 1, step = 1;

	while(n!=0)
	{
		remainder = n % 2;
		n /= 2;
		ret += remainder * i;
		i *= 10;
	}

	ui.binarySpinBox->setValue(ret);
}