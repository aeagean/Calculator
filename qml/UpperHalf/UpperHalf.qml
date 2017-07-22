import QtQuick 2.5
import QtQuick.Window 2.2
import Calculator 1.0
import "./content/TopTitle"
import "./content/Display"

Item {
    property variant model
    width: parent.width; height: (1-0.618)*parent.height

    Column {
        anchors.fill: parent

        TopTitle {
            width: parent.width; height: parent.height/6
        }

        Display {
            width: parent.width; height: 5*parent.height/6
        }

    }
}
