import QtQuick 2.7

Page1Form {
    mouseArea1.onClicked: {
        //comando al clicar la 1era pagina
        rectangle1.visible=false;
        ScriptLauncher.apagarPantalla();






}
    button1.onClicked: {
        console.log("Button Pressed. Entered text: " + textField1.text);
        rectangle1.visible=true;
    }
}
