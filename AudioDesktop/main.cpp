#include "AudioDesktop.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	AudioDesktop w;
	w.show();
	return a.exec();
}
