/********************************************************************************
** Form generated from reading UI file 'AudioDesktop.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUDIODESKTOP_H
#define UI_AUDIODESKTOP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AudioDesktopClass
{
public:

    void setupUi(QWidget *AudioDesktopClass)
    {
        if (AudioDesktopClass->objectName().isEmpty())
            AudioDesktopClass->setObjectName(QString::fromUtf8("AudioDesktopClass"));
        AudioDesktopClass->resize(600, 400);

        retranslateUi(AudioDesktopClass);

        QMetaObject::connectSlotsByName(AudioDesktopClass);
    } // setupUi

    void retranslateUi(QWidget *AudioDesktopClass)
    {
        AudioDesktopClass->setWindowTitle(QApplication::translate("AudioDesktopClass", "AudioDesktop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AudioDesktopClass: public Ui_AudioDesktopClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUDIODESKTOP_H
