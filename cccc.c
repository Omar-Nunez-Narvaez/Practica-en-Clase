#include <stdio.h>
int sumar(int a, int b);
int main (){
int a,b;

printf("Ingresar el 1er numero: ");
scanf("%d", &a);
printf("Ingresar el 2do numero: ");
scanf("%d", &b);
printf("La suma es: %d", sumar(a,b));

return 0;
}
int sumar (int a, int b){
    return a+b;
}