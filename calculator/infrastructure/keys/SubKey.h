#ifndef SUBKEY_H
#define SUBKEY_H

#include "KeyBase.h"

class SubKey : public KeyBase
{
public:
    SubKey();

    void setText(QString text);
    QString getText();

private:
    QString m_keyValueStr;
    QString m_text;
};

#endif // SUBKEY_H
