import QtQuick
import QtQuick.Layouts
import QtQuick.Controls
import QtQuick.Controls.Material
import Sekiro

Window {
    width: 800
    height: 600
    visible: true
    title: qsTr("Example Project")

    // //SekProgressButton
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
    //     onClicked: {
    //         btn_progress.progress = 0
    //         timer_progress.restart()
    //     }
    // }

    // //SekToggleButton
    // SekToggleButton{
    //     id:btn_toggle
    //     text:"Toggle Button"
    //     anchors{
    //         left: btn_progress.right
    //         leftMargin: 20
    //     }
    // }
    // //SekiroButton
    // SekiroButton{
    //     id:btn_standard
    //     text:"Standard Button"
    //     anchors{
    //         left: btn_toggle.right
    //         leftMargin: 20
    //     }
    // }
    // //SekTextButton
    // SekTextButton{
    //     id:btn_textbutton
    //     text:"Text Button"
    //     anchors{
    //         left: btn_standard.right
    //         leftMargin: 20
    //     }
    //     onClicked: {

    //     }
    // }
    // //SekLoadingButton
    // SekLoadingButton{
    //     id:btn_loading
    //     loading:true
    //     text:"Loading Button"
    //     anchors{
    //         left: btn_textbutton.right
    //         leftMargin: 20
    //     }
    //     onClicked: {

    //     }
    // }

    SekIconButton{
        id:btn_Iconbutton
        iconSource:SekentIcons.ChromeCloseContrast
        iconSize: 15
        text:"TextUnderIcon"
        display: Button.TextUnderIcon
        onClicked:{
            // showSuccess("Button.TextOnly")
        }


    }




}
