import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.15

import Sekiro 1.0

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Rectangle{
        x:100
        y:100
        width:100
        height:100
        color:"red"

        TMoveArea{
            anchors.fill:parent

        }
    }

}
