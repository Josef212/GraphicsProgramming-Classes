#pragma once

#include <QtWidgets/QMainWindow>
#include <QtWidgets/QGraphicsScene>
#include "ui_DisplaySave_image.h"

class DisplaySave_image : public QMainWindow
{
	Q_OBJECT

public:
	DisplaySave_image(QWidget *parent = Q_NULLPTR);

public slots:
	void OnSaveBtn();
	void OnLoadBtn();

private:
	void LoadImage(const char* path);

private:
	Ui::DisplaySave_imageClass ui;

	QImage* image = Q_NULLPTR;
	//QPixmap* image;
	QGraphicsScene* scene;
};
