import QtQuick 2.5
import QtQuick.Window 2.2
import Calculator 1.0

Item {
    width: parent.width; height: 5*parent.height/6
//    color: "lightblue"

//    Flickable {
//        width: parent.width-100; height: 100
//        contentWidth: 200
//        contentHeight: 100
//        Text {
//            text: "djfaklsjdflasjdfljadddddddddddsdlfjd"
//            font.pixelSize: 30
//        }
//    }
    Text {
        id: displayTextId
        anchors.fill: parent
        wrapMode: Text.Wrap
        font.pixelSize: parent.height/5
        color: "white"
        text: calculator.text
    }
}
