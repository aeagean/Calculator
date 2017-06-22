import QtQuick 2.5
import QtQuick.Window 2.2

Rectangle {
    visible: true
    width: Screen.width; height: Screen.height
    color: "lightblue"

    Text {
        anchors.centerIn: parent
        text: "ok" + String(Screen.width)
    }

    MouseArea {
        anchors.fill: parent
        onClicked: Qt.quit()
    }

    Rectangle {
        visible: true
        y: 250
        width: 50; height: 50
        color: "green"
        MouseArea {
            anchors.fill: parent
            onClicked: winManager.index--
        }
    }

    Rectangle {
        visible: true
        x: 50; y: 250
        width: 50; height: 50
        color: "blue"
        MouseArea {
            anchors.fill: parent
            onClicked: winManager.index++
        }
    }
}
