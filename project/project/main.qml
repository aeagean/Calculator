import QtQuick 2.5
import QtQuick.Window 2.2

Rectangle {
    visible: true
    width: Screen.width - 500; height: Screen.height - 500
    color: "lightblue"

    Text {
        id: textId
        anchors.centerIn: parent
        text: "ok" + String(Screen.width)
    }

    MouseArea {
        anchors.fill: parent
        onClicked: Qt.quit()
    }

    Rectangle {
        visible: true
        y: 550
        width: 150; height: 150
        color: "green"
        MouseArea {
            anchors.fill: parent
            onClicked: {
                textId.text = "-------"
                winManager.gotoWin = "win"
                winManager.index--
            }
        }
    }

    Rectangle {
        visible: true
        x: 550; y: 250
        width: 150; height: 150
        color: "blue"
        MouseArea {
            anchors.fill: parent
            onClicked: {
                textId.text = ">>>>"
                winManager.gotoWin = "helpWin"
                winManager.index++
            }
        }
    }
}
