#include "Calculator.h"
#include <QDebug>

Calculator::Calculator()
{
    m_index = 0;
    m_text = "";

    connect(this, SIGNAL(indexChanged()), this, SLOT(setText()));
}

int Calculator::getIndex()
{
   return m_index;
}

void Calculator::setIndex(int index)
{
    m_index = index;
    emit indexChanged();
}

QString Calculator::getValue()
{

}

void Calculator::setValue(QString value)
{

}

QStringList Calculator::getTextList()
{
    return m_textList;
}

void Calculator::setTextList(QStringList strList)
{
    m_textList = strList;
    emit statusChanged();
}

QString Calculator::getText()
{
    return m_text;
}

void Calculator::setText()
{
    m_cInput.setIndex(m_index);
    m_text = m_cInput.getText();
    QStringList strList = m_cAnalyse.getStrList(m_text);
    if (m_index == 19) {
        m_text = m_cHandle.getStrValue(strList);
        QStringList textlist = this->getTextList();
        textlist.insert(0, m_text);
        this->setTextList(textlist);
        m_cInput.setText(m_text);
        qDebug()<<strList<<"="<<m_text;
    }
    else {
        QStringList textlist = this->getTextList();
        if (textlist.count()) {
            textlist.removeAt(0);
            textlist.insert(0, m_text);
            this->setTextList(textlist);
        }
        else {
           this->setTextList(strList);
        }
    }
    emit statusChanged();
}
