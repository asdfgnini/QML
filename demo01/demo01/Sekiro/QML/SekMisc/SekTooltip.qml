import QtQuick 2.15
import QtQuick.Controls 2.15
import "../"

ToolTip {
    id: sekTooltip

    contentItem: SekText {
        text: sekTooltip.text
    }

    background: Rectangle {
        color: SekGlobalConfig.tipBackgroundColor
        border.color: SekGlobalConfig.tipBorderColor
    }
}
