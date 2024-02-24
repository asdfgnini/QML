import QtQuick 2.15
import "../SekMisc"

SekButton {
    id: sekButton
    background: Rectangle {
        radius: sekButton.radius
        color: sekButton.backgroundColor
        border.color: sekButton.borderColor
        border.width: sekButton.borderWidth
        clip: true
        Rectangle {
            id: pressRect
            radius: 0
            smooth: true
            property int startX: sekButton.width / 2
            property int startY: sekButton.height / 2
            x: startX - radius
            y: startY - radius
            width: radius * 2
            height: radius * 2
            visible: radius > 0
            color: backgroundColorPressed

            SequentialAnimation {
                id: pressAnimation
                NumberAnimation {
                    target: pressRect
                    property: "radius"
                    from: 0
                    to: Math.max(pressRect.startX,
                                 sekButton.width - pressRect.startX)
                    duration: 500
                }
                ScriptAction {
                    script: {
                        pressRect.radius = 0
                    }
                }
            }
        }
    }

    SekTransArea {
        anchors.fill: parent
        onPressed: {
            pressRect.startX = mouseX
            pressRect.startY = mouseY
            pressAnimation.start()
        }
    }
}
