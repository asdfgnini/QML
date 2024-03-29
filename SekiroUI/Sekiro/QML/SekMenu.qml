import QtQuick
import QtQuick.Controls
import QtQuick.Controls.impl
import QtQuick.Templates as T
import Sekiro

T.Menu {
    property bool enableAnimation: true
    id: control
    implicitWidth: Math.max(implicitBackgroundWidth + leftInset + rightInset,
                            contentWidth + leftPadding + rightPadding)
    implicitHeight: Math.max(implicitBackgroundHeight + topInset + bottomInset,
                             contentHeight + topPadding + bottomPadding)
    margins: 0
    overlap: 1
    spacing: 0
    delegate: SekMenuItem { }
    enter: Transition {
        NumberAnimation {
            property: "opacity"
            from:0
            to:1
            duration: SekTheme.enableAnimation && control.enableAnimation ? 83 : 0
        }
    }
    exit:Transition {
        NumberAnimation {
            property: "opacity"
            from:1
            to:0
            duration: SekTheme.enableAnimation && control.enableAnimation ? 83 : 0
        }
    }
    contentItem: ListView {
        implicitHeight: contentHeight
        model: control.contentModel
        interactive: Window.window
                     ? contentHeight + control.topPadding + control.bottomPadding > Window.window.height
                     : false
        clip: true
        currentIndex: control.currentIndex
        ScrollIndicator.vertical: ScrollIndicator {}
    }
    background: Rectangle {
        implicitWidth: 150
        implicitHeight: 36
        color:SekTheme.dark ? Qt.rgba(45/255,45/255,45/255,1) : Qt.rgba(240/255,240/255,240/255,1)
        border.color: SekTheme.dark ? Window.active ? Qt.rgba(55/255,55/255,55/255,1):Qt.rgba(45/255,45/255,45/255,1) : Qt.rgba(226/255,229/255,234/255,1)
        border.width: 1
        radius: 5
        SekShadow{}
    }
    T.Overlay.modal: Rectangle {
        color: Color.transparent(control.palette.shadow, 0.5)
    }
    T.Overlay.modeless: Rectangle {
        color: Color.transparent(control.palette.shadow, 0.12)
    }
}
