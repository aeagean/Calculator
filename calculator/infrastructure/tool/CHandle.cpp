#include "CHandle.h"
#include <QDebug>

CHandle::CHandle()
{

}

QString CHandle::getStrValue(QStringList strList)
{
    QString strValue = "";
    if (!strList.isEmpty()) {
        double value = strList.at(0).toDouble();
        for (int i = 1; i < strList.count(); i+=2) {
            if (strList.at(i) == "+") {
                if ((i+1) <= strList.count())
                    value += strList.at(i+1).toDouble();
            }
            else if (strList.at(i) == "-") {
                if ((i+1) <= strList.count())
                    value -= strList.at(i+1).toDouble();
            }
            else if (strList.at(i) == "÷") {
                if ((i+1) <= strList.count())
                    value /= strList.at(i+1).toDouble();
            }
            else if (strList.at(i) == "×") {
                if ((i+1) <= strList.count())
                    value *= strList.at(i+1).toDouble();
            }
        }

        return QString::number(value, 'g', 15);
    }
    return "";
}
