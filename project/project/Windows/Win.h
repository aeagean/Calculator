#ifndef Win_H
#define Win_H

#include "QQuickView"

class Win : public QQuickView
{
    Q_OBJECT
public:
    Win(QString name, QQuickView* parent = 0);

private:
    void setContextProperty();

private:

};

#endif // Win_H
