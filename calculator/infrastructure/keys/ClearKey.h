#ifndef CLEARKEY_H
#define CLEARKEY_H

#include "KeyBase.h"

class ClearKey : public KeyBase
{
    Q_OBJECT
public:
    ClearKey();

    QString getText();

private:
    QString m_text;
};

#endif // CLEARKEY_H
