#ifndef CANALYSE_H
#define CANALYSE_H

#include <QStringList>

class CAnalyse
{
public:
    CAnalyse();
    CAnalyse(QString str);


    QStringList getStrList(QString str);

private:
    void filterStr(QString str);

private:
    QString m_str;
    QStringList m_strList;
};

#endif // CANALYSE_H
