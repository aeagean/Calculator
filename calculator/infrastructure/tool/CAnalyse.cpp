#include "CAnalyse.h"
#include <QDebug>

CAnalyse::CAnalyse()
{

}

CAnalyse::CAnalyse(QString str)
{
    m_str = str;
}

QStringList CAnalyse::getStrList(QString str)
{
    m_str = str;
    this->filterStr(m_str);
    return m_strList;
}

void CAnalyse::filterStr(QString str)
{
    m_strList.clear();
    int i = 0;
//    str = "-111%+22%"; //test
    while ((i = str.indexOf(QRegExp("[+]|[-]|[÷]|[×]"))) != -1) {
        QString lstr = str.left(i+1);
        str = str.right(str.count() - i-1);
        if (!lstr.left(i).isEmpty())
            m_strList.append(lstr.left(i));
        if (!lstr.right(1).isEmpty())
            m_strList.append(lstr.right(1));
    }

    if (!str.isEmpty()) {
        m_strList.append(str);
    }

    if (!m_strList.isEmpty()) {
        if (m_strList.last().indexOf(QRegExp("[+]|[×]|[÷]")) != -1) { //no [-]
            m_strList.removeLast();
        }
    }

    if (m_strList.count() >= 2) {
        if (m_strList.at(0) == "-") {
            m_strList.replace(0, m_strList.at(0) + m_strList.at(1));
            m_strList.removeAt(1);
        }
    }

    for (int i = 0; i < m_strList.count(); i++) {
        int j = m_strList.at(i).indexOf("%");
        if (j != -1) {
            QString str = m_strList.at(i).left(j);
            m_strList.replace(i, str);
            m_strList.insert(i+1, "×");
            m_strList.insert(i+2, "0.01");
        }
    }

    qDebug()<<m_strList;
}
