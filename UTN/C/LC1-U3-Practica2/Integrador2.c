/*Un empleado de un comercio debe registrar las ventas del día. Para ello, realizar un programa
que permita ingresar los datos de las ventas realizadas. Primero, requerir al empleado la
cantidad de ventas que necesita registrar. Luego, para cada venta deberá ingresar el DNI del
cliente (validar que dicho número no sea menor que 1000000 ni mayor que 99999999).
Ingresar el monto de la venta y el medio de pago: 1 - Efectivo, 2 - Tarjeta de crédito, si la venta
fue con tarjeta, pedir que ingrese una opción de las siguientes: 1 - Visa, 2 - American Express, 3
- Mercado Pago, 4 - Cabal. Además, requerir la cantidad de cuotas en las que abonará (1, 3, 6 o
12). El interés por pagar en cuotas será de: 0 interés para efectivo o 1 cuota, 4% para 3 cuotas
y 8% para 6 y 12 cuotas, por lo se deberá calcular el importe a abonar dependiendo si la venta
es en efectivo o en cuotas. Validar que todos los datos ingresados por el empleado para una
venta sean correctos, en caso contrario informar la situación y finalizar la carga de la venta
actual. Para cada venta, presentar un resumen de la operación, por ejemplo:
DNI: 38.456.123
Medio de pago: Tarjeta de crédito
Tarjeta: Cabal
Cuotas: 3
Total: $4784
Al finalizar el registro, mostrar la suma total de las ventas ingresadas.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    int VENTA, DNI, cuotasPago, interes4, interes8, valorVentaTotal, medioDePago, tarjetaPago, cantVentasIngresar, i;
    char salir, salir1, salir2, salir3, salir4, salir5, salir6;

    interes4 = 184;
    interes8 = 368;
    VENTA = 4600;

    printf("Ingrese la cantidad de ventas a ingresar:\n");
    scanf("%i", cantVentasIngresar);

    for (i = 1; i <= cantVentasIngresar; i++)
    {
        printf("Ingrese su DNI:\n");
        salir: ;
        scanf("%i", &DNI);

        if (DNI > 1000000 && DNI < 99999999)
        {
            printf("Seleccione el medio de pago:\n  1. Efectivo\n  2. Tarjeta de credito\n");
            salir1: ;
            scanf("%i", &medioDePago);
            switch (medioDePago)
            {
            case 1:
                printf("DNI: %i\n", DNI);
                printf("Medio de pago: Efectivo\n");
                printf("Total: %i\n", VENTA);
                break;

            case 2:
                printf("Ingrese una de las siguientes opciones:\n  1. Visa\n  2. American Express\n  3. Mercado Pago\n  4. Cabal\n");
                salir2: ;
                scanf("%i", &tarjetaPago);
                switch (tarjetaPago)
                {
                case 1:
                    printf("Seleccione las cuotas a abonar:\n  1. 1 Cuota\n  3. 3 Cuotas\n  6. 6 Cuotas\n 12. 12 Cuotas\n");
                    salir3: ;
                    scanf("%i", &cuotasPago);
                    switch (cuotasPago)
                    {
                    case 1:
                        printf("DNI: %i\n", DNI);
                        printf("Medio de pago: Tarjeta de credito\n");
                        printf("Tarjeta: Visa\n");
                        printf("Cuotas: 1\n");
                        printf("Total: %i\n", VENTA);
                        break;

                    case 3:
                        valorVentaTotal = VENTA + interes4;
                        printf("DNI: %i\n", DNI);
                        printf("Medio de pago: Tarjeta de credito\n");
                        printf("Tarjeta: Visa\n");
                        printf("Cuotas: 3\n");
                        printf("Total: %i\n", valorVentaTotal);
                        break;

                    case 6:
                        valorVentaTotal = VENTA + interes8;
                        printf("DNI: %i\n", DNI);
                        printf("Medio de pago: Tarjeta de credito\n");
                        printf("Tarjeta: Visa\n");
                        printf("Cuotas: 6\n");
                        printf("Total: %i\n", valorVentaTotal);
                        break;

                    case 12:
                        valorVentaTotal = VENTA + interes8;
                        printf("DNI: %i\n", DNI);
                        printf("Medio de pago: Tarjeta de credito\n");
                        printf("Tarjeta: Visa\n");
                        printf("Cuotas: 12\n");
                        printf("Total: %i\n", valorVentaTotal);
                        break;
                    
                    default:
                        printf("Opcion no valida.\n");
                        goto salir3;
                        break;
                    }
                    break;

                case 2:
                    printf("Seleccione las cuotas a abonar:\n  1. 1 Cuotas\n  3. 3 Cuotas\n  6. 6 Cuotas\n 12. 12 Cuotas\n");
                    salir4: ;
                    scanf("%i", &cuotasPago);
                    switch (cuotasPago)
                    {
                    case 1:
                        printf("DNI: %i\n", DNI);
                        printf("Medio de pago: Tarjeta de credito\n");
                        printf("Tarjeta: American Express\n");
                        printf("Cuotas: 1\n");
                        printf("Total: %i\n", VENTA);
                        break;

                    case 3:
                        valorVentaTotal = VENTA + interes4;
                        printf("DNI: %i\n", DNI);
                        printf("Medio de pago: Tarjeta de credito\n");
                        printf("Tarjeta: American Express\n");
                        printf("Cuotas: 3\n");
                        printf("Total: %i\n", valorVentaTotal);
                        break;

                    case 6:
                        valorVentaTotal = VENTA + interes8;
                        printf("DNI: %i\n", DNI);
                        printf("Medio de pago: Tarjeta de credito\n");
                        printf("Tarjeta: American Express\n");
                        printf("Cuotas: 6\n");
                        printf("Total: %i\n", valorVentaTotal);
                        break;

                    case 12:
                        valorVentaTotal = VENTA + interes8;
                        printf("DNI: %i\n", DNI);
                        printf("Medio de pago: Tarjeta de credito\n");
                        printf("Tarjeta: American Express\n");
                        printf("Cuotas: 12\n");
                        printf("Total: %i\n", valorVentaTotal);
                        break;
                    
                    default:
                        printf("Opcion no valida.\n");
                        goto salir4;
                        break;
                    }
                    break;

                case 3:
                    printf("Seleccione las cuotas a abonar:\n  1. 1 Cuotas\n  3. 3 Cuotas\n  6. 6 Cuotas\n 12. 12 Cuotas\n");
                    salir5: ;
                    scanf("%i", &cuotasPago);
                    switch (cuotasPago)
                    {
                    case 1:
                        printf("DNI: %i\n", DNI);
                        printf("Medio de pago: Tarjeta de credito\n");
                        printf("Tarjeta: Mercado Pago\n");
                        printf("Cuotas: 1\n");
                        printf("Total: %i\n", VENTA);
                        break;

                    case 3:
                        valorVentaTotal = VENTA + interes4;
                        printf("DNI: %i\n", DNI);
                        printf("Medio de pago: Tarjeta de credito\n");
                        printf("Tarjeta: Mercado Pago\n");
                        printf("Cuotas: 3\n");
                        printf("Total: %i\n", valorVentaTotal);
                        break;

                    case 6:
                        valorVentaTotal = VENTA + interes8;
                        printf("DNI: %i\n", DNI);
                        printf("Medio de pago: Tarjeta de credito\n");
                        printf("Tarjeta: Mercado Pago\n");
                        printf("Cuotas: 6\n");
                        printf("Total: %i\n", valorVentaTotal);
                        break;

                    case 12:
                        valorVentaTotal = VENTA + interes8;
                        printf("DNI: %i\n", DNI);
                        printf("Medio de pago: Tarjeta de credito\n");
                        printf("Tarjeta: Mercado Pago\n");
                        printf("Cuotas: 12\n");
                        printf("Total: %i\n", valorVentaTotal);
                        break;
                    
                    default:
                        printf("Opcion no valida.\n");
                        goto salir5;
                        break;
                    }
                    break;

                case 4:
                    printf("Seleccione las cuotas a abonar:\n  1. 1 Cuotas\n  3. 3 Cuotas\n  6. 6 Cuotas\n 12. 12 Cuotas\n");
                    salir6: ;
                    scanf("%i", &cuotasPago);
                    switch (cuotasPago)
                    {
                    case 1:
                        printf("DNI: %i\n", DNI);
                        printf("Medio de pago: Tarjeta de credito\n");
                        printf("Tarjeta: Cabal\n");
                        printf("Cuotas: 1\n");
                        printf("Total: %i\n", VENTA);
                        break;

                    case 3:
                        valorVentaTotal = VENTA + interes4;
                        printf("DNI: %i\n", DNI);
                        printf("Medio de pago: Tarjeta de credito\n");
                        printf("Tarjeta: Cabal\n");
                        printf("Cuotas: 3\n");
                        printf("Total: %i\n", valorVentaTotal);
                        break;

                    case 6:
                        valorVentaTotal = VENTA + interes8;
                        printf("DNI: %i\n", DNI);
                        printf("Medio de pago: Tarjeta de credito\n");
                        printf("Tarjeta: Cabal\n");
                        printf("Cuotas: 6\n");
                        printf("Total: %i\n", valorVentaTotal);
                        break;

                    case 12:
                        valorVentaTotal = VENTA + interes8;
                        printf("DNI: %i\n", DNI);
                        printf("Medio de pago: Tarjeta de credito\n");
                        printf("Tarjeta: Cabal\n");
                        printf("Cuotas: 12\n");
                        printf("Total: %i\n", valorVentaTotal);
                        break;
                    
                    default:
                        printf("Opcion no valida.\n");
                        goto salir6;
                        break;
                    }
                    break;
                
                default:
                    printf("Opcion no valida.\n");
                    goto salir2;
                    break;
                }
                break;
            
            default:
                printf("Opcion no valida.\n");
                goto salir1;
                break;
            }
        }
        else
        {
            printf("DNI no valido.\n");
            goto salir;
        }
    }
    system("pause");
}