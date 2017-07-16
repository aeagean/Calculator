#ifndef MULKEY_H
#define MULKEY_H

#include "KeyBase.h"

class MulKey : public KeyBase
{
    Q_OBJECT
public:
    MulKey();

    void setText(QString text);
    QString getText();

private:
    QString m_keyValueStr;
    QString m_text;
};

#endif // MULKEY_H
