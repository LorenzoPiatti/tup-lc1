#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()

{
    double hipotenusa, perimetro, aux, aux2, superficie;
    float lado1, lado2;

    printf("Ingrese el cateto opuesto del triangulo:\n");

    scanf("%f", &lado1);

    printf("Ingrese el cateto adyacente del triangulo:\n");

    scanf("%f", &lado2);

    aux = lado1 * lado1 + lado2 * lado2;

    hipotenusa = sqrt(aux);

    aux2 = lado1 * lado2;

    superficie = aux2 / 2;

    perimetro = lado1 + lado2 + hipotenusa;

    printf("La hipotenusa del triangulo es:%.2lf\n", hipotenusa);

    printf("La superficie del triangulo es:%.2lf\n", superficie);

    printf("El perimetro del triangulo es:%.2lf\n", perimetro);

    system("pause");
}