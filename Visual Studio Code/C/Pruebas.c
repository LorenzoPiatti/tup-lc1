#include <stdio.h>
#include <stdbool.h>

#define MAX_CLIENTES 3

struct Cliente {
    int numero_cuenta;
    char contrasena[20];
};

int main() {
    struct Cliente clientes[MAX_CLIENTES] = {
        {1234, "contrasena1"},
        {5678, "contrasena2"},
        {9012, "contrasena3"}
    };
    int num_cuenta;
    char contrasena[20];
    bool acceso_permitido = false;
    
    printf("Ingrese su numero de cuenta: ");
    scanf("%d", &num_cuenta);
    printf("Ingrese su contrasena: ");
    scanf("%s", contrasena);
    
    for (int i = 0; i < MAX_CLIENTES; i++) {
        if (clientes[i].numero_cuenta == num_cuenta) {
            if (strcmp(clientes[i].contrasena, contrasena) == 0) {
                acceso_permitido = true;
                break;
            } else {
                printf("Contrasena incorrecta. Intente nuevamente.\n");
                scanf("%s", contrasena);
            }
        }
    }
    
    if (acceso_permitido) {
        printf("Bienvenido!\n");
    } else {
        printf("Numero de cuenta no encontrado.\n");
    }
    
    return 0;
}