#include "division.h"
#include <stdio.h>

int division(int a, int b) {
    if (b == 0) {
        printf("Error: division entre cero\n");
        return 0; 
    }
    return a / b;
}