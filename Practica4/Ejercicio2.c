#include <stdio.h>
#define N 10

void inicializarVector(int[], int);
int sumarVectores(int[], int);

// cabecera: void inicializarVector(int[] v);
// precondicion:
// postcondicion:
void inicializarVector(int vec[], int TAMANIO)
{
    for (int i = 0; i < TAMANIO; i++)
    {
        printf("Introduzca el elemento %d: ",i);
        scanf("%d", &vec[i]);
        
    }
}
// cabecera: void void sumarVectores(int[]);
// precondicion:
// postcondicion:
int sumarVectores(int v[], int TAMANIO)
{
    int sumatorio = 0;
    for (int i = 0; i < TAMANIO; i++)
    {
        sumatorio += v[i];
    }

    return sumatorio;
}

int main()
{

    int v[N];

    inicializarVector(v, N);
    printf("La suma es %d\n", sumarVectores(v, N));

    return 0;
}