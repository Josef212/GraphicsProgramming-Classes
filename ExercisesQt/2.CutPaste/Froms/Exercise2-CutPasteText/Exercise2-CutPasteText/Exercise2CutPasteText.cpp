#include "Exercise2CutPasteText.h"

Exercise2CutPasteText::Exercise2CutPasteText(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	connect(ui.cutButton, SIGNAL(clicked()), this, SLOT(OnCutBtn()));
	connect(ui.pasteButton, SIGNAL(clicked()), this, SLOT(OnPasteBtn()));
}

void Exercise2CutPasteText::OnCutBtn()
{
	text = ui.textEdit->toPlainText();
}

void Exercise2CutPasteText::OnPasteBtn()
{
	ui.showTextLabel->setText(text);
}
