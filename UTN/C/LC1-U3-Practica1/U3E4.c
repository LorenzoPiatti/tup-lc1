// 4- Ingresar por teclado tres números, determinar cuál es el mayor y visualizarlo en pantalla.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    float num1, num2, num3;

    printf("Ingrese 3 numeros y el programa determinara cual es el mayor.\n");

    scanf("%f %f %f", &num1, &num2, &num3);

    if (num1 == num2 && num2 == num3)
    {
        printf("Los tres numeros ingresados son iguales.\n");
    }
    else if (num3 < num1 && num1 > num2)
    {
        printf("El siguiente numero es el mayor:%.2f\n", num1);
    }
    else if (num3 < num2 && num1 < num2)
    {
        printf("El siguiente numero es el mayor:%.2f\n", num2);
    }
    else
    {
        printf("El siguiente numero es el mayor:%.2f\n", num3);
    }
    system("pause");
}