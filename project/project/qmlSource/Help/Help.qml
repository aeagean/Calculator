import QtQuick 2.5
import QtQuick.Window 2.2

Rectangle {
    visible: true
//    x: 100
    width: 100; height: 100
    color: "red"

    Text {
        text: "help" + winManager.index
    }
}
