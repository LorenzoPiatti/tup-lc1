#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>  
int main() 
{     
    int num1;     
    int factorial;      
    do     
    {         
        printf("Ingrese un numero:\n");         
        scanf("%d", &num1);          
        if (num1 < 0)         
        {              
            printf("El numero ingresado tiene que ser positivo");         
            }      
    } while (num1 < 0);
    factorial = num1;      
    for (int i = 1; i <= num1; i++)     
    {         
        factorial = factorial * i;     
    }      
    printf("El factorial de %d es %d \n", num1, factorial);      
    return 0; 
}