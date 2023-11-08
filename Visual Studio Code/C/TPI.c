#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estructura para representar a un cliente
struct Cliente
{
    int numeroCuenta;
    char contrasena[20];
    char nombre[50];
    float saldo;
    char estado[10];
    int intentosFallidos;
    int operacionesRealizadas;
};

// Prototipos de funciones
void inicializarClientes(struct Cliente clientes[]);
void mostrarMenu();
void iniciarSesion(struct Cliente clientes[]);
void bloquearCuenta(struct Cliente clientes[]);
void realizarDeposito(struct Cliente *cliente);
void realizarExtraccion(struct Cliente *cliente);
void consultarSaldo(struct Cliente *cliente);
void realizarTransferencia(struct Cliente clientes[]);
void mostrarOperacionesYSaldo(struct Cliente *cliente);

void main()
{
    struct Cliente clientes[10];
    inicializarClientes(clientes);
    int infinito = 1;

    while (infinito == 1)
    {
        mostrarMenu();
        int opcion;
        printf("Ingrese la opcion deseada: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            iniciarSesion(clientes);
            break;
        case 6:
            printf("Gracias por utilizar el cajero autom%ctico. Hasta luego.\n", 160);
            break;
        default:
            printf("Opci%cn no v%clida. Int%cntelo de nuevo.\n", 162, 160, 130);
            break;
        }
    }

}

void inicializarClientes(struct Cliente clientes[])
{
    // Inicializar los datos de los clientes (números de cuenta, contraseñas, nombres, saldos, estados, etc.)
    // ...

    // Ejemplo de inicialización de un cliente
    clientes[0].numeroCuenta = 123;
    strcpy(clientes[0].contrasena, "pass123");
    strcpy(clientes[0].nombre, "Juan Perez");
    clientes[0].saldo = 1000.0;
    strcpy(clientes[0].estado, "Activo");
    clientes[0].intentosFallidos = 0;
    clientes[0].operacionesRealizadas = 0;
}

void mostrarMenu()
{
    printf("\n=== Men%c ===\n", 163);
    printf("1. Iniciar Sesi%cn\n", 162);
    printf("6. Salir\n");
}

void iniciarSesion(struct Cliente clientes[])
{
    int numeroCuenta, menuSalida = 1, opcion2;
    char contrasena[20];

    printf("Ingrese su n%cmero de cuenta: ", 163);
    scanf("%d", &numeroCuenta);
    printf("Ingrese su contrase%ca: ", 164);
    scanf("%s", contrasena);

    // Buscar el cliente con el número de cuenta proporcionado
    struct Cliente *cliente = NULL;
    for (int i = 0; i < 10; i++)
    {
        if (clientes[i].numeroCuenta == numeroCuenta)
        {
            cliente = &clientes[i];
            break;
        }
    }

    // Verificar la existencia del cliente y su estado
    if (cliente != NULL && strcmp(cliente->contrasena, contrasena) == 0 && strcmp(cliente->estado, "Activo") == 0)
    {
        // Cliente autenticado correctamente
        cliente->intentosFallidos = 0; // Reiniciar el contador de intentos fallidos
        printf("Bienvenido, %s!\n", cliente->nombre);

        // Mostrar el menú de operaciones disponibles
        do
        {
            printf("1. Realizar un Dep%csito.\n", 162);
            printf("2. Realizar una Extracci%cn.\n", 162);
            printf("3. Consultar el Saldo de la Cuenta.\n");
            printf("4. Realizar una Transferencia entre Cuentas.\n");
            printf("5. Mostrar cantidad de Operaciones Realizadas y Saldo Actual.\n");
            printf("6. Salir de la Sesi%cn.\n", 162);
            scanf("%d", &opcion2);
            switch (opcion2)
            {
            case 1:
                //codigo
                break;

            case 2:
                //codigo
                break;

            case 3:
                //codigo
                break;

            case 4:
                //codigo
                break;

            case 5:
                //codigo
                break;

            case 6:
                printf("Gracias por utilizar el cajero autom%ctico. Hasta luego.\n", 160);
                menuSalida = 0;
                break;
            
            default:
                printf("Opci%cn no v%clida. Int%cntelo de nuevo.\n", 162, 160, 130);
                break;
            }
        } while (menuSalida == 1);
        
    }
    else
    {
        // Autenticación fallida
        printf("N%cmero de cuenta o contrase%ca incorrecta.\n", 163, 164);

        // Incrementar el contador de intentos fallidos
        cliente->intentosFallidos++;

        // Bloquear la cuenta si se superan los tres intentos fallidos
        if (cliente->intentosFallidos == 3)
        {
            bloquearCuenta(cliente);
        }
    }
}

void contadorIntentos()
{
    
}

void bloquearCuenta(struct Cliente *cliente)
{
    printf("No se permiten m%cs intentos. Su cuenta ha sido bloqueada; comun%cquese con la entidad bancaria.\n", 160, 161);
    strcpy(cliente->estado, "Bloqueado");
}

// Implementar el resto de las funciones según las especificaciones dadas
// ...