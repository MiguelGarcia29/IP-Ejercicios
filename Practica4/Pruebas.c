#include <stdio.h>
#include <stdlib.h>

int paridad(int **lista, int tamanio)
{
    int cantidadUnos = 0;
    for (int i = 0; i < tamanio; i++)
    {
        if (lista[i] == 1)
        {
            cantidadUnos++;
        }
    }

    *lista = (int *)realloc(*lista, (tamanio + 1) * sizeof(int));
    if (*lista != NULL)
    {
        if (cantidadUnos % 2 == 0)
        {
            (*lista)[tamanio] = 0;
        }
        else
        {
            (*lista)[tamanio] = 1;
        }
    }
}

int imprimir(int *v, int t)
{
    for (int i = 0; i < t; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main()
{

    int *lista;
    int tamanio = 8;
    lista = (int *)malloc(tamanio * sizeof(int));

    for (int i = 0; i < tamanio; i++)
    {
        lista[i] = rand() % 2;
    }

    imprimir(lista, tamanio);
    paridad(&lista, tamanio);
    imprimir(lista, tamanio + 1);
}
