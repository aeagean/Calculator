import QtQuick 2.5
import QtQuick.Window 2.2
import Calculator 1.0

Row {
    id: rowId
    width: parent.width; height: parent.height/6

//    Item {
//        width: parent.width/8; height: parent.height

//        Column {
//            anchors.centerIn: parent
//            spacing: (rowId.height > rowId.width ? rowId.width : rowId.height)/15

//            Rectangle {
//                width: (rowId.height > rowId.width ? rowId.width : rowId.height)/6; height: width
//                radius: width/2
//                color: "white"
//            }
//            Rectangle {
//                width: (rowId.height > rowId.width ? rowId.width : rowId.height)/6; height: width
//                radius: width/2
//                color: "white"
//            }
//            Rectangle {
//                width: (rowId.height > rowId.width ? rowId.width : rowId.height)/6; height: width
//                radius: width/2
//                color: "white"
//            }
//        }
//    }

    Item {
        width: textId.width + parent.width/12; height: parent.height

        Text {
            id: textId
            anchors.verticalCenter: parent.verticalCenter
            anchors.horizontalCenter: parent.horizontalCenter
            text: "计算器"
            font.pixelSize: (rowId.height > rowId.width ? rowId.width : rowId.height)/2
            color: "red"
        }
    }
}
