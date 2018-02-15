#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ColorFrame.h"

class ColorFrame : public QMainWindow
{
	Q_OBJECT

public:
	ColorFrame(QWidget *parent = Q_NULLPTR);

public slots:
	void OnChangeRed(int value);
	void OnChangeGreen(int value);
	void OnChangeBlue(int value);

private:
	void UpdateFrame();

private:
	Ui::ColorFrameClass ui;
	QColor frameColor = QColor(0, 0, 0);
};
