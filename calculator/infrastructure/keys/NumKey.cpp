#include "NumKey.h"
#include <QDebug>

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
    text = this->filterZero(text);

    text = this->filterSurplusZero(text);

    return text;
}

QString NumKey::filterZero(QString text)
{
    for (int i = text.count() -1; i >= 0; i--) {
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

QString NumKey::filterSurplusZero(QString text)
{
    if (text == "000") {
        return text = "00";
    }
    else if (text == "00") {
        return text = "0";
    }

    if (text.count() >= 2 && text.left(2) != "0.") { //remove twice
        if (text.at(0) == QString("0")) {
            text.remove(0, 1);
        }
        if (text.at(0) == QString("0")) {
            text.remove(0, 1);
        }
    }

    return text;
}
