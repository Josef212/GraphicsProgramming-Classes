#include "DisplaySave_image.h"
#include <QtWidgets\QFileDialog>

DisplaySave_image::DisplaySave_image(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	connect(ui.saveBtn, SIGNAL(clicked()), this, SLOT(OnSaveBtn()));
	connect(ui.loadBtn, SIGNAL(clicked()), this, SLOT(OnLoadBtn()));

	image = new QImage();
}

void DisplaySave_image::OnSaveBtn()
{

}

void DisplaySave_image::OnLoadBtn()
{
	QString filename = QFileDialog::getOpenFileName(this, QString(), QString(), tr("Images (*.png *.jpg *.xpm *.bmp"));
	ui.statusBar->showMessage(filename);
	LoadImage(filename);
}

void DisplaySave_image::LoadImage(QString filename)
{
	image->load(filename);

	scene = new QGraphicsScene(this);
	scene->addPixmap(QPixmap::fromImage(*image));
	scene->setSceneRect(QRect(0, 0, image->size().width(), image->size().height()));

	ui.image->setScene(scene);
	ui.image->setSceneRect(image->rect());
}
