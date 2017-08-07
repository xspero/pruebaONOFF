#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QProcess>
#include "scriptlauncher.h"
#include "clock.h"
#include <QQmlContext>
#include <QQmlComponent>



int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);

    ScriptLauncher launcher;


    QQmlApplicationEngine engine;



    engine.load(QUrl(QLatin1String("qrc:/main.qml")));




    engine.rootContext()->setContextProperty("ScriptLauncher", &launcher);



    Clock clock(&engine);
    engine.rootContext()->setContextProperty("clock", &clock);






    return app.exec();
}
