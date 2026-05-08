#include <stdio.h>
#include "sumar.h"
#include "restar.h"
#include "multiplicacion.h"
#include "division.h"

int main() {
    int opcion;
    int a, b;
    int resultado;

    do {
        
        printf("\n=== CALCULADORA ===\n");
        printf("1. Sumar\n");
        printf("2. Restar\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("5. Salir\n");
        printf("Elige una opcion: ");
        scanf("%d", &opcion);

        if (opcion >= 1 && opcion <= 4) {
            
            printf("Ingresar el 1er numero: ");
            scanf("%d", &a);
            printf("Ingresar el 2do numero: ");
            scanf("%d", &b);
        }

       
        switch(opcion) {
            case 1:
                resultado = sumar(a, b);
                printf("Resultado: %d\n", resultado);
                break;
            case 2:
                resultado = restar(a, b);
                printf("Resultado: %d\n", resultado);
                break;
            case 3:
                resultado = multiplicacion(a, b);
                printf("Resultado: %d\n", resultado);
                break;
            case 4:
                resultado = division(a, b);
                printf("Resultado: %d\n", resultado);
                break;
            case 5:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opcion invalida!\n");
        }

    } while(opcion != 5);

    return 0;
}