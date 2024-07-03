#include <math.h>
#include <stdio.h>

int main(){

    int raiz,esPrimo;
    int numero;
    printf("Introduzca un numero\n");
    scanf("%d",&numero);

    esPrimo = 1;
    raiz = sqrt(numero);

    for(int i=2; i<=raiz && esPrimo; i++)
        if(numero%i==0){
            esPrimo = 0;
        }

    if(esPrimo)
        printf("El numero es primo");
    else
        printf("El numero no es primo");

    return 0;
}