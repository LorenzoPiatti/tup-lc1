/*11- Pedir al usuario que ingrese dos números (permitir ingresar número con decimales).
Luego presentar el siguiente menú:
1. Informar su suma
2. Informar su resta
3. Informar su multiplicación
4. Informar su división
5. Salir
Seleccione una operación:
Mostrar el resultado de la operación seleccionada. Si el usuario ingresa la opción 5 el
programa debe terminar.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    float num1, num2, resultadoMenu;
    int numeroMenu;
    char salir;

    printf("Ingrese dos numeros\n");
    scanf("%f" "%f", &num1, &num2);

    salir: ;
    printf("Seleccione la operacion que desee hacer:\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicacion\n");
    printf("4. Division\n");
    printf("5. Salir del menu\n");
    scanf("%i", &numeroMenu);

    switch (numeroMenu)
    {
    case 1:
        resultadoMenu = num1 + num2;
        printf("Su suma es: %.2f\n", resultadoMenu);
        break;
    case 2:
        resultadoMenu = num1 - num2;
        printf("Su resta es: %.2f\n", resultadoMenu);
        break;
    case 3:
        resultadoMenu = num1 * num2;
        printf("Su multiplicacion es: %.2f\n", resultadoMenu);
        break;
    case 4:
        resultadoMenu = num1 / num2;
        printf("Su division es: %.2f\n", resultadoMenu);
        break;
    case 5:
        printf("Cerrando menu..\n");
        break;
    default:
        printf("Numero ingresado no valido..\n");
        printf("Vuelva a ingresar un numero:\n");
        goto salir;
        break;
    }
    system("pause");
}