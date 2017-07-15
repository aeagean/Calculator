import QtQuick 2.5
import QtQuick.Window 2.2
import Calculator 1.0

Item {
    property variant model
   width: parent.width; height: (1-0.618)*parent.height

   Text {
       id: displayTextId
       anchors.fill: parent
       wrapMode: Text.Wrap
       font.pixelSize: parent.width/10
       color: "white"
       text: calculator.text
   }
}
