#include <math.h>
#include <stdio.h>

int main(){

    int n1,n2,aux;

    printf("Introduzca dos numeros para calcular el MCD: ");
    scanf("%d%d",&n1,&n2);

    int sigueBuscando = 1;

    int actual = n1;
    int anterior = n2;

    while (sigueBuscando){
        aux = actual%anterior;
        if(aux){
            actual = anterior;
            anterior = aux;
        }else{
            sigueBuscando=0;
        }
    }

    printf ("El MCD es %d", anterior);
    return 0;
}