import QtQuick 2.15
import QtQuick.Controls 2.15


Rectangle {
    id:root
    signal clicked()
    color: "transparent"


    property alias textItem: t      //导出Text实例，方便外部直接修改
    property alias text: t.text     //导出文本
    property alias textColor: t.color   //导出文本颜色
    property alias containsMouse: area.containsMouse    //导出鼠标悬浮
    property alias containsPress: area.containsPress    //导出鼠标按下

    Text {
        id: t
        anchors.centerIn:parent
        verticalAlignment: Text.AlignVCenter
        horizontalAlignment: Text.AlignHCenter
        width:parent.width
    }

    MouseArea{
        id:area
        anchors.fill: parent
        hoverEnabled: parent.enabled
        onClicked: root.clicked()           //点击时触发自定义点击信号
        cursorShape: Qt.PointingHandCursor  //悬浮或点击时的鼠标样式
    }
}
