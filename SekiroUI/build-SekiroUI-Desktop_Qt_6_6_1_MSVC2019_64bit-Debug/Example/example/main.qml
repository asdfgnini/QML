import QtQuick

import Sekiro

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    // Timer{
    //     id:timer_progress
    //     interval: 200
    //     onTriggered: {
    //         btn_progress.progress = (btn_progress.progress + 0.1).toFixed(1)
    //         if(btn_progress.progress==1){
    //             timer_progress.stop()
    //         }else{
    //             timer_progress.start()
    //         }
    //     }
    // }

    // SekProgressButton{
    //     id:btn_progress
    //     text:"Progress Button"
    //     anchors{
    //         verticalCenter: parent.verticalCenter
    //         left: parent.left
    //     }
    //     onClicked: {
    //         btn_progress.progress = 0
    //         timer_progress.restart()
    //     }
    // }

    // SekLoadingButton{
    //     id:btn_loading
    //     loading:true
    //     text:"Loading Button"
    //     anchors{
    //         verticalCenter: parent.verticalCenter
    //         left: parent.left
    //     }
    //     onClicked: {

    //     }
    // }



}
