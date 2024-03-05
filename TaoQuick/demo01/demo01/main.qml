import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.15
import TaoQuick 1.0


Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    CusButton_Blue{
        text: "点击"
    }

    MoveArea{

    }

}
