#include <stdio.h>

int main(){
    printf("Introduzca la cantidad de segundos\n");

    int segundos;
    scanf("%d",&segundos);
    printf("Son %.2lf horas\n", segundos/3600.0);
    printf("Son %.2lf minutos\n", segundos/60.0);


    return 0;
}