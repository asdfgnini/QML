import QtQuick 2.15
import QtQuick.Controls 2.15
import "../"

ToolTip {
    id: sekTooltip

    contentItem: SekText {
        text: sekTooltip.text
    }

    background: Rectangle {
        color: String(SekGlobalConfig.tipBackgroundColor)
        border.color: String(SekGlobalConfig.tipBorderColor)
    }
}
