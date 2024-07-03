#include <stdio.h>
#include <math.h>
#define PI 3.14

int main(){

    printf("Introduzca un radio\n");
    double radio;

    scanf("%lf",&radio);

    printf("El perimetro de la circunferencia es %lf\n", 2*PI*radio);
    printf("El area del círculo es %lf\n", PI*pow(radio,2));
    printf("El volumen de la esfera es %lf\n", 4.0/3 * PI * pow(radio,3) );

    return 0;
}