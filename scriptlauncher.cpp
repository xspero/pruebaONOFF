#include "scriptlauncher.h"

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
    m_process->start("echo 1 > /sys/class/backlight/rpi_backlight/bl_power");
    m_process->kill();
    m_process->close();
    m_process->terminate();
    m_process->waitForFinished(1000);
    m_process->start("apagar.sh");  //con apagar.sh en /bin
    m_process->kill();
    m_process->close();
    m_process->terminate();
    m_process->waitForFinished(1000);
    m_process->start("sh apagar.sh");
    m_process->kill();
    m_process->close();
    m_process->terminate();
    m_process->waitForFinished(1000);
    m_process->start("sh /bin/apagar.sh");
    m_process->kill();
    m_process->close();
    m_process->terminate();
    m_process->waitForFinished(1000);


}

void ScriptLauncher::encenderPantalla()
{
    m_process->start("echo 0 > /sys/class/backlight/rpi_backlight/bl_power");
    m_process->kill();
    m_process->close();
    m_process->terminate();
    m_process->waitForFinished(1000);
    m_process->start("encender.sh");
    m_process->kill();
    m_process->close();
    m_process->terminate();
    m_process->waitForFinished(1000);
    m_process->start("sh encender.sh");
    m_process->kill();
    m_process->close();
    m_process->terminate();
    m_process->waitForFinished(1000);
    m_process->start("sh /bin/encender.sh");
    m_process->kill();
    m_process->close();
    m_process->terminate();
    m_process->waitForFinished(1000);

}
