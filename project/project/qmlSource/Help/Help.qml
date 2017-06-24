import QtQuick 2.5
import QtQuick.Window 2.2

Rectangle {
    visible: true
//    x: 100
    width: 400; height: 1400
    color: "red"

    Text {
        id: textId
        text: "help" + winManager.index
    }

    MouseArea {
        anchors.fill: parent
        onClicked: {
            textId.text = winManager.index + ">>>"
            winManager.index++
            winManager.gotoWin = "win"
        }
    }
}
