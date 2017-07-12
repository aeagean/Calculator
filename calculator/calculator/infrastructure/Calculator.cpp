#include "Calculator.h"

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
    emit statusChanged();
}
