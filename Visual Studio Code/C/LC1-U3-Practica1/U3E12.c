/*12- Realizar un programa que permita registrar los datos para una venta de $4600. Para
ello, se le pedirá al usuario que ingrese su DNI, validar que dicho número no sea menor
que 1000000 ni mayor que 99999999. Luego, requerir al usuario que seleccione el
medio de pago: 1-Efectivo, 2-Tarjeta de crédito, si selecciona tarjeta, pedir que ingrese
una opción de las siguientes: 1-Visa, 2-American Express, 3-Mercado Pago, 4-Cabal.
Además, requerir la cantidad de cuotas en las que abonará (1, 3, 6 o 12). El interés por
pagar en cuotas será de: 0 interés para efectivo o 1 cuota, 4% para 3 cuotas y 8% para
6 y 12 cuotas. Validar que todos los datos ingresados por el usuario sean correctos, en
caso contrario informar la situación y finalizar programa. Por último, presentar un
resumen de la operación, por ejemplo:
DNI: 38.456.123
Medio de pago: Tarjeta de crédito
Tarjeta: Cabal
Cuotas: 3
Total: $4784*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    int VENTA, DNI, cuotasPago, interes4, interes8, valorVentaTotal, medioDePago, tarjetaPago;
    char salir, salir1, salir2, salir3, salir4, salir5, salir6;

    interes4 = 184;
    interes8 = 368;
    VENTA = 4600;

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

    system("pause");
}