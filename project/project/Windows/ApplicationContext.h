#ifndef CPP_APPLICATION_CONTEXT_H
#define CPP_APPLICATION_CONTEXT_H

#include <map>
#include <QObject>

class ApplicationContext
{
public:
    static ApplicationContext * instance();

    template <class T>
    T getContext(QString name);

    void setContext(QString name, QObject *obj);

    const std::map<QString, QObject *> getContextMap();

private:
    QObject * getContextObject(QString name);

private:
    static ApplicationContext * m_instance;

    std::map<QString, QObject *> m_contextMap;
};

template <class T>
T ApplicationContext::getContext(QString name)
{
    QObject *obj = getContextObject(name);
    if (obj == NULL)
        return NULL;

    return qobject_cast<T>(obj);
}

#endif // CPP_APPLICATION_CONTEXT_H
