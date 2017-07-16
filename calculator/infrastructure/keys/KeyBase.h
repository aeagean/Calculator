#ifndef KEYBASE_H
#define KEYBASE_H

#include <QObject>

class KeyBase : public QObject
{
    Q_OBJECT
public:
    virtual void setKeyValueStr(QString keyValue) {
        m_keyValueStr = keyValue;
    }

    virtual QString getKeyValueStr() {
        return m_keyValueStr;
    }

    virtual void setKeyValueInt(int keyValue) {
        m_keyValueInt = keyValue;
    }

    virtual int getKeyValueInt() {
        return m_keyValueInt;
    }

    virtual void setText(QString text) {
        m_text = text;
    }

    virtual QString getText() {
        return m_text + m_keyValueStr;
    }

private:
    QString m_keyValueStr;
    int m_keyValueInt;
    QString m_text;
};

#endif // KEYBASE_H
