#include "Screen.h"
#include <QDebug>
#include <QScreen>


Screen::Screen(QObject *parent)
    : QObject(parent)
{
    m_index = 0;
    m_gotoWin = "";
}

int Screen::index()
{
    return m_index;
}

void Screen::setIndex(int index)
{
    m_index = index;
    emit statusChanged();
}

QString Screen::gotoWin()
{
    return m_gotoWin;
}

void Screen::setGotoWin(QString gotoWin)
{
    m_gotoWin = gotoWin;
    emit statusChanged();
}
