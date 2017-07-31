#ifndef DIVKEY_H
#define DIVKEY_H

#include "KeyBase.h"

class DivKey : public KeyBase
{
    Q_OBJECT
public:
    DivKey();

    void setText(QString text);
    QString getText();

private:
    QString m_keyValueStr;
    QString m_text;
};

#endif // DIVKEY_H
