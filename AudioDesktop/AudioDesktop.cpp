#include "AudioDesktop.h"

AudioDesktop::AudioDesktop(QWidget *parent)
	: QOpenGLWidget(parent)
{
	ui.setupUi(this);
	//setGeometry(0, 0, qApp->desktop()->width(), qApp->desktop()->height());
	setWindowFlags(windowFlags()
		| Qt::FramelessWindowHint //ȥ�߿�
		| Qt::X11BypassWindowManagerHint //linux���������������
		| Qt::WindowStaysOnBottomHint //��Ͳ���ʾ
		//| Qt::Tool //������������ʾ
	);
	setAttribute(Qt::WA_TranslucentBackground);
	setWindowState(Qt::WindowNoState //������
		| Qt::WindowFullScreen //ȫ��
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
