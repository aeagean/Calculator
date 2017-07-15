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
        qDebug()<<strList<<"="<<m_text;
    }
    emit statusChanged();
}
