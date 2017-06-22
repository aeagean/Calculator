#ifndef WINMANAGER_H
#define WINMANAGER_H

#include "QQuickView"
#include "Win.h"
#include <QStack>

class WinManager : public Win
{
    Q_OBJECT
public:
    static WinManager *instance();

    Q_PROPERTY(int index READ index WRITE setIndex NOTIFY statusChanged)

    void addWin(QString qmlSource);

    int index();
    void setIndex(int index);

signals:
    void statusChanged();

private:
    WinManager(Win(QStirng name, QuickView* parent = 0));

private:
    static WinManager *_instance;
    QStack<Win *> stackWin;
    int m_index;
};

#endif // WINMANAGER_H
