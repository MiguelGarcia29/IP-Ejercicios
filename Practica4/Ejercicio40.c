#include <stdlib.h>
#include <stdio.h>

void paridad(int **v, int n);
void imprimir(int *v, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", v[i]);
    }
}
// cabecera: void paridad(int **lista, int tamanio);
// precondicion: lista ha de ser dinamica
// postcondicion: añade un bit 0 o 1 dependiendo de la paridad de la lista
void paridad(int **lista, int tamanio)
{

    int numDe1 = 0;
    for (int i = 0; i < tamanio; i++)
    {
        if ((*lista)[i] == 1)
            numDe1++;
    }

    *lista = (int *)realloc(*lista, (tamanio + 1) * sizeof(int));

    if (numDe1 % 2 == 0)
    {
        (*lista)[tamanio] = 0;
    }
    else
    {
        (*lista)[tamanio] = 1;
    }
}

int main()
{

    int *lista;
    int tamanio = 8;
    lista = (int *)malloc(tamanio * sizeof(int));

    // RELLENO LA LISTA CON 1 y 0 aleatorios
    if (lista != NULL)
    {
        for (int i = 0; i < 8; i++)
        {
            *(lista + i) = rand() % 2;
        }
    };

    imprimir(lista, tamanio);
    printf("\n\n");
    paridad(&lista, tamanio);

    imprimir(lista, tamanio + 1);
}