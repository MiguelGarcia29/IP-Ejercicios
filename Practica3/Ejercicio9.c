#include <stdio.h>
#include <math.h>

int obtenerFactorial(int);
float calcularSerie(int);

// cabecera: int obtenerFactorial (int x);
// precondicion:
// postcondicion: devuelve el factorial de un numero
int obtenerFactorial(int x){
    int a = 1;

    for(int i=1;i<=x;i++){

        a *= i;

    }

    return a;
}

// cabecera: int calcularSerie (int rango);
// precondicion: 
// postcondicion: calcula la serie
float calcularSerie(int rango)
{

    float sumatorio = 0;

    for(int i=1;i<=rango;i++){
        sumatorio += 1.0/obtenerFactorial(i);
    }

    return sumatorio;
}

int main()
{
    int n;
    printf("Inserte el valor de n ");
    scanf("%d",&n);

    printf("El resultado es %f",calcularSerie(n));

    return 0;
}