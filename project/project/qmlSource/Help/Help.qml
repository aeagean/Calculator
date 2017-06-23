import QtQuick 2.5
import QtQuick.Window 2.2

Rectangle {
    visible: true
//    x: 100
    width: 400; height: 400
    color: "red"

    Text {
        text: "help" + winManager.index
    }
}
