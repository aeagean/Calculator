#ifndef DOTKEY_H
#define DOTKEY_H

#include "KeyBase.h"

class DotKey : public KeyBase
{
public:
    DotKey();

    void setText(QString text);
    QString getText();

private:
    QString m_keyValueStr;
    QString m_text;
};

#endif // DOTKEY_H
