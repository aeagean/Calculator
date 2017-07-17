#ifndef CHANDLE_H
#define CHANDLE_H

#include <QStringList>

class CHandle
{
public:
    CHandle();

    QString getStrValue(QStringList strList);

private:
    QString m_value;
};

#endif // CHANDLE_H
