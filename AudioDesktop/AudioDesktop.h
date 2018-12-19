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
	QOpenGLContext *m_context;              // 画板对象
	QOpenGLShaderProgram *m_program;        // 着色器(画刷)对象

	GLuint m_posAttr;                       // 着色器参数：属性
	GLuint m_colAttr;                       // 着色器参数：纹理
	GLuint m_matrixUniform;                 // 着色器参数：uniform

	int  m_frame;                           // 循环变量，只要到一次
	bool m_update_pending;                  // 绘图完成标志(窗口更新标志)
};
