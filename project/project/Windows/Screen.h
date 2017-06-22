#ifndef SCREEN_H
#define SCREEN_H
#include <QObject>
#include <QWindow>

class Screen : public QWindow
{
    Q_OBJECT
public:
    Screen(QWindow * parent = NULL);

};

#endif // SCREEN_H
