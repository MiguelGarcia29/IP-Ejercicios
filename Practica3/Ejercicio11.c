#include <math.h>
#include <stdio.h>

void obtenerFactorial(int);
double obtenerSerie(int, int);
double calcularxFactorial(int,int);

// cabecera: int obtenerFactorial (int x);
// precondicion:
// postcondicion: devuelve el factorial de un numero
void obtenerFactorial(int x,int*s)
{
    int a = 1;

    for (int i = 1; i <= x; i++)
    {

        a *= i;
    }

    *s = a;
}

// cabecera: double calcularxFactorial(int x,int i);
// precondicion:
// postcondicion: calcula x^y/y!

double calcularxFactorial(int x,int i){
    int factorial;
    obtenerFactorial(i * 2,&factorial); 
    pow(x, i * 2) / factorial;
}


// cabecera: int obtenerSerie (int x);
// precondicion:
// postcondicion: devuelve la serie.
double obtenerSerie(int x, int bucle)
{

    double resultado = 1;

    for (int i = 1; i <= bucle; i++)
    {
        if (i % 2 == 0)
        {
            resultado += calcularxFactorial(x,i);
        }else{
            resultado -= calcularxFactorial(x,i);
        }
    }

    return resultado;
}

int main()
{
    int x,bucle;
    printf("Introduzca el valor de x:");
    scanf("%d",&x);
    printf("Introduzca las veces que se repite:");
    scanf("%d",&bucle);

    printf("El resultado es %lf",obtenerSerie(x,bucle));

    return 0;
}