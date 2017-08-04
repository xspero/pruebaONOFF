#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QProcess>
#include "scriptlauncher.h"
//#include "qtquick2applicationviewer.h"
#include <QQmlContext>
#include <QQmlComponent>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QLatin1String("qrc:/main.qml")));



    ScriptLauncher  launcher;
    engine.rootContext()->setContextProperty("ScriptLauncher", &launcher);






    return app.exec();
}
