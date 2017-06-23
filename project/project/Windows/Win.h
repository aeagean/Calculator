#ifndef Win_H
#define Win_H

#include "QQuickView"

class Win : public QQuickView
{
    Q_OBJECT
public:
    friend class WindowManager;
    Win(QString name, QString qmlSource, QQuickView* parent = 0);

    void setName(QString name);
    QString getName();

private:
    void setContextProperty();

private:
    QString m_name;
};

#endif // Win_H
