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
}

void ScriptLauncher::encenderPantalla()
{
    m_process->start("echo 0 > /sys/class/backlight/rpi_backlight/bl_power");
    m_process->start("./encender");
}
