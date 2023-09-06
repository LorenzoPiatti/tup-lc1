/*10- Pedir al usuario que ingrese un número del 1 al 12 e indicar a qué mes corresponde
dicho número (por ejemplo: si ingresa el número 2 se deberá mostrar febrero en la
consola, si ingresa el 8, agosto, etc.) (realizar el ejercicio primero utilizando estructura
if y luego estructura switch).*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    int numeroIngresado;

    printf("Ingrese un numero del 1 al 12 y te dire a que mes corresponde:\n");
    scanf("%i", &numeroIngresado);

    if (numeroIngresado < 12 || 1 < numeroIngresado)
    {
        switch (numeroIngresado)
        {
        case 1:
            printf("El numero ingresado corresponde al mes Enero\n");
            break;
        case 2:
            printf("El numero ingresado corresponde al mes Febrero\n");
            break;
        case 3:
            printf("El numero ingresado corresponde al mes Marzo\n");
            break;
        case 4:
            printf("El numero ingresado corresponde al mes Abril\n");
            break;
        case 5:
            printf("El numero ingresado corresponde al mes Mayo\n");
            break;
        case 6:
            printf("El numero ingresado corresponde al mes Junio\n");
            break;
        case 7:
            printf("El numero ingresado corresponde al mes Julio\n");
            break;
        case 8:
            printf("El numero ingresado corresponde al mes Agosto\n");
            break;
        case 9:
            printf("El numero ingresado corresponde al mes Septiembre\n");
            break;
        case 10:
            printf("El numero ingresado corresponde al mes Octubre\n");
            break;
        case 11:
            printf("El numero ingresado corresponde al mes Noviembre\n");
            break;
        case 12:
            printf("El numero ingresado corresponde al mes Diciembre\n");
            break;
        }
    }
    if (numeroIngresado > 12 || numeroIngresado < 1)
    {
        printf("Error.. Numero ingresado es mayor a 12 o menor a 1.\n");
    }
    system("pause");
    
}