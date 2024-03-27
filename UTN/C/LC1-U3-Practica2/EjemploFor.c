#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i, cantidad = 0;

    for (i = -90; i <= 100; i++)
    {
        printf("%i", i);
        printf(" | ");

        cantidad++;
    }

    printf("\nEl valor de la i fuera del for es %i", i);

    printf("\nEl for se ejecuto %i veces\n", cantidad);

    system("pause");
    
}