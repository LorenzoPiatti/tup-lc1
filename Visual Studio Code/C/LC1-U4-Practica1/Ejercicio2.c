/*2. Declarar un array de tipo entero de 5 componentes, asignarles un valor, mostrar la
suma de sus componentes y el promedio.*/
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int array[5], suma, i, j;
    float promedio;
    for (i = 0; i < 5; i++)
    {
        printf("Ingrese un valor en el indice %d:\n", i);
        scanf("%d", &array[i]);
    }
    suma = 0;
    for (i = 0; i < 5; i++)
    {
        suma = suma + array[i];
    }
    promedio = suma / 5;

    printf("La suma es: %d\n", suma);
    printf("El promedio es: %.2f\n", promedio);
    
    system("pause");
}