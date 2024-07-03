#include <stdio.h>
#define N 15

// cabecera void leerVector(int *vector)
// precondicion:
// postcondicion:
void leerVector(int *v)
{
    for (int i = 0; i < N; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");
}

void inicializarVector(int *vec)
{
    for (int i = 0; i < N; i++)
    {
        printf("Introduzca el elemento %d: ", i);
        scanf("%d", &vec[i]);
    }
}

// cabecera void elementosUnicosDeVector(int *vector)
// precondicion:
// postcondicion: muestra por pantalla los elementos unicos de un vector
void elementosUnicosDeVector(int *vector)
{

    int seEncuentraDuplicado = 0;
    for (int i = 0; i < N; i++)
    {
        seEncuentraDuplicado = 0;
        for (int j = 0; j < N && !seEncuentraDuplicado; j++)
        {
            if (i != j && vector[i] == vector[j])
                seEncuentraDuplicado = 1;
        }
        if (!seEncuentraDuplicado)
            printf("%d ", vector[i]);
    }
}

int main()
{

    int v[N] = {1, 2, 3, 4, 5, 11, 7, 8, 5, 10, 8, 12, 11, 14, 15};

    elementosUnicosDeVector(v);

    return 0;
}