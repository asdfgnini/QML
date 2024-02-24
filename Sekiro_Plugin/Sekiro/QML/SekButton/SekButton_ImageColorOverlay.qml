import QtQml 2.0
import QtQuick 2.15
import QtQuick.Controls 2.15
import QtGraphicalEffects 1.0
import "../SekMisc"
import "../SekImage"
import "../"
Button {
    id: cusButtonImage
    implicitWidth: 30
    implicitHeight: 30
    property alias tipText: toolTip.text
    property alias tipItem: toolTip
    property alias tipVisible: toolTip.visible
    property alias tipDelay: toolTip.delay
    property alias tipTimeout: toolTip.timeout

    property string btnImgNormal
    property string btnImgHovered
    property string btnImgPressed
    property string btnImgDisbaled
    property bool selected: false
    property color colorNormal: SekGlobalConfig.imageColor
    property color colorHovered: SekGlobalConfig.imageColor_hovered
    property color colorPressed: SekGlobalConfig.imageColor_pressed
    property color colorDisable: SekGlobalConfig.imageColor_disabled

    property color backgroundColor: "transparent"
    SekImage {
        id: baseImage
        source: btnImgNormal
        smooth: true
        visible: false
    }
    background: Rectangle {
        width: cusButtonImage.width
        height: cusButtonImage.height
        radius: SekGlobalConfig.controlBorderRadius
        color: backgroundColor
        ColorOverlay {
            source: baseImage
            width: baseImage.width
            height: baseImage.height
            anchors.centerIn: parent
            cached: true
            color: {
                if (!cusButtonImage.enabled) {
                    return colorDisable
                } else if (cusButtonImage.pressed || selected) {
                    return colorPressed
                } else if (cusButtonImage.hovered) {
                    return colorHovered
                } else {
                    return colorNormal
                }
            }
        }
    }

    SekTooltip {
        id: toolTip
        visible: cusButtonImage.hovered && String(text).length
        delay: 500
    }
    SekTransArea {

    }
}
