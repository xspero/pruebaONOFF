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
    m_process->start("./apagar");
    m_process->start("sh apagar");
    m_process->start("sh /bin/apagar");
    m_process->start("sh ./bin/apagar");

}

void ScriptLauncher::encenderPantalla()
{
    m_process->start("echo 0 > /sys/class/backlight/rpi_backlight/bl_power");
    m_process->start("./encender");
    m_process->start("sh encender");
    m_process->start("sh /bin/encender");
    m_process->start("sh ./bin/encender");
}
