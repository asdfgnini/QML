import QtQuick

import Sekiro

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Timer{
        id:timer_progress
        interval: 200
        onTriggered: {
            btn_progress.progress = (btn_progress.progress + 0.1).toFixed(1)
            if(btn_progress.progress==1){
                timer_progress.stop()
            }else{
                timer_progress.start()
            }
        }
    }

    SekProgressButton{
        id:btn_progress
        text:"Progress Button"
        anchors{
            verticalCenter: parent.verticalCenter
            left: parent.left
        }
        onClicked: {
            btn_progress.progress = 0
            timer_progress.restart()
        }
    }

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

    // SekDropDownButton{
    //     id:btn_Downbutton
    //     text:"DropDownButton"
    //     anchors{
    //         verticalCenter: parent.verticalCenter
    //         left: parent.left
    //     }
    //     SekMenuItem{
    //         text:"Menu_1"
    //     }
    //     SekMenuItem{
    //         text:"Menu_2"
    //     }
    //     SekMenuItem{
    //         text:"Menu_3"
    //     }
    //     SekMenuItem{
    //         id:four
    //         text:"Menu_4"
    //         onClicked: {
    //             btn_Downbutton.text = four.text
    //         }
    //     }
    // }

    // SekRadioButtons{
    //     spacing: 8
    //     anchors{
    //         verticalCenter: parent.verticalCenter
    //         left: parent.left
    //     }
    //     SekRadioButton{

    //         text:"Radio Button_1"
    //     }
    //     SekRadioButton{

    //         text:"Radio Button_2"
    //     }
    //     SekRadioButton{

    //         text:"Radio Button_3"
    //     }
    // }

    // TextBoxViewModel{

    //     id:viewModel
    // }

    // SekTextBox{
    //     placeholderText: "单行输入框"
    //     cleanEnabled: true
    //     // text:viewModel.text1
    //     onTextChanged: {
    //         // viewModel.text1 = text
    //     }
    //     anchors{
    //         verticalCenter: parent.verticalCenter
    //         left: parent.left
    //     }
    // }


    // SekPasswordBox{
    //     placeholderText: "请输入密码"
    //     anchors{
    //         verticalCenter: parent.verticalCenter
    //         left: parent.left
    //     }
    // }

    // SekMultilineTextBox{
    //     id:multiine_textbox
    //     placeholderText: "多行输入框"
    //     // text:viewModel.text2
    //     onTextChanged: {
    //         // viewModel.text2 = text
    //     }
    //     // disabled:text_box_multi_switch.checked
    //     anchors{
    //         verticalCenter: parent.verticalCenter
    //         left: parent.left
    //     }
    // }

    // SekAutoSuggestBox{
    //     placeholderText: "AutoSuggestBox"
    //     items:generateRandomNames(100)
    //     // disabled:text_box_suggest_switch.checked
    //     anchors{
    //         verticalCenter: parent.verticalCenter
    //         left: parent.left
    //     }
    // }

    // function generateRandomNames(numNames) {
    //     const alphabet = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ';
    //     const names = [];
    //     function generateRandomName() {
    //         const nameLength = Math.floor(Math.random() * 5) + 4;
    //         let name = '';
    //         for (let i = 0; i < nameLength; i++) {
    //             const letterIndex = Math.floor(Math.random() * 26);
    //             name += alphabet.charAt(letterIndex);
    //         }
    //         return name;
    //     }
    //     for (let i = 0; i < numNames; i++) {
    //         const name = generateRandomName();
    //         names.push({title:name});
    //     }
    //     return names;
    // }

    // SekSpinBox{
    //     // disabled: spin_box_switch.checked
    //     anchors{
    //         verticalCenter: parent.verticalCenter
    //         left: parent.left
    //     }
    // }

    // SekToggleSwitch{
    //     // disabled: toggle_switch.checked
    //     text:"Left"
    //     textRight: false
    // }


}
