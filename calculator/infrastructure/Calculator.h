#ifndef _CALCULATOR_H
#define _CALCULATOR_H

#include "CInput.h"
#include "CAnalyse.h"
#include "CHandle.h"
#include <QString>
#include <QObject>

class Calculator : public QObject
{
    Q_OBJECT
public:
    Calculator();
    Q_PROPERTY(int index READ getIndex WRITE setIndex NOTIFY indexChanged)
    Q_PROPERTY(QString text READ getText NOTIFY statusChanged)
    Q_PROPERTY(QString value READ getValue NOTIFY valueChanged)

    int getIndex();
    void setIndex(int index);

    QString getText();

    QString getValue();
    void setValue(QString value);

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
    CInput m_cInput;
    CAnalyse m_cAnalyse;
    CHandle m_cHandle;
};

#endif
