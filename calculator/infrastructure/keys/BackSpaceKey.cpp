#include "BackSpaceKey.h"

BackSpaceKey::BackSpaceKey()
{
   m_text = "";
}

void BackSpaceKey::setText(QString text)
{
    m_text = text;
    m_text.chop(1);
}

QString BackSpaceKey::getText()
{
    return m_text;
}
