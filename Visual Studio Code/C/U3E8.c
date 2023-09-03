/*8- Actualizar el saldo de una cuenta bancaria, a partir de un retiro. Verificar que el saldo
sea mayor o igual que el importe a retirar.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    float saldoCuentaBancaria, retiroCuentaBancaria;

    saldoCuentaBancaria = 153489.69;

    printf("Ingrese el saldo a retirar:\n");

    scanf("%f", &retiroCuentaBancaria);

    if (retiroCuentaBancaria <= 0)
    {
        printf("Los datos ingresados no son validos.\n");
    }
    else if (saldoCuentaBancaria < retiroCuentaBancaria)
    {
        printf("El saldo a retirar no es valido, saldo insuficiente.\n");
    }
    else
    {
        saldoCuentaBancaria = (saldoCuentaBancaria - retiroCuentaBancaria);
        printf("Retire los billetes por favor...\n");
        printf("Su nuevo saldo es:%.2f\n", saldoCuentaBancaria);
    }
    system("pause");
}