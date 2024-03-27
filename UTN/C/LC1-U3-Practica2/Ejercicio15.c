/*15. Se desea leer las calificaciones de 5 alumnos, por cada alumno se leen 3 calificaciones.
Mostrar el promedio por alumno y el promedio general.*/
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i, j;
    float promedio, nota, sumaNotas, promedioGeneral, sumaNotasGeneral;
    promedio = 0;

    for (i = 1; i <= 5; i++)
    {
        sumaNotas = 0;
        for (j = 1; j <= 3; j++)
        {
            printf("Ingrese una nota del alumno:\n");
            scanf("%f", &nota);
            sumaNotas = sumaNotas + nota;
            sumaNotasGeneral = sumaNotasGeneral + nota;
        }
        promedio = sumaNotas / 3;
        printf("El promedio del alumno es: %.2f\n", promedio);
    }

    promedioGeneral = sumaNotasGeneral / 15;
    printf("El promedio general de los alumnos es: %.2f\n", promedioGeneral);

    system("pause");
    
}