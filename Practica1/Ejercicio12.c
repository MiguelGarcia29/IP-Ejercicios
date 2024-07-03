#include <stdio.h>

int main(){

    double celsius;

    printf("Introduzca la temperatura en Celsius\n");
    scanf("%lf",&celsius);

    printf("El valor de la temperatura en Fahrenheit es %.2lf",(9/5.0)*celsius+32);


    return 0;
}