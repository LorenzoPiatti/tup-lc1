#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    float valor1, valor2, suma, producto, resta;

    printf("Ingrese dos valores:\n");

    scanf("%f%f", &valor1, &valor2);

    suma = valor1 + valor2;

    resta = valor1 - valor2;

    producto = valor1 * valor2;

    printf("La suma de los dos valores es:%f\n", suma);
    printf("La resta del primer valor menos el segundo valor es:%f\n", resta);
    printf("El producto de los dos valores es:%f\n", producto);

    system("pause");
}