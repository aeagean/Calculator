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

    ApplicationContext::instance()->setContext("winManager", new Screen());

    WinManager::instance()->addWin("mainWin", "qrc:/main.qml");
    WinManager::instance()->addWin("win", "qrc:/qmlSource/win.qml");
    WinManager::instance()->addWin("helpWin", "qrc:/qmlSource/Help/Help.qml");
    WinManager::instance()->showWin("helpWin");
    return app.exec();
}
