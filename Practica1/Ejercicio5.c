#include <stdio.h>

int main(){
    printf("Introduzca una letra, un numero entero y dos reales:\n");
    
    char letra;
    int entero;
    float decimal;
    double real;

    scanf("%c%d%f%lf",&letra,&entero,&decimal,&real);
    printf("La letra introducida es %c\n", letra);
    printf("El numero entero es el %d\n", entero);
    printf("El numero decimal primero es %f\n", decimal);
    printf("El numero real es %lf\n", real);

    return 0;
}