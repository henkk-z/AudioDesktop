#include <QtWidgets/QWidget>
#include "ui_AudioDesktop.h"
#include <QOpenGLWidget>
#include <QOpenGLFunctions>
QT_BEGIN_NAMESPACE
class QPainter;
class QOpenGLContext;
class QOpenGLPaintDevice;
class QOpenGLShaderProgram;
QT_END_NAMESPACE
class AudioDesktop : public QOpenGLWidget, protected QOpenGLFunctions
{
	Q_OBJECT

public:
	AudioDesktop(QWidget *parent = Q_NULLPTR);
	~AudioDesktop();
	void initializeGL();
	void resizeGL(int w, int h);
	void paintGL();
private:
	Ui::AudioDesktopClass ui;
	QOpenGLContext *m_context;              // �������
	QOpenGLShaderProgram *m_program;        // ��ɫ��(��ˢ)����

	GLuint m_posAttr;                       // ��ɫ������������
	GLuint m_colAttr;                       // ��ɫ������������
	GLuint m_matrixUniform;                 // ��ɫ��������uniform

	int  m_frame;                           // ѭ��������ֻҪ��һ��
	bool m_update_pending;                  // ��ͼ��ɱ�־(���ڸ��±�־)
};
