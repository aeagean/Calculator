#include "AddKey.h"

AddKey::AddKey()
{
    m_text = "";
}

void AddKey::setText(QString text)
{
    if (text.isEmpty()) {
        m_text = "";
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

QString AddKey::getText()
{
    return m_text;
}
