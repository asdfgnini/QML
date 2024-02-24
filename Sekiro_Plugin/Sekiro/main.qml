import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.15

import "./QML"
import "./QML/SekButton"
import "./QML/SekMisc"
import "./QML/SekImage"

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")



    Rectangle{
        x:100
        y:100
        width: 100
        height: 100
        color:"red"
        SekMoveArea{
            anchors.fill:parent
        }
        SekResizeBorder{
            anchors.fill: parent
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
        id:gradient_button
        anchors.left: red_button.right
        anchors.leftMargin: 20
        text: "点击"
    }

    SekButton_Image{
        id:image_button
        anchors.left: gradient_button.right
        anchors.leftMargin: 20
        tipText:"打印OK"
        btnImgUrl:"qrc:/Imgae/btn_close_hovered.png"
        onClicked: {
            console.log("OK")
        }
    }


    SekButton_ImageColorOverlay{
        id:imgaecolor
        anchors.left: image_button.right
        anchors.leftMargin: 20
        btnImgNormal:"qrc:/Imgae/btn_close_hovered.png"

    }

    SekTextButton{
        id:textbutton
        anchors.left: image_button.right
        anchors.leftMargin: 20
        text:"点击"
    }
}
