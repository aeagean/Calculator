#include "DoubleZero.h"

DoubleZero::DoubleZero()
{
    m_text = "";
}

void DoubleZero::setText(QString text)
{
    if (text.isEmpty()) {
        m_text = "00";
    }
    else {
        m_text = text + "00";
    }
}

QString DoubleZero::getText()
{
    return m_text;
}
