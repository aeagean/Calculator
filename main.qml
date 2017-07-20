import QtQuick 2.5
import QtQuick.Window 2.2
import Calculator 1.0
import "./qml/UpperHalf"
import "./qml/LowerHalf"

Window {
    width: 1080*priveteValue.scale
    height: 1920*priveteValue.scale
    title: ""
    color: "#0c1019"
    visible: true

    Column {
        anchors.fill: parent

        UpperHalf {
            model: calculator
        }

        LowerHalf {
            model: calculator
        }
    }

    //------------------------------------------------data

    Item {
        id: priveteValue
        property var scale: 0.3
    }

    Calculator {
        id: calculator
    }
}
