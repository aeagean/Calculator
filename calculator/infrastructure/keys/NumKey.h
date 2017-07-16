#ifndef NUMKEY_H
#define NUMKEY_H

#include "KeyBase.h"

class NumKey : public KeyBase
{
    Q_OBJECT
public:
    NumKey();

    void setText(QString text);
    QString getText();

private:
    QString filterText(QString text);
    QString filterZero(QString text);
    QString filterSurplusZero(QString text);

private:
    QString m_keyValueStr;
    QString m_text;
};

#endif // NUMKEY_H
