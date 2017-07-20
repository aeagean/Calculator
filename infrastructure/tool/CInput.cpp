#include "CInput.h"

CInput::CInput()
{
    m_index = 0;
    m_text = "";
}

void CInput::setIndex(int index)
{
    m_index = index;

    if (m_index == 0) {
        m_text = m_clearKey.getText();
    }
    else if (m_index == 1) {
        m_backSpaceKey.setText(m_text);
        m_text = m_backSpaceKey.getText();
    }
    else if (m_index == 2) {
        m_perKey.setKeyValueStr(indexStr[m_index]);
        m_perKey.setText(m_text);
        m_text = m_perKey.getText();
    }
    else if (m_index == 3) {
        m_divKey.setKeyValueStr(indexStr[m_index]);
        m_divKey.setText(m_text);
        m_text = m_divKey.getText();
    }
    else if (m_index == 7) {
        m_mulKey.setKeyValueStr(indexStr[m_index]);
        m_mulKey.setText(m_text);
        m_text = m_mulKey.getText();
    }
    else if (m_index == 11) {
        m_subKey.setKeyValueStr(indexStr[m_index]);
        m_subKey.setText(m_text);
        m_text = m_subKey.getText();
    }
    else if (m_index == 15) {
        m_addKey.setKeyValueStr(indexStr[m_index]);
        m_addKey.setText(m_text);
        m_text = m_addKey.getText();
    }
    else if (m_index == 16) {
        m_doubleZero.setKeyValueStr(indexStr[m_index]);
        m_doubleZero.setText(m_text);
        m_text = m_doubleZero.getText();
    }
    else if (m_index == 18) {
        m_dotKey.setKeyValueStr(indexStr[m_index]);
        m_dotKey.setText(m_text);
        m_text = m_dotKey.getText();
    }
    else if ( m_index == 4 || m_index == 5 || m_index == 6 ||
              m_index == 8 || m_index == 9 || m_index == 10 ||
              m_index == 12 || m_index == 13 || m_index == 14 ||
              m_index == 17 ) {
        m_numKey.setKeyValueStr(indexStr[m_index]);
        m_numKey.setText(m_text);
        m_text = m_numKey.getText();
    }
}

void CInput::setText(QString text)
{
    m_text = text;
}

QString CInput::getText()
{
    return this->filterText(m_text);
}

QString CInput::filterText(QString text)
{
    return text;
}
