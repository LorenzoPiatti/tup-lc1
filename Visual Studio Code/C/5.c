#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()

{
    double diagonal, superficie, perimetro, aux, aux2;
    float ladoLargo, ladoAncho;

    printf("Ingrese el lado largo del rectangulo:\n");

    scanf("%f", &ladoLargo);

    printf("Ingrese el lado ancho del rectangulo:\n");

    scanf("%f", &ladoAncho);

    aux = ladoAncho * ladoAncho + ladoLargo * ladoLargo;

    diagonal = sqrt(aux);

    aux2 = ladoAncho + ladoLargo;

    superficie = ladoAncho * ladoLargo;

    perimetro = aux2 * 2;

    printf("La diagonal del rectangulo es:%.2lf\n", diagonal);

    printf("La superficie del rectangulo es:%.2lf\n", superficie);

    printf("El perimetro del rectangulo es:%.2lf\n", perimetro);

    system("pause");
}