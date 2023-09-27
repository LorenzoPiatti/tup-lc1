/*9. Realizar un programa que permita ver información a un cliente de un banco. Para ello
el cliente deberá ingresar su usuario (número de DNI) y contraseña (número entero),
validar que los datos ingresados sean correctos, se permitirá al cliente 3 intentos de
ingreso de contraseña. Al loguarse correctamente presentar un menú con las
siguientes opciones:
1- Consultar saldo
2- Consultar CBU
3- Salir*/

#include <stdlib.h>
#include <stdio.h>

void main()
{
    int dni = 35654123;
    int pass = 1234;
    int saldo = 150000;
    int cbu = 986323456;
    int dniIngresado = 0;
    int passIngresado = 0;
    int intentos = 1;
    int ingresaCorrectamente = 0;
    int ingresoMenu;

    printf("Bienvenido a Banco Santa Fe!\n");
    
    while (intentos <= 3 && ingresaCorrectamente == 0)
    {
        printf("Ingrese su usuario:\n");
        scanf("%d", &dniIngresado);

        printf("Ingrese la contraseña:\n");
        scanf("%d", &passIngresado);

        if (dni == dniIngresado && pass == passIngresado)
        {
            ingresaCorrectamente = 1;
        }
        else
        {
            printf("Usuario o Contraseña incorrecta\n");
            printf("Intento %d de 3\n", intentos);
            intentos++;
        }
        
    }

    if (dni == dniIngresado && pass == passIngresado)
    {
        do
        {
            printf("\nMenu:\n");
            printf(" 1- Consultar saldo\n 2- Consultar CBU\n 3- Salir\n");
            scanf("%d", &ingresoMenu);
            switch (ingresoMenu)
            {
            case 1:
                printf("Su saldo es: %d\n", saldo);
                break;
            case 2:
                printf("Su CBU es: %d\n", cbu);
                break;
            case 3:
                printf("Gracias por usar Banco Santa Fe\n");
                break;
            default:
                printf("Opcion no valida..\n");
                break;
            }
        } while (ingresoMenu != 3);
        
        
    }
    else
    {
        printf("Numero de intentos excedido\n");
    }
    
    
}