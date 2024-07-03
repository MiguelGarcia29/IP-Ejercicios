#include <math.h>
#include <stdio.h>

int main(){

    int usuario,i;
    i=0;
    double sumatorio=0;

    do{
        printf("Introduzca numeros para calcular su media o un numero negativo o nulo para terminar\n");
        scanf("%d",&usuario);

        if(usuario>0){
            i++;
            sumatorio+=usuario;
        }
    }while(usuario > 0);

    printf("La media es %.2lf",sumatorio/i);

    return 0;
}