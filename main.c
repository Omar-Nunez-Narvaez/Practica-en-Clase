#include <stdio.h>
#include "sumar.h"
#include "restar.h"

int main() {
    int a, b;

    printf("Ingresar el 1er numero: ");
    scanf("%d", &a);
    printf("Ingresar el 2do numero: ");
    scanf("%d", &b);

    printf("La suma es: %d\n", sumar(a, b));
    printf("La resta es: %d\n", restar(a, b));

    return 0;
}