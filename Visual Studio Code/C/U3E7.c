/*7- Ingresar el valor de una venta y aplicar el 15% de descuento si el valor es >= 100000 y
un 10% si es menor. Validar que la venta sea mayor que 0, caso contrario informar
dicha situación.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    float valorVenta, ValorVentaTotal;

    printf("Ingrese el valor de la venta.\n");

    scanf("%f", &valorVenta);

    if (valorVenta <= 0)
    {
        printf("El valor ingresado no es valido.\n");
    }
    else if (valorVenta >= 100000)
    {
        ValorVentaTotal = (valorVenta * 0.85);
        printf("El valor final con descuento es:%.2f\n", ValorVentaTotal);
    }
    else
    {
        ValorVentaTotal = (valorVenta * 0.90);
        printf("El valor final con descuento es:%.2f\n", ValorVentaTotal);
    }
    system("pause");
}