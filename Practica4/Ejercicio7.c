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

// cabecera void buscarEnVector(int *vector, int x)
// precondicion:
// postcondicion: devuelve la posicion si encontro el elemento el vector o -1 si no está

int buscarEnVector(int *vector, int x)
{

    int encontrado = -1;
    for (int i = 0; i < N && encontrado==-1; i++)
    {
        if (vector[i] == x)
            encontrado = i;
    }

    return encontrado;
}

int main()
{

    int v[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

    int numeroBuscado, posicion;
    do
    {
        printf("Introduzca un numero para buscar o 0 para salir: ");
        scanf("%d", &numeroBuscado);
        if (numeroBuscado != 0)
        {
            posicion = buscarEnVector(v, numeroBuscado);
            if (posicion != -1)
                printf("El %d esta en la posicion %d\n", numeroBuscado, posicion);
            else
                printf("El numero no está\n");
        }
    }while(numeroBuscado!=0);

    return 0;
}