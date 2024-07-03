#include <math.h>
#include <stdio.h>

int main(){

    int resultado = 1;
    int base, exponente;
    printf("Introduzca una base y un exponente para calcularla\n");
    scanf("%d%d",&base,&exponente);

    for(int i=0; i<exponente; i++)
        resultado *= base;

    printf("El resultado es %d",resultado);
    return 0;
}