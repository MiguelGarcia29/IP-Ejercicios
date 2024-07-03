#include <math.h>
#include <stdio.h>

int main(){

    int actual, anterior, usuario, total;



    printf("Introduzca un numero para calcular la serie de fibonnaci: ");
    scanf("%d",&usuario);

    anterior = 0;
    actual = 1;
    total = 0;

    for(int i=1; i<usuario; i++){
        total = actual + anterior;
        anterior = actual;
        actual = total;
        printf("%d\n",total);
    }

    printf ("El final es %d", total);
    return 0;
}