import QtQuick 2.5
import QtQuick.Window 2.2
import QtQuick.Controls 1.4
import Qt.labs.controls 1.0

Window {
    title: "StackViewDemo";
    flags: Qt.FramelessWindowHint
    width: Screen.width; height: Screen.height
    visible: true;

    StackView {
        id: stack;
        anchors.centerIn: parent;
        anchors.fill: parent
        property var home: null;

        Text {
            text: "Click to create first page";
            font.pointSize: 14;
            font.bold: true;
            color: "blue";
            anchors.centerIn: parent;
            MouseArea {
                anchors.fill: parent;
                onClicked: if(stack.depth === 0)stack.push(page);
            }
        }
    }

    Component {
        id: page;

        Rectangle {
            width: Screen.desktopAvailableWidth; height: Screen.desktopAvailableHeight
            color: Qt.rgba(stack.depth*0.1, stack.depth*0.2, stack.depth*0.3);

            Text {
                anchors.centerIn: parent;
                text: "depth - " + stack.depth;
                font.pointSize: 24;
                font.bold: true;
                color: stack.depth <= 4 ? Qt.lighter(parent.color) : Qt.darker(parent.color);
            }

            Rectangle {
                id: next;
                anchors.right: parent.right;
                anchors.bottom: parent.bottom;
                anchors.margins: 8;
                width: 140;
                height: 70;
                MouseArea {
                    anchors.fill: parent
                    onClicked: {
                        if(stack.depth < 8) stack.push(page);
                    }
                }
            }

            Rectangle {
                id: back;
                anchors.right: next.left;
                anchors.top: next.top;
                anchors.rightMargin: 8;
                width: 140;
                height: 70;
                MouseArea {
                    anchors.fill: parent
                    onClicked: {
                        if(stack.depth > 0) stack.pop();
                    }
                }
            }

            Rectangle {
                id: home;
                anchors.right: back.left;
                anchors.top: next.top;
                anchors.rightMargin: 8;

                width: 140;
                height: 70;
                MouseArea {
                    anchors.fill: parent
                    onClicked: {
                        if(stack.depth > 0)stack.pop(stack.initialItem);
                    }
                }
            }

            Rectangle {
                id: clear;
                anchors.right: home.left;
                anchors.top: next.top;
                anchors.rightMargin: 8;
                width: 140;
                height: 70;

                MouseArea {
                    anchors.fill: parent
                    onClicked: {
                        if(stack.depth > 0)stack.clear();
                    }
                }

            }
        }
    }
}
