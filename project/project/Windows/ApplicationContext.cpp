#include "ApplicationContext.h"
#include <stdio.h>
#include <QDebug>

using namespace std;

ApplicationContext * ApplicationContext::m_instance = NULL;

ApplicationContext * ApplicationContext::instance()
{
    if (m_instance == NULL) {
        m_instance = new ApplicationContext();
    }
    return m_instance;
}

QObject * ApplicationContext::getContextObject(QString name)
{
    map<QString, QObject*>::iterator iter = m_contextMap.find(name);
    if (iter != m_contextMap.end()) {
        return iter->second;
    }
    else {
        qDebug("ERROR: [ApplicationContext] no such object in context: %s", name.toStdString().c_str());
        return NULL;
    }
}

void ApplicationContext::setContext(QString name, QObject *obj)
{
    map<QString, QObject*>::iterator iter = m_contextMap.find(name);
    if (iter != m_contextMap.end())
        m_contextMap.erase(iter);

    m_contextMap.insert(pair<QString, QObject*>(name, obj));
}

const map<QString, QObject*> ApplicationContext::getContextMap()
{
    return m_contextMap;
}



