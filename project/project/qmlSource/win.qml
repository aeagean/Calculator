import QtQuick 2.5
import QtQuick.Window 2.2

Rectangle {
    visible: true
    width: 100; height: 100

    Text {
        text: "win"
    }

    MouseArea {
        anchors.fill: parent
        onClicked: winManager.gotoWin = "helpWin"
    }
}
