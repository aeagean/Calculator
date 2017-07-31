#ifndef BACKSPACEKEY_H
#define BACKSPACEKEY_H

#include "KeyBase.h"

class BackSpaceKey : public KeyBase
{
public:
    BackSpaceKey();

    void setText(QString text);
    QString getText();

private:
    QString m_text;
};

#endif // BACKSPACEKEY_H
