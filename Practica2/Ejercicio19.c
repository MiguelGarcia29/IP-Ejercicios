#include <math.h>
#include <stdio.h>

int main(){
    char c;
    int cantidadDigitos=0;
    printf("Introduzca un numero: ");
    while ((c=getchar())!='\n'){
        cantidadDigitos++;
    }

    printf("El tamaño de ese numero es de %d digitos", cantidadDigitos);
}