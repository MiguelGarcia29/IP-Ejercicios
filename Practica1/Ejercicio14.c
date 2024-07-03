#include <stdio.h>
#include <math.h>

int main(){

    printf("Introduzca un numero\n");

    int numero;
    scanf("%d",&numero);
    printf("%d elevado a 2 = %lf\n",numero,pow((double)numero,2.0));
    printf("%d elevado a 3 = %lf\n",numero,pow((double)numero,3.0));
    printf("2 elevado a %d = %lf\n",numero,pow(2.0,(double)numero));
    printf("3 elevado a %d = %lf\n",numero,pow(3.0,(double)numero));

    return 0;
}