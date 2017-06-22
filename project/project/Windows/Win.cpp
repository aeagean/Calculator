#include "Win.h"
#include "ApplicationContext.h"
#include <QQmlContext>

using namespace std;

Win::Win(QString name, QQuickView* parent)
    : QQuickView(parent)
{

    this->setResizeMode(QQuickView::SizeRootObjectToView);
    this->setSource(QUrl(name));
    this->show();
    this->setContextProperty();
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
