#ifndef ADDKEY_H
#define ADDKEY_H

#include "KeyBase.h"

class AddKey : public KeyBase
{
    Q_OBJECT
public:
    AddKey();

    void setText(QString text);
    QString getText();

private:
    QString m_keyValueStr;
    QString m_text;
};

#endif // ADDKEY_H
