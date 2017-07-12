#include "NumKey.h"

NumKey::NumKey()
{
    m_text = "";
}

void NumKey::setText(QString text)
{
    m_text = this->filterText(text + this->getKeyValueStr());
}

QString NumKey::getText()
{
    return m_text;
}

QString NumKey::filterText(QString text)
{
    for (int i = text.count() -1; i != 0; i--) {
        if (text.at(i) == QString("÷") ||
                text.at(i) == QString("×") ||
                text.at(i) == QString("-") ||
                text.at(i) == QString("+") ||
                text.at(i) == QString("%")) {

            QString lText = text.left(i+1);
            QString rText = text.right(text.count() - i -1);

            if (rText.indexOf(".") != -1 || rText.count() <=1) break;

            for (int j = 0; j < rText.count(); j++) {
                if (rText.at(0) == QString("0"))
                {
                    rText = rText.right(rText.count() - 1);

                }
                text = lText + rText;
            }

            break;
        }
    }
    return text;
}
