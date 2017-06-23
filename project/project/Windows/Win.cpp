#include "Win.h"
#include "ApplicationContext.h"
#include <QQmlContext>

using namespace std;

Win::Win(QString name, QString qmlSource, QQuickView* parent)
    : QQuickView(parent), m_name(name)
{

//    this->setFlags(Qt::FramelessWindowHint);
//    this->setResizeMode(QQuickView::SizeRootObjectToView);
    this->setSource(QUrl(qmlSource));
    this->show();
    this->setContextProperty();
}

void Win::setName(QString name)
{
    m_name = name;
}

QString Win::getName()
{
    return m_name;
}

void Win::setContextProperty()
{
    map<QString,QObject*> contextMap = ApplicationContext::instance()->getContextMap();
    map<QString,QObject*>::iterator iter;

    for (iter = contextMap.begin(); iter != contextMap.end(); iter++)
    {
        this->rootContext()->setContextProperty(iter->first, iter->second);
    }
}
