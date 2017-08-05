#include "scriptlauncher.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>

ScriptLauncher::ScriptLauncher(QObject *parent) :
QObject(parent),
m_process(new QProcess(this))
{

}

void ScriptLauncher::launchScript()
{
    //m_process->start("./test.sh");
    m_process->start("echo 0 > /sys/class/backlight/rpi_backlight/bl_power");
}

void ScriptLauncher::apagarPantalla()
{
    bool isOn=true;

    QFile backlightFile("/sys/class/backlight/rpi_backlight/bl_power");

    if (backlightFile.exists()) {
        if (!backlightFile.open(QIODevice::WriteOnly | QIODevice::Text)) {
            //qWarning() << "Can't open backlightfile for write?";
            return;
        }
        QTextStream out(&backlightFile);
        out << (isOn ? 0 : 1);
    } else {
        qDebug() << "Backlight would have been turned " << (isOn ? "on" : "off") << " here";
    }


}

void ScriptLauncher::encenderPantalla()
{
    bool isOn=false;

    QFile backlightFile("/sys/class/backlight/rpi_backlight/bl_power");

    if (backlightFile.exists()) {
        if (!backlightFile.open(QIODevice::WriteOnly | QIODevice::Text)) {
            //qWarning() << "Can't open backlightfile for write?";
            return;
        }
        QTextStream out(&backlightFile);
        out << (isOn ? 0 : 1);
    } else {
        qDebug() << "Backlight would have been turned " << (isOn ? "on" : "off") << " here";
    }


}
