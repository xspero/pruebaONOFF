import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0

Item {
    property alias textField1: textField1
    property alias button1: button1
    property alias mouseArea1: mouseArea1
    property alias rectangle1: rectangle1
    property alias button: button
    property alias mouseArea2: mouseArea2

    RowLayout {
        x: 256
        y: 26


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
        width: 361
        height: 368

        Text {
            id: text1
            x: 80
            y: 151
            width: 58
            height: 27
            text: qsTr("Apagar")
            font.pixelSize: 12
        }

    }


    MouseArea {
        id: mouseArea2
        x: 399
        y: 80
        width: 369
        height: 362

        Text {
            id: text2
            x: 173
            y: 144
            text: qsTr("Encender")
            font.pixelSize: 12
        }
    }
    Button {
        id: button
        x: 543
        y: 20
        text: qsTr("Exit")
    }

    Rectangle {
        id: rectangle1
        x: 300
        y: 272
        width: 200
        height: 200
        color: "#db1b1b"
    }
}
