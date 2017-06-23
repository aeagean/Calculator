#include "WinManager.h"
#include "ApplicationContext.h"
#include <QQmlApplicationEngine>
#include "Win.h"
#include "Screen.h"
#include <QQmlComponent>

using namespace std;

WinManager *WinManager::_instance = 0;

WinManager::WinManager(QQuickView* parent)
    : Win("mainWin", "qrc:/main.qml", parent), m_quickView(parent)
{
    m_index = 10;

    connect(ApplicationContext::instance()->getContext<Screen *>("winManager"), SIGNAL(statusChanged()),
            this, SLOT(nex()));
}

WinManager *WinManager::instance() {
    if (_instance == 0) {
        _instance = new WinManager();
    }
    return _instance;
}

void WinManager::addWin(QString name, QString qmlSource)
{
    QQmlComponent* com = new QQmlComponent(this);
    com->loadUrl(QUrl(qmlSource));
    com->create();
//    Win* win = new Win(name, qmlSource, this);
//    m_stackWin.append(win);
}

void WinManager::showWin(QString name)
{
    for (int i = 0; i < m_stackWin.count(); i++) {
        if (m_stackWin.at(i)->getName() == name) {
            m_stackWin.at(i)->show();
        }
        else {
            m_stackWin.at(i)->hide();
        }
    }
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

void WinManager::nex()
{
    Screen* screen = (Screen*)(ApplicationContext::instance()->getContext<Screen *>("winManager"));

    QString name = screen->gotoWin();
    showWin(name);
}
