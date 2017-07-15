#include "PerKey.h"

PerKey::PerKey()
{
    m_text = "";
}

void PerKey::setText(QString text)
{
    if (text.isEmpty()) {
        m_text = "";
    }
    else {
        if (text.at(text.count() -1) == QString("÷") ||
            text.at(text.count() -1) == QString("×") ||
            text.at(text.count() -1) == QString("-") ||
            text.at(text.count() -1) == QString("+")) {
            m_text = text;
        }
        else {
            m_text = text + getKeyValueStr();
        }
    }
}

QString PerKey::getText()
{
    return m_text;
}
