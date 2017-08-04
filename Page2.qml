import QtQuick 2.7

Page2Form {
    mouseArea2.onClicked: {
        //comando al clicar en la 2da pagina
        rectangle2.visible=false;
        ScriptLauncher.encenderPantalla();
        console.log("pantalla encendida");


}

    button2.onClicked: {
        console.log("Button 2 Pressed. Entered text: " + textField2.text);
        rectangle2.visible=true;

    }


}
