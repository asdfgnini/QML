import QtQuick
import QtQuick.Layouts
import QtQuick.Controls
import QtQuick.Controls.Material
import Sekiro 1.0


Window {
    width: 640
    height: 400
    visible: true
    title: qsTr("Example Project")

    // SekiroControls {
    //     id: controls
    //     anchors.left: parent.left
    //     anchors.top: parent.top
    //     anchors.margins: 20
    //     width: 100
    //     height: 100
    // }
    // Sekiro {
    //     id: rect
    //     anchors.left: controls.right
    //     anchors.top: parent.top
    //     anchors.margins: 20
    //     width: 100
    //     height: 100
    //     MouseArea{
    //         anchors.fill: parent
    //         onClicked: {
    //             console.log("点击")
    //         }
    //     }
    // }


   SekiroButton{
        text:"Standard Button"
        onClicked: {
            console.log("点击")
        }
    }
}