#ifndef WINMANAGER_H
#define WINMANAGER_H

#include "QQuickView"
#include "Win.h"
#include <QStack>
#include <QList>

class WinManager : public Win
{
    Q_OBJECT
public:
    static WinManager *instance();

    Q_PROPERTY(int index READ index WRITE setIndex NOTIFY statusChanged)

    void addWin(QString name, QString qmlSource);
    void showWin(QString name);

    int index();
    void setIndex(int index);

private slots:
    void nex();

signals:
    void statusChanged();

private:
    WinManager(QQuickView* parent = 0);

private:
    static WinManager *_instance;
    QList<Win *> m_stackWin;
    QQuickView* m_quickView;
    int m_index;
};

#endif // WINMANAGER_H
