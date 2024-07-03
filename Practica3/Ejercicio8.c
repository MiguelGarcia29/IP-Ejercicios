#include <stdio.h>
#include <math.h>

int obtenerPotencia(int, int);
int calcularSerie(int, int);

// cabecera: int obtenerPotencia (int b,int e);
// precondicion:
// postcondicion: devuelve la potencia dado la base y exponente
int obtenerPotencia(int b, int e)
{
    return pow(b, e);
}

// cabecera: int calcularSerie (int x,int veces);
// precondicion:
// postcondicion: calcula la serie
int calcularSerie(int x, int veces)
{
    int sumatorio = 0;
    int exponenteActual = 1;

    for (int i = 0; i < veces; i++)
    {
        if (i % 2 == 0)
        {
            sumatorio += obtenerPotencia(x, exponenteActual);
        }else{
            sumatorio -= obtenerPotencia(x,exponenteActual);
        }

        exponenteActual+=2;
    }

    return sumatorio;
}

int main()
{
    int x,n;
    printf("Inserte el valor de x y el tamaño de la sucecion");
    scanf("%d%d",&x,&n);

    printf("El resultado es %d",calcularSerie(x,n));

    return 0;
}