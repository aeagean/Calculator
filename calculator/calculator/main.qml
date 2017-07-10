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

    Text {
        id: displayTextId
        font.pixelSize: 25
    }

    Rectangle {
        anchors.bottom: parent.bottom
        width: parent.width; height: 0.618*parent.height
        color: "#0d141c"

        Item {
            width: parent.width*(1-0.10); height: parent.height*(1-0.061)
            anchors.centerIn: parent

            GridView {
                id: gridView
                anchors.fill: parent
                interactive: false
                cellWidth: parent.width/4; cellHeight: parent.height/5
                preferredHighlightBegin: 0.5
                preferredHighlightEnd: 0.5
                highlightRangeMode: PathView.StrictlyEnforceRange
                model: ["C", "←", "%", "÷",
                        "7", "8", "9", "×",
                        "4", "5", "6", "-",
                        "1", "2", "3", "+",
                       "00", "0", ".", "="]
                delegate:
                    Item {
                        width: gridView.cellWidth; height: gridView.cellHeight

                        Item {
                        width: gridView.cellWidth - 10; height: gridView.cellHeight - 10
                        anchors.centerIn: parent

                        Rectangle {
                            anchors.centerIn: parent
                            width: parent.height; height: parent.height
                            radius: width/2
                            color: getColor(index)
                        }

                        Rectangle {
                            id: backgroupRect
                            anchors.centerIn: parent
                            width: parent.height; height: parent.height
                            radius: width/2
                            color: "#00000000"
                        }

                        Text {
                            id: textId
                            text: modelData
                            anchors.centerIn: parent
                            font.pixelSize: 25
                            font.bold: true
                            color: "white"
                        }

                        MouseArea {
                            anchors.fill: parent
                            onPressed: {
                                backgroupRect.color = getColorBackgroup(index)
                                textId.opacity = 0.8
                            }
                            onReleased: {
                                backgroupRect.color = "#00000000"
                                textId.opacity = 1
                            }
                            onClicked: {
                                displayTextId.text = displayTextId.text + modelData
                            }
                        }
                    }
                }
            }
        }
    }

    function getColor(index) {
        if ((index - 3)%4 === 0 && index !== 19) {
            return "#161a23";
        }
        else if (index === 19) {
            return "red"
        }
        else {
            return "#00000000"
        }
    }

    function getColorBackgroup(index) {
        if ((index - 3)%4 === 0) {
            return "#00000000"
        }
        else {
            return "#161a23"
        }
    }
}
