#include "DoubleZero.h"

DoubleZero::DoubleZero()
{
    m_text = "";
}

void DoubleZero::setText(QString text)
{
    m_text = text + getKeyValueStr();

    if (m_text == "000") {
        m_text = "0";
    }
    else if (m_text == "0000"){
        m_text = "00";
    }
}

QString DoubleZero::getText()
{
    return m_text;
}
