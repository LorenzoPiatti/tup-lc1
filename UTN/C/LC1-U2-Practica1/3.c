#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lado1, lado2, lado3, perimetro;
    printf("Ingresar los 3 lados de su triangulo:\n");
    scanf("%d", &lado1);
    scanf("%d", &lado2);
    scanf("%d", &lado3);
    perimetro = lado1 + lado2 + lado3;
    printf("El perimetro es: %d\n", perimetro);
    system("pause");
    return 0;
}