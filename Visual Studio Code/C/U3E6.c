/*6- Leer una nota de un alumno por consola e informar la condición del mismo. (menor
que 4: Reprobado, menor que 6: Regular, mayor o igual que 6: Promocionado). Validar
que la nota ingresada se encuentre entre el 0 y el 10, de lo contrario informar “Nota
inválida”.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    float notaAlumno;

    printf("Ingrese la nota del alumno:\n");

    scanf("%f", &notaAlumno);

    if (notaAlumno > 10 || notaAlumno < 0)
    {
        printf("La nota ingresada no es valida.\n");
    }
    else if (notaAlumno >= 6)
    {
        printf("El alumno promociono la materia.\n");
    }
    else if (notaAlumno < 6 && notaAlumno >= 4)
    {
        printf("El alumno regularizo la materia.\n");
    }
    else if (notaAlumno < 4)
    {
        printf("El alumno reprobo la materia\n");
    }
    system("pause");
}