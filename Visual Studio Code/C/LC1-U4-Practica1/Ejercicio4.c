/*4. Dado el vector {10, 20, 5, 15, 30, 20}
a. Informar el vector de la forma: "Indice: X, Valor: Y".
b. Totalizar el vector e informar el total.
c. Informar el contenido de las posiciones impares.
d. Informar las posiciones que contienen números impares.
e. Informar el mayor número.
f. Informar cuántas veces aparece el número 20.*/
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int suma20=0, mayor=0, suma=0, i, array[]={10, 20, 5, 15, 30, 20};

    for (i = 0; i < 6; i++)
    {
        printf("Indice: %d, Valor: %d\n", i, array[i]);
        suma = suma + array[i];
    }
    printf("\nEl contenido de las posiciones impares son:\n");
    for (i = 0; i < 6; i++)
    {
        if (i % 2 == 1)
        {
            printf("%d, ", array[i]);
        }
    }
    printf("\n\nLos indices que contienen numeros impares son:\n");
    for (i = 0; i < 6; i++)
    {
        if (array[i] % 2 == 1)
        {
            printf("%d, ", i);
        }
    }
    for (i = 0; i < 6; i++)
    {
        if (array[i] > mayor)
        {
            mayor = array[i];
        }
    }
    printf("\n\nEl mayor es: %d\n", mayor);
    for (i = 0; i < 6; i++)
    {
        if (array[i] == 20)
        {
            suma20 = suma20 + 1;
        }
    }
    printf("\nLa cantidad de veces que aparece el numero 20 es: %d\n", suma20);
    
    system("pause");
    
}