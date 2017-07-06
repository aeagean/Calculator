import QtQuick 2.5
import QtQuick.Window 2.2

Window {
    width: 1080*priveteValue.scale
    height: 1920*priveteValue.scale
    title: ""
    color: "#0c1019"
    visible: true

    Item {
        id: priveteValue
        property var scale: 0.3
    }

    Rectangle {
        anchors.bottom: parent.bottom
        width: parent.width; height: 0.618*parent.height
        color: "#0d141c"

        GridView {
            id: gridView
            width: parent.width; height: 0.618*parent.height

        }
    }

}
