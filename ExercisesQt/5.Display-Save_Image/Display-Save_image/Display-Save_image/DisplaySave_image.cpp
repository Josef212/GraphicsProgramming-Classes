#include "DisplaySave_image.h"

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
	LoadImage(nullptr);
}

void DisplaySave_image::LoadImage(const char * path)
{
	image->load("baixa.jpg");

	scene = new QGraphicsScene(this);
	scene->addPixmap(QPixmap::fromImage(*image));

	ui.image->setScene(scene);
}
