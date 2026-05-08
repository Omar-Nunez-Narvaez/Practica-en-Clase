#include <stdio.h>
#include "sumar.h"
#include "restar.h"
#include "multiplicacion.h"
#include "division.h"

int main() {
    int a, b;

    printf("Ingresar el 1er numero: ");
    scanf("%d", &a);
    printf("Ingresar el 2do numero: ");
    scanf("%d", &b);

    printf("La suma es: %d\n", sumar(a, b));
    printf("La resta es: %d\n", restar(a, b));
    printf("La multiplicacion es: %d\n", multiplicacion(a, b));
    printf("La division es: %d\n", division(a, b));

    return 0;
}