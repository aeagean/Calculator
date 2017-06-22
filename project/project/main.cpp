#include "WinManager.h"
#include "ApplicationContext.h"
#include "Screen.h"

#include <QGuiApplication>
#include <QWindow>
#include <QQmlApplicationEngine>
#include <QStack>
#include <QQuickView>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    ApplicationContext::instance()->setContext("winManager", WinManager::instance());

    WinManager::instance()->addWin("qrc:/qmlSource/win.qml");
    WinManager::instance()->addWin("qrc:/qmlSource/Help/Help.qml");

    return app.exec();
}
