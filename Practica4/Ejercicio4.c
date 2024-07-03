#include <stdio.h>
#define N 20

void inicializarVector(double[], int);
void normalizarResultadoVector(double[], int);
void normalizarResultadoEnNuevoVector(double[], int, double[]);
double valorMasGrandeVector(double[], int);

// cabecera: void inicializarVector(int[] v);
// precondicion:
// postcondicion:
void inicializarVector(double vec[], int TAMANIO)
{
    for (int i = 0; i < TAMANIO; i++)
    {
        printf("Introduzca el elemento %d: ", i);
        scanf("%lf", &vec[i]);
    }
}

void leerVector(double vec[], int TAMANIO)
{
    for (int i = 0; i < TAMANIO; i++)
    {
        printf("%lf ", vec[i]);
    }
    printf("\n");
}

// cabecera: double valorMasGrandeVector(double [] v,int t);
// precondicion: recibe un vector inicializado y su tamanio
// postcondicion:
double valorMasGrandeVector(double v[], int t)
{

    double max = v[0];

    for (int i = 1; i < t; i++)
    {
        if (v[i] > max)
            max = v[i];
    }
    return max;
}

// cabecera:void normalizarResultadoVector(double[], int);
// precondicion: recibe un vector inicializado y su tamanio
// postcondicion:
void normalizarResultadoVector(double v[], int t)
{

    double max = valorMasGrandeVector(v, t);
    for (int i = 0; i < t; i++)
    {
        v[i] = max / v[i];
    }
}

void normalizarResultadoEnNuevoVector(double v[], int t, double s[])
{

    double max = valorMasGrandeVector(v, t);
    for (int i = 0; i < t; i++)
    {
        s[i] = max / v[i];
    }
}

int main()
{

    double v[N];

    inicializarVector(v, N);
    leerVector(v, N);
    double s[N];

    normalizarResultadoEnNuevoVector(v, N, s);
    printf("\n");
    leerVector(s, N);
    normalizarResultadoVector(v, N);
    printf("\n");
    leerVector(v, N);

    return 0;
}