import QtQuick 2.5
import QtQuick.Window 2.2
import Calculator 1.0

Item {
    width: parent.width; height: 5*parent.height/6

    ListView {
        id: listview
        anchors.fill: parent
        verticalLayoutDirection: ListView.BottomToTop
        model: calculator.textList
        clip: true
        delegate: Item {
            id: itemId
            width: listview.width; height: index === 0 ? listview.height/3 : listview.height/3

            Text {
                id: textId
                anchors.right: parent.right
                anchors.verticalCenter: parent.verticalCenter
                text: modelData
                font.pixelSize: index === 0 ? (parent.width > parent.height ? parent.height : parent.width)/1.3:(parent.width > parent.height ? parent.height : parent.width)/2.5
                color: "white"
            }

            MouseArea {
                anchors.fill: parent
                drag.axis: Drag.XAxis
                drag.target: itemId
                drag.minimumX: 0
                drag.maximumX: parent.width

            }
        }
    }
}
