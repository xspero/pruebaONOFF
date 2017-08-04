import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0

Item {
    property alias textField1: textField1
    property alias button1: button1
    property alias mouseArea1: mouseArea1
    property alias rectangle1: rectangle1
    property alias button: button

    RowLayout {
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.topMargin: 20
        anchors.top: parent.top

        TextField {
            id: textField1
            placeholderText: qsTr("Text Field")
        }

        Button {
            id: button1
            text: qsTr("Press Me 1")
        }
    }

    MouseArea {
        id: mouseArea1
        x: 32
        y: 74
        width: 575
        height: 368

        Rectangle {
            id: rectangle1
            x: 188
            y: 68
            width: 200
            height: 200
            color: "#db1b1b"
        }
    }

    Button {
        id: button
        x: 470
        y: 15
        text: qsTr("Exit")
    }
}
