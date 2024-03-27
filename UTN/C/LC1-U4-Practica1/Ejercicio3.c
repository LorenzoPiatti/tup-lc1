/*3. Declarar un array de tipo entero de 5 componentes, asignarles un valor por consola,
mostrar cuántas veces se repite el número 5.*/
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int array[5], i, contador;
    contador = 0;
    for (i = 0; i < 5; i++)
    {
        printf("Ingrese un numero entero en el indice %d:\n", i);
        scanf("%d", &array[i]);
        if (array[i] == 5)
        {
            contador = contador + 1;
        }
    }
    printf("La cantidad de veces que se repite el 5 es: %d\n", contador);
    system("pause");
}