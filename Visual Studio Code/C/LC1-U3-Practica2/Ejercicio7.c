/*7. Diseñe un algoritmo que sume los 20 primeros números impares.*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i, suma;

    for (i = 1; i <= 40 ; i+=2)
    {
        suma = suma + i;
    }
    printf("La suma es: %i", suma);

}