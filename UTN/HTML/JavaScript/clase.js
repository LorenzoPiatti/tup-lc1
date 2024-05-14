/* ALERTAS */
function MsgAlerta(PNombre) {

    alert('Hola ' + PNombre); //este tipo de mensaje no tiene retorno de valor
}   

function MsgAlertaGenerico(PMensaje) {

    alert(PMensaje);
}

/* CONFIRMACION */

function MsgConfirmacion() {

    var resultado = confirm('¿Acepta continuar?');

    if (resultado){
        MsgAlertaGenerico('Continuamos');
    }
    else{
        MsgAlertaGenerico('cuac cuac cuac');
    }
}

/* PROMPT */

function MsgPrompt() {

    var nombre = prompt('Como es su nombre?');

    if(nombre.length>0 && nombre != "null"){
        MsgAlertaGenerico('Hola ' + nombre);
    }
    else{
        alert('Error!')
    }
}

function FSumar(v1, v2) {

    //MsgAlertaGenerico(typeof v1);

    let suma = parseInt(v1) + parseInt(v2);
    MsgAlertaGenerico(suma);

    // + - * / % -> Operadores numericos
    // STRING + STRING, var Pepe += STRING -> concatena
    // varPepe(num) += num -> suma

    /* var Ppe(num) += num

        Pepe = Pepe + num <> Pepe += num */

    // += , -= , *= , /= , %=

    /* ++X
    paso 0 -> declara variable x = 0
    paso 1 -> ingresa al proceso -> X
    paso 2 -> suma 1 a X
    paso 3 -> muestra 1 */
}

function fcX() {

    var frutas = ["Manzana", "Banana", "Pera", "Naranja", "Frutilla"];

    for (var i = 0; i < frutas.length; i++){
        alert(frutas[i]);
    }
}

function MsgPrompt2() {

    var valor = prompt('Ingrese un valor');

    return valor;
}