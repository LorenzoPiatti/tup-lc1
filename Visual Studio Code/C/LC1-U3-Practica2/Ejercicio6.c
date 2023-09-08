/*6. Suma de los 10 primeros números múltiplos de tres.*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i,suma = 0;

    for ( i = 9; i <= 59049; i*=3)
    {
        suma = suma + i;
    }
    printf("%d", suma);
    
}