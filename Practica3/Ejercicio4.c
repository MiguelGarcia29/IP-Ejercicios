#include <stdio.h>

int main(){

    int f;
    printf("Introduzca un entero: ");
    scanf("%d",&f);

    int* r = &f;

    printf("La direccion del entero es %p y su contenido %d\n",&f,f);
    printf("La direccion del puntero es %p y su contenido %p\n",&r,r);
    printf("El valor referenciado del puntero es: %d\n",*r);

    return 0;
}