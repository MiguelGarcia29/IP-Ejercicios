#include <stdio.h>
#include <math.h>
#define PI 3.14
#define G 9.8

int main(){

    printf("Introduzca una longitud\n");
    double longitud;

    scanf("%lf",&longitud);

    printf("El perio del pendulo es %lf\n", 2*PI*sqrt(longitud/G));

    return 0;
}