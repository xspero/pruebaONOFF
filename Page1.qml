import QtQuick 2.7

Page1Form {
    button.onClicked: {
        Qt.quit()
}
    mouseArea1.onClicked: {
        //comando al clicar la 1era pagina
        rectangle1.visible=false;
        ScriptLauncher.apagarPantalla();
        console.log("pantalla apagada");






}
    button1.onClicked: {
        console.log("Button Pressed. Entered text: " + textField1.text);
        rectangle1.visible=true;

    }
}
