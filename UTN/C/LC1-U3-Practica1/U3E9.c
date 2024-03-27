/*9- Se desea escribir un algoritmo que pida la altura de una persona, si la altura es menor
o igual a 150 cm envíe el mensaje: “Persona de altura por debajo de la media”; si la
altura está entre 151 y 170 escriba el mensaje: “Persona de altura media” y si la altura
es mayor al 171 escriba el mensaje: “Persona de altura por arriba de la media”
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    int alturaPersona;

    printf("Ingrese la altura de la persona en centimetros:\n");

    scanf("%i", &alturaPersona);

    if (alturaPersona <= 0)
    {
        printf("altura no valida.\n");
    }
    else if (alturaPersona >= 151 && alturaPersona <= 170)
    {
        printf("Persona de altura media.\n");
    }
    else if (alturaPersona >= 171)
    {
        printf("Persona de altura por arriba de la media.\n");
    }
    else
    {
        printf("Persona de altura por debajo de la media.\n");
    }
    system("pause");
}