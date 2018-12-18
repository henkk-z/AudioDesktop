#pragma once

#include <QtWidgets/QWidget>
#include "ui_AudioDesktop.h"

#include <QOpenGLWidget>
#include <QOpenGLFunctions>
class AudioDesktop : public QOpenGLWidget, protected QOpenGLFunctions
{
	Q_OBJECT

public:
	AudioDesktop(QWidget *parent = Q_NULLPTR);
	void initializeGL();
	void resizeGL(int w, int h);
	void paintGL();
private:
	Ui::AudioDesktopClass ui;
};
