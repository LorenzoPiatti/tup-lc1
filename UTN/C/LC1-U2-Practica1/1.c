#include <stdio.h>
#include <stdlib.h>

int main()

{
    int num1, num2, totalSuma;

    printf("Ingrese 2 valores enteros:\n");

    scanf("%d", &num1);

    scanf("%d", &num2);

    totalSuma = num1 + num2;

    printf("El total de la suma es: %d\n", totalSuma);

    system("pause");
    
    return 0;
}