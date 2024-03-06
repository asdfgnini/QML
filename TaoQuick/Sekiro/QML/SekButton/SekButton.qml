import QtQuick 2.15

import QtQuick 2.9
import QtQuick.Controls 2.2

import "../SekMisc"
import "../"

Button {
    id: cusButton
    height: SekGlobalConfig.fixedHeight

    property alias tipText: toolTip.text
    property alias tipItem: toolTip
    property alias tipVisible: toolTip.visible
    property alias tipDelay: toolTip.delay
    property alias tipTimeout: toolTip.timeout
    property bool selected: false
    property color backgroundColorNormal: SekGlobalConfig.controlColor
    property color backgroundColorHovered: SekGlobalConfig.controlColor_hovered
    property color backgroundColorPressed: SekGlobalConfig.controlColor_pressed
    property color backgroundColorDisable: SekGlobalConfig.controlColor_disabled
    property color borderColor: {
        if (!cusButton.enabled) {
            return SekGlobalConfig.controlBorderColor_disabled
        } else if (cusButton.pressed || selected) {
            return SekGlobalConfig.controlBorderColor_pressed
        } else if (cusButton.hovered) {
            return SekGlobalConfig.controlBorderColor_hovered
        } else {
            return SekGlobalConfig.controlBorderColor
        }
    }

    property int borderWidth: 1
    property int radius: SekGlobalConfig.controlBorderRadius
    property color textColor: {
        if (!cusButton.enabled) {
            return SekGlobalConfig.textColor_disabled
        } else if (cusButton.pressed || selected) {
            return SekGlobalConfig.textColor_pressed
        } else if (cusButton.hovered) {
            return SekGlobalConfig.textColor_hovered
        } else {
            return SekGlobalConfig.textColor
        }
    }

    property color backgroundColor: {
        if (!cusButton.enabled) {
            return backgroundColorDisable
        } else if (cusButton.pressed || selected) {
            return backgroundColorPressed
        } else if (cusButton.hovered) {
            return backgroundColorHovered
        } else {
            return backgroundColorNormal
        }
    }

   SekTooltip {
        id: toolTip
        visible: cusButton.hovered && String(text).length
        delay: 500
    }
    contentItem: SekText {
        text: cusButton.text
        color: cusButton.textColor
    }
    background: Rectangle {
        radius: cusButton.radius
        color: cusButton.backgroundColor
        border.color: cusButton.borderColor
        border.width: cusButton.borderWidth
    }

    SekTransArea {

    }
}
