import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.15

import Sekiro 1.0


ApplicationWindow {
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

        SekMoveArea{
            control:parent
            anchors.fill: parent
        }

        SekResizeBorder{
            control:parent
            x:parent.x
            y:parent.y
            width:parent.width
            height: parent.height
            anchors.fill:parent
        }
    }

    SekButton_blue{
        text: "点击"
        tipText: "打印OK"

        anchors.centerIn: parent
        onClicked: {
            console.log("OK")
        }
    }

    SekButton_red{
        id:red_button
        text: "点击"
        tipText: "打印OK"

        onClicked: {
            console.log("OK")
        }
    }
    SekButton_gradient{
        anchors.left: red_button.right
        anchors.leftMargin: 20
        text: "点击"

    }

    function get()
    {
        var xhr = new XMLHttpRequest();

    }


}


