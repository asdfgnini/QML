import QtQuick 2.15

import QtQuick 2.9
import QtQuick.Controls 2.2

import "../SekMisc"
import "../"

Button {
    id: sekButton
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
        if (!sekButton.enabled) {
            return SekGlobalConfig.controlBorderColor_disabled
        } else if (sekButton.pressed || selected) {
            return SekGlobalConfig.controlBorderColor_pressed
        } else if (sekButton.hovered) {
            return SekGlobalConfig.controlBorderColor_hovered
        } else {
            return SekGlobalConfig.controlBorderColor
        }
    }

    property int borderWidth: 1
    property int radius: SekGlobalConfig.controlBorderRadius
    property color textColor: {
        if (!sekButton.enabled) {
            return SekGlobalConfig.textColor_disabled
        } else if (sekButton.pressed || selected) {
            return SekGlobalConfig.textColor_pressed
        } else if (sekButton.hovered) {
            return SekGlobalConfig.textColor_hovered
        } else {
            return SekGlobalConfig.textColor
        }
    }

    property color backgroundColor: {
        if (!sekButton.enabled) {
            return backgroundColorDisable
        } else if (sekButton.pressed || selected) {
            return backgroundColorPressed
        } else if (sekButton.hovered) {
            return backgroundColorHovered
        } else {
            return backgroundColorNormal
        }
    }

    SekTooltip {
        id: toolTip
        visible: sekButton.hovered && String(text).length
        delay: 200
    }
    contentItem: SekText {
        text: sekButton.text
        color: sekButton.textColor
    }
    background: Rectangle {
        radius: sekButton.radius
        color: sekButton.backgroundColor
        border.color: sekButton.borderColor
        border.width: sekButton.borderWidth
    }

    SekTransArea {

    }
}
