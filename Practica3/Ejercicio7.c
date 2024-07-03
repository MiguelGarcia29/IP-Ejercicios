#include <stdio.h>

float suma_terminos(int n);

//cabecera: float suma_terminos(int n);
//precondicion: n debe ser un numero positivo;
//postcondicion: devuele la suma de 1 + 1/2 + ... +1/n

float suma_terminos(int n){

    float sumatorio = 0;

    for(int i=1; i<=n; i++){
        sumatorio += 1.0/i;
    }

    return sumatorio;
}


int main(){

    int n;
    printf("Introduzca el valor de n para calcular la suma: ");

    scanf("%d",&n);

    float suma = suma_terminos(n);

    printf("El resultado es %f ",suma);

    return 0;
}