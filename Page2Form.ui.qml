import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0

Item {
    property alias textField2: textField2
    property alias button2: button2
    property alias mouseArea2: mouseArea2
    property alias rectangle2: rectangle2

    RowLayout {
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.topMargin: 20
        anchors.top: parent.top

        TextField {
            id: textField2
            placeholderText: qsTr("Text Field")
        }

        Button {
            id: button2
            text: qsTr("Press Me 2")
        }
    }

    MouseArea {
        id: mouseArea2
        x: 32
        y: 74
        width: 575
        height: 368

        Rectangle {
            id: rectangle2
            x: 211
            y: 45
            width: 200
            height: 200
            color: "#093cec"
        }
    }
}
