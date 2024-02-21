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
        height: 100
        color:"steelblue"

        TMoveArea{
            control:parent
            anchors.fill: parent
        }

        TResizeBorder{
            control:parent
            x:parent.x
            y:parent.y
            width:parent.width
            height: parent.height
            anchors.fill:parent
        }
    }



}


