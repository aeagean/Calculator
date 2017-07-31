#ifndef PERKEY_H
#define PERKEY_H

#include "KeyBase.h"

class PerKey : public KeyBase
{
public:
    PerKey();

    void setText(QString text);
    QString getText();

private:
    QString m_keyValueStr;
    QString m_text;
};

#endif // PERKEY_H
