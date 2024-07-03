#include <math.h>
#include <stdio.h>

int main(){

    int sumatorio = 0;

    for(int i=2; i<=1000; i+=2)
        sumatorio += i;

    printf("La suma de los numeros pares entre 2 y 1000 es %d",sumatorio);
    return 0;
}