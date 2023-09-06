#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    float num1, num2, resultado;

    printf("Ingrese dos numeros y determino cual es el mayor\n");

    scanf("%f %f", &num1, &num2);

    if (num1 < num2)
    {
        printf("El mayor es:%.2f\n", num2);
    }
    else if (num1 == num2)
    {
        printf("Los dos numeros son iguales.\n");
    }  
    else
    {
        printf("El mayor es:%.2f\n", num1);
    }  
    system("pause");
}