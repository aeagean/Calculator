#ifndef _CALCULATOR_H
#define _CALCULATOR_H

#include "CInput.h"
#include "CAnalyse.h"
#include "CHandle.h"
#include <QStringList>
#include <QObject>

class Calculator : public QObject
{
    Q_OBJECT
public:
    Calculator();
    Q_PROPERTY(int index READ getIndex WRITE setIndex NOTIFY indexChanged)
    Q_PROPERTY(QString text READ getText NOTIFY statusChanged)
    Q_PROPERTY(QString value READ getValue NOTIFY valueChanged)
    Q_PROPERTY(QStringList textList READ getTextList /*WRITE setTextList */NOTIFY statusChanged)

    int getIndex();
    void setIndex(int index);

    QString getText();

    QString getValue();
    void setValue(QString value);

    QStringList getTextList();
    void setTextList(QStringList strList);

signals:
    void indexChanged();
    void statusChanged();
    void valueChanged();

private slots:
    void setText();

private:
    int m_index;
    QString m_text;
    QString m_value;
    QStringList m_textList;
    CInput m_cInput;
    CAnalyse m_cAnalyse;
    CHandle m_cHandle;
};

#endif
