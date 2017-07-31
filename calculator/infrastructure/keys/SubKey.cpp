#include "SubKey.h"

SubKey::SubKey()
{
    m_text = "";
}

void SubKey::setText(QString text)
{
    if (text.isEmpty()) {
        m_text = text + getKeyValueStr();
    }
    else {
        if (text.at(text.count() -1) == QString("÷") ||
            text.at(text.count() -1) == QString("×") ||
            text.at(text.count() -1) == QString("-") ||
            text.at(text.count() -1) == QString("+")) {
                text.replace(text.count() -1, 1, getKeyValueStr());
                m_text = text;
        }
        else {
            m_text = text + getKeyValueStr();
        }
    }
}

QString SubKey::getText()
{
    return m_text;
}
