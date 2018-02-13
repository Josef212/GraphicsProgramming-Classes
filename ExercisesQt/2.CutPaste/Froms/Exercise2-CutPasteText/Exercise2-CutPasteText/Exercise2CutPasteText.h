#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Exercise2CutPasteText.h"

class Exercise2CutPasteText : public QMainWindow
{
	Q_OBJECT

public:
	Exercise2CutPasteText(QWidget *parent = Q_NULLPTR);

public slots:
	void OnCutBtn();
	void OnPasteBtn();
	

private:
	Ui::Exercise2CutPasteTextClass ui;

	QString text;
};
