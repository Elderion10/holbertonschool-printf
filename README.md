_printf

Descripcion:
Esta funcion permite imprimir strings de acuerdo a un formato o  especificadores dados.

Especificadores disponibles:

%c:
Imprimira un caracter.

%s:
Imprimira un string.

%i:
Imprimira un numero entero.

%d:
Imprimira un numero en formato decimal.

%%:
Imprimira el caracter %.

Funcionamiento;
Este programa imprimira los caracteres de un sting, si el string contiene el caracter % el programa hara una verificacion del caracter sub secuente.
Una vez verifique que el caracter busacara si dicho caracter tiene una funcion/comportamiento asignado.

Ejemplo:
_printf("Hola soy %s", "Yahuri");

El programa imprimira "Hola soy" y cuando llegue al % verificara el siguiente caracter, en este caso el siguiente caracter es "s" y en nuestro programa
%s tiene como proposito imptimir un string. 

Nuestro output se vera asi:
Hola soy Yahuri
