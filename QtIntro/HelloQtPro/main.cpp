#include <QApplication>
#include <QPushButton>
#include <QFrame>
#include <QLabel>
#include <QSpinBox>
#include <QSlider>
#include <QLayout>

/*class MyLabel : public QLabel
{
	Q_OBJECT

public:
	MyLabel(QWidget* parent);
	~MyLabel();

public slots:
	void ChangeToRed();
	void ChageToBlue();

signals:
	void ExampleSignal();

};

MyLabel::MyLabel(QWidget* parent) : QLabel(parent)
{

}

MyLabel::~MyLabel()
{

}

void MyLabel::ChangeToRed()
{

}

void MyLabel::ChageToBlue()
{

}*/

int main(int argc, char** argv)
{
	QApplication a(argc, argv);
	QFrame F(0, NULL);

	QSlider* slider = new QSlider(Qt::Horizontal, &F);
	slider->setMaximum(100);
	QSpinBox* spinBox = new QSpinBox(&F);
	spinBox->setMaximum(100);

	QHBoxLayout* layout = new QHBoxLayout();
	layout->addWidget(slider);
	layout->addWidget(spinBox);

	F.setLayout(layout);

	a.connect(slider, SIGNAL(valueChanged(int)), spinBox, SLOT(setValue(int)));
	a.connect(spinBox, SIGNAL(valueChanged(int)), slider, SLOT(setValue(int)));

	F.show();
	return a.exec();
}