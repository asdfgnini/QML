import QtQuick
import QtQuick.Controls
import QtQuick.Controls.Basic
import Sekiro

Button {
    property bool disabled: false
    property string contentDescription: ""
    property color normalColor: SekTheme.primaryColor
    property color hoverColor: SekTheme.dark ? Qt.darker(normalColor,1.1) : Qt.lighter(normalColor,1.1)
    property color disableColor: SekTheme.dark ? Qt.rgba(82/255,82/255,82/255,1) : Qt.rgba(199/255,199/255,199/255,1)
    property color pressedColor: SekTheme.dark ? Qt.darker(normalColor,1.2) : Qt.lighter(normalColor,1.2)
    property color textColor: {
        if(SekTheme.dark){
            if(!enabled){
                return Qt.rgba(173/255,173/255,173/255,1)
            }
            return Qt.rgba(0,0,0,1)
        }else{
            return Qt.rgba(1,1,1,1)
        }
    }
    Accessible.role: Accessible.Button
    Accessible.name: control.text
    Accessible.description: contentDescription
    Accessible.onPressAction: control.clicked()
    id: control
    enabled: !disabled
    focusPolicy:Qt.TabFocus
    font:SekTextStyle.Body
    verticalPadding: 0
    horizontalPadding:12
    background: Rectangle{
        implicitWidth: 28
        implicitHeight: 28
        radius: 4
        SekFocusRectangle{
            visible: control.visualFocus
            radius:4
        }
        color:{
            if(!enabled){
                return disableColor
            }
            if(pressed){
                return pressedColor
            }
            return hovered ? hoverColor :normalColor
        }
    }
    contentItem: SekText {
        text: control.text
        font: control.font
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
        color: control.textColor
    }
}
