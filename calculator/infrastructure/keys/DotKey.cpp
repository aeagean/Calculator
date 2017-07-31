#include "DotKey.h"

DotKey::DotKey()
{
    m_text = "";
}

void DotKey::setText(QString text)
{
    text = this->filterText(text);

    m_text = this->filterSurplusZero(text);
}

QString DotKey::getText()
{
    return m_text;
}

QString DotKey::filterText(QString text)
{
    QString vText = "";
    if (text.isEmpty()) {
        vText = "0.";
    }
    else {
        if (text.at(text.count() -1) == QString("0") ||
            text.at(text.count() -1) == QString("1") ||
            text.at(text.count() -1) == QString("2") ||
            text.at(text.count() -1) == QString("3") ||
            text.at(text.count() -1) == QString("4") ||
            text.at(text.count() -1) == QString("5") ||
            text.at(text.count() -1) == QString("6") ||
            text.at(text.count() -1) == QString("7") ||
            text.at(text.count() -1) == QString("8") ||
            text.at(text.count() -1) == QString("9") ||
            text.at(text.count() -1) == QString(".")  ) {//indexOf(QRegExp("[0-9]|[.]"))

            bool flag = false;
            for (int i = 0; i < text.count(); i++) {
                if (text.at(text.count() -1 -i) == QString("÷") ||
                    text.at(text.count() -1 -i) == QString("×") ||
                    text.at(text.count() -1 -i) == QString("-") ||
                    text.at(text.count() -1 -i) == QString("+")) {
                    flag = true;
                    break;
                }
                else if (text.at(text.count() -1 -i) == QString(".")) {
                    flag = false;
                    break;
                }
                else {
                    flag = true;
                }

            }
            if (flag) {
                vText = text + ".";
            }
            else {
                vText = text;
            }
        }
        else {
            vText = text + "0.";
        }
    }

    return vText;
}

QString DotKey::filterSurplusZero(QString text)
{
    if (text == "00.") {
        text = "0.";
    }

    return text;
}
