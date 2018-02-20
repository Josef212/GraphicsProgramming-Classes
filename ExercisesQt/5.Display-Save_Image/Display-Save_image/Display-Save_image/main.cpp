#include "DisplaySave_image.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	DisplaySave_image w;
	w.show();
	return a.exec();
}
