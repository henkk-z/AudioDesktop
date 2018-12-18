#pragma once

#include <QtWidgets/QWidget>
#include "ui_AudioDesktop.h"

class AudioDesktop : public QWidget
{
	Q_OBJECT

public:
	AudioDesktop(QWidget *parent = Q_NULLPTR);

private:
	Ui::AudioDesktopClass ui;
};
