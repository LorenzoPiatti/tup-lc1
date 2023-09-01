// 3- Dado un número introducido por el usuario, indicar si este es positivo, negativo o nulo.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    float numIngresado;
    printf("Ingrese un numero y el programa le dira si es positivo, negativo o nulo\n");
    scanf("%f", &numIngresado);

    if (numIngresado > 0)
    {
        printf("El numero ingresado es positivo.\n");
    }
    else if (numIngresado < 0)
    {
        printf("El numero ingresado es negativo.\n");
    }
    else
    {
        printf("El numero ingresado es nulo.\n");
    }
    system("pause");
}