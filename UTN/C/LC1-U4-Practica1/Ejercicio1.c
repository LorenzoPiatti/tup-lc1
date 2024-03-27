/*1. Declarar un array de tipo entero de 5 elementos, asignarles un valor, mostrar de la
forma: “Índice: X, Valor: Y” en el orden ingresado y de atrás hacia adelante.*/
#include <stdlib.h>
#include <stdio.h>

void main()
{
    int i, array[5];
    array[0] = 3;
    array[1] = 6;
    array[2] = 12;
    array[3] = 54;
    array[4] = 123;

    for (i = 4; i >= 0; i--)
    {
        printf("En el indice %d el valor es: %d\n", i, array[i]);
    }
    system("pause");
}