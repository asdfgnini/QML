import QtQuick 2.15
import QtQuick.Controls 2.15


// Item {
//     width: 800
//     height: 600

//     Rectangle {
//         id: moveItem

//         //注意拖动目标不要使用锚布局或者Layout，而是使用相对坐标
//         x: 100
//         y: 100
//         width: 300
//         height: 200

//         color: "lightblue"
//         MouseArea {
//             anchors.fill: parent
//             property real lastX: 0
//             property real lastY: 0
//             onPressed: {
//                 //鼠标按下时，记录鼠标初始位置
//                 lastX = mouseX
//                 lastY = mouseY
//             }
//             onPositionChanged: {
//                 if (pressed) {
//                     //鼠标按住的前提下，坐标改变时，计算偏移量，应用到目标item的坐标上即可
//                     moveItem.x += mouseX - lastX
//                     moveItem.y += mouseY - lastY
//                 }
//             }
//         }
//     }
// }



MouseArea {
    id:root

    property real lastX: 0
    property real lastY: 0
    property bool mask: false  //有时候外面需要屏蔽拖动，导出一个mask属性， 默认false。
    property var control: parent  //导出一个control属性，指定要拖动的目标， 默认就用parent好了。注意目标要有x和y属性并且可修改

    onPressed: {
        lastX = mouseX
        lastY = mouseY
    }

    onContainsMouseChanged: {
       if(containsMouse)
       {
           cursorShape = Qt.SizeAllCursor
       }
       else
       {
           cursorShape = Qt.ArrowCursor
       }
    }

    onPositionChanged: {
        if(!mask && pressed && control)
        {
            control.x += mouseX - lastX
            control.y += mouseY - lastY
        }
    }
}
