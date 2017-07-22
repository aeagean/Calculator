#include "CHandle.h"
#include <QDebug>

CHandle::CHandle()
{

}

QString CHandle::getStrValue(QStringList strList)
{
    QString strValue = "";
    if (!strList.isEmpty()) {
        strList = this->mulAndDivOperation(strList);
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

QStringList CHandle::mulAndDivOperation(QStringList strList)
{
    int index = -1;
    double leftValue;
    double rightValue;
    double value;

    while ((index = strList.indexOf(QRegExp("[÷]|[×]"))) != -1) {
        leftValue = strList.at(index-1).toDouble();
        rightValue = strList.at(index+1).toDouble();

        if (strList.at(index) == "×") {
            value = leftValue * rightValue;
        }
        else {
            value = leftValue / rightValue;
        }
        strList.replace(index, QString::number(value));
        strList.removeAt(index-1);
        strList.removeAt(index);
    }
    return strList;
}
