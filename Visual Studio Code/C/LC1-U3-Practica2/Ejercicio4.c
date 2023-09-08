/*4. Imprimir la suma de los números impares que se encuentran entre los números 1 y 10.*/
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i, suma = 0;

    for (i = 1; i <= 10 ; i+=2)
    {
        suma = suma + i;
    }
    printf("La suma es: %i", suma);
    
}