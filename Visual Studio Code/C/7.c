#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()

{
    float valorHora, tiempoTrabajado, salario;

    printf("Ingrese el valor de la hora de trabajo:\n");
    scanf("%f", &valorHora);

    printf("Ingrese el tiempo trabajado:\n");
    scanf("%f", &tiempoTrabajado);

    salario = valorHora * tiempoTrabajado;

    printf("El salario es:%f\n", salario);

    system("pause");
}