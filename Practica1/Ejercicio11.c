#include <stdio.h>
#define PI 3.14

int main(){

    double frecuencia, inductancia;

    printf("Introduzca el valor del inductor y de la frecuencia\n");
    scanf("%lf%lf",&inductancia,&frecuencia);

    printf("El valor de la resistencia inducida es %.2lf",2*PI*frecuencia*inductancia);


    return 0;
}