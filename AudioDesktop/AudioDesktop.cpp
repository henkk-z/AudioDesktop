#include "AudioDesktop.h"

AudioDesktop::AudioDesktop(QWidget *parent)
	: QOpenGLWidget(parent)
{
	ui.setupUi(this);
	//setGeometry(0, 0, qApp->desktop()->width(), qApp->desktop()->height());
	setWindowFlags(windowFlags()
		| Qt::FramelessWindowHint //去边框
		| Qt::X11BypassWindowManagerHint //linux下脱离任务管理器
		| Qt::WindowStaysOnBottomHint //最低层显示
		//| Qt::Tool //不在任务栏显示
	);
	setAttribute(Qt::WA_TranslucentBackground);
	setWindowState(Qt::WindowNoState //不激活
		| Qt::WindowFullScreen //全屏
	);
	setFocusPolicy(Qt::NoFocus);
	//setWindowOpacity(WINDOW_OPACITY);
}

void AudioDesktop::initializeGL()
{
}

void AudioDesktop::resizeGL(int w, int h)
{
}


void AudioDesktop::paintGL()
{
}
