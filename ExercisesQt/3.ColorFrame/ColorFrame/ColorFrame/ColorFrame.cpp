#include "ColorFrame.h"

ColorFrame::ColorFrame(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	QPalette pal = palette();
	pal.setColor(QPalette::Background, QColor(0, 0, 0));
	ui.colorFrame->setAutoFillBackground(true);
	ui.colorFrame->setPalette(pal);
	ui.colorFrame->show();
}
