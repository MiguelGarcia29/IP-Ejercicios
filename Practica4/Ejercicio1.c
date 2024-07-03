#include <stdio.h>
#define TAMANIO 10

void inicializarVector(int[]);
void mostrarVecotr(int[]);

// cabecera: void inicializarVector(int[] v);
// precondicion:
// postcondicion:
void inicializarVector(int vec[])
{
    for (int i = 0; i < TAMANIO; i++)
    {
        vec[i] = i + 1;
    }
}
// cabecera: void void mostrarVecotr(int[]);
// precondicion:
// postcondicion:
void mostrarVecotr(int v[])
{
    for (int i = 0; i < TAMANIO; i++)
    {
        printf("%d ",v[i]);
    }
}

int main()
{
    int v[TAMANIO];
    inicializarVector(v);
    mostrarVecotr(v);

    return 0;
}