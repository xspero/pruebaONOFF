import QtQuick 2.7


Page1Form {



      date: clock.now.toLocaleDateString(Qt.locale(), "d MMM yyyy")
      time: clock.now.toLocaleTimeString(Qt.locale(), "HH:mm")
      day: clock.now.toLocaleDateString(Qt.locale(), "dddd")


    mouseArea2.onClicked: {
        rectangle1.visible=true;
        ScriptLauncher.encenderPantalla();
        console.log("pantalla encendida");

}

    mouseArea1.onClicked: {
        //comando al clicar la 1era pagina
        rectangle1.visible=false;
        ScriptLauncher.apagarPantalla();
        console.log("pantalla apagada");






}

    button.onClicked: {
        Qt.quit()
}


    button1.onClicked: {
        console.log("Button Pressed. Entered text: " + textField1.text);
        rectangle1.visible=true;

    }
}
