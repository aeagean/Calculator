#include "DotKey.h"

DotKey::DotKey()
{
    m_text = "";
}

void DotKey::setText(QString text)
{
    if (text.isEmpty()) {
        m_text = "0.";
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
            text.at(text.count() -1) == QString(".")  ) {

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
                m_text = text + ".";
            }
            else {
                m_text = text;
            }
        }
        else {
            m_text = text + "0.";
        }
    }
}

QString DotKey::getText()
{
    return m_text;
}
