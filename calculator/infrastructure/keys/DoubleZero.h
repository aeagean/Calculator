#ifndef DOUBLEZERO_H
#define DOUBLEZERO_H

#include "KeyBase.h"

class DoubleZero : public KeyBase
{
    Q_OBJECT
public:
    DoubleZero();

    void setText(QString text);
    QString getText();

private:
    QString m_keyValueStr;
    QString m_text;
};

#endif // DOUBLEZERO_H
