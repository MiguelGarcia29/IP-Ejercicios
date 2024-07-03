#include <stdio.h>
#include <math.h>

int main(){

    int n;

    printf("Introduzca un numero");
    scanf("%d",&n);

    if(n%2)
        printf("El numero es impar");
    else
        printf("El numero es par");

    return 0;
}