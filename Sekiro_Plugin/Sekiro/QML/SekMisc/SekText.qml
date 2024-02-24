import QtQuick 2.15
import "../"

Text {
    verticalAlignment: Text.AlignVCenter
    horizontalAlignment: Text.AlignHCenter
    font.family: SekGlobalConfig.fontFamily
    font.pixelSize: SekGlobalConfig.fontPixel
    elide: Text.ElideRight
    color: String(SekGlobalConfig.textColor)
}
