#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()

{
    float tiempoTrabajadoContador, sueldo;
    int valorHoraTrabajada;

    valorHoraTrabajada = 800;

    printf("Ingrese el tiempo trabajado del contador:");

    scanf("%f", &tiempoTrabajadoContador);

    sueldo = valorHoraTrabajada * tiempoTrabajadoContador;

    printf("El sueldo del contador es:%f\n", sueldo);

    system("pause");
}