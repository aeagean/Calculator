#include "WinManager.h"
#include "ApplicationContext.h"
#include <QQmlApplicationEngine>
#include "Win.h"

using namespace std;

WinManager *WinManager::_instance = 0;

WinManager::WinManager(Win* parent)
//    : QQuickView(parent)
{
    Win* win = new Win("qrc:/main.qml", this);
    m_index = 10;
}

WinManager *WinManager::instance() {
    if (_instance == 0) {
        _instance = new WinManager();
    }
    return _instance;
}

void WinManager::addWin(QString qmlSource)
{
    Win* win = new Win(qmlSource, this);
    stackWin.append(win);
}

int WinManager::index()
{
    return m_index;
}

void WinManager::setIndex(int index)
{
    m_index = index;
    emit statusChanged();
}
