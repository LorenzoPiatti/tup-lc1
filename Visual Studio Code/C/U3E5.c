// 5- Escriba un programa que pida ingresar un número y a continuación escriba en la consola si el mismo es par o impar.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    int num;

    printf("Ingrese un numero entero y determino si es par o impar:\n");

    scanf("%i", &num);

    if (num%2 == 0)
    {
        printf("El numero es par.\n");
    }
    else
    {
        printf("El numero es impar.\n");
    }
    system("pause");
}