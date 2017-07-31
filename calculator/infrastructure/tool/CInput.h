#ifndef _CINPUT_H
#define _CINPUT_H

#include "NumKey.h"
#include "ClearKey.h"
#include "BackSpaceKey.h"
#include "AddKey.h"
#include "SubKey.h"
#include "MulKey.h"
#include "DivKey.h"
#include "PerKey.h"
#include "DotKey.h"
#include "DoubleZero.h"
#include <QString>

static const QString indexStr[] = {
    "C", "←", "%", "÷",
    "7", "8", "9", "×",
    "4", "5", "6", "-",
    "1", "2", "3", "+",
   "00", "0", ".", "="
};

class CInput
{
public:
    CInput();

    void setIndex(int index);
    void setText(QString text);
    QString getText();

private:
    QString filterText(QString text);

private:
    int m_index;
    QString m_text;
    NumKey m_numKey;
    ClearKey m_clearKey;
    BackSpaceKey m_backSpaceKey;
    AddKey m_addKey;
    SubKey m_subKey;
    MulKey m_mulKey;
    DivKey m_divKey;
    PerKey m_perKey;
    DotKey m_dotKey;
    DoubleZero m_doubleZero;
};

#endif
