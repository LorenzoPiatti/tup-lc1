#include <stdio.h>
#include <stdlib.h>

int main()

{
    int num1, num2, num3, totalSuma;

    printf("Ingrese 3 valores enteros:\n");

    scanf("%d", &num1);

    scanf("%d", &num2);

    scanf("%d", &num3);

    totalSuma = num1 + num2 + num3;

    printf("El total de la suma es: %d\n", totalSuma);

    system("pause");

    return 0;
}