#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ColorFrame.h"

class ColorFrame : public QMainWindow
{
	Q_OBJECT

public:
	ColorFrame(QWidget *parent = Q_NULLPTR);

private:
	Ui::ColorFrameClass ui;
};
