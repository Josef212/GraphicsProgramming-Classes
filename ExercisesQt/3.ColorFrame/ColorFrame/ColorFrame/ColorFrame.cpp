#include "ColorFrame.h"

ColorFrame::ColorFrame(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	connect(ui.redSlider, SIGNAL(valueChanged(int)), this, SLOT(OnChangeRed(int)));
	connect(ui.greenSlider, SIGNAL(valueChanged(int)), this, SLOT(OnChangeGreen(int)));
	connect(ui.blueSlider, SIGNAL(valueChanged(int)), this, SLOT(OnChangeBlue(int)));

	connect(ui.redSpinBox, SIGNAL(valueChanged(int)), this, SLOT(OnChangeRed(int)));
	connect(ui.greenSpinBox, SIGNAL(valueChanged(int)), this, SLOT(OnChangeGreen(int)));
	connect(ui.blueSpinBox, SIGNAL(valueChanged(int)), this, SLOT(OnChangeBlue(int)));

	UpdateFrame();
}

void ColorFrame::OnChangeRed(int value)
{
	frameColor.setRed(value);
	UpdateFrame();
}

void ColorFrame::OnChangeGreen(int value)
{
	frameColor.setGreen(value);
	UpdateFrame();
}

void ColorFrame::OnChangeBlue(int value)
{
	frameColor.setBlue(value);
	UpdateFrame();
}

void ColorFrame::UpdateFrame()
{
	QPalette pal = palette();
	pal.setColor(QPalette::Background, frameColor);
	ui.colorFrame->setAutoFillBackground(true);
	ui.colorFrame->setPalette(pal);
	ui.colorFrame->show();
}
