#ifndef SCREEN_H
#define SCREEN_H
#include <QObject>
#include <QWindow>

class Screen : public QObject
{
    Q_OBJECT
public:
    Screen(QObject * parent = NULL);
    Q_PROPERTY(int index READ index WRITE setIndex NOTIFY statusChanged)
    Q_PROPERTY(QString gotoWin READ gotoWin WRITE setGotoWin NOTIFY statusChanged)

    int index();
    void setIndex(int index);

    QString gotoWin();
    void setGotoWin(QString gotoWin);

signals:
    void statusChanged();

private:
    int m_index;
    QString m_gotoWin;
};

#endif // SCREEN_H
