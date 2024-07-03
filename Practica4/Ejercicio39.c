#include <stdlib.h>
#include <stdio.h>

int main()
{

    printf("Introduzca el tamaño del vector: ");
    int tamanio;
    scanf("%d", &tamanio);

    int *vector;
    vector = (int *)malloc(tamanio * sizeof(int));

    for (int i = 0; i < tamanio; i++)
    {

        scanf("%d", &vector[i]);
    }
    int n = tamanio;
    for (int i = 0; i < tamanio; i++)
    {
        for (int j = i+1; j < tamanio;j++)
        {
            if (vector[i] == vector[j])
            {
                for (int x = j; x < tamanio - 1; x++)
                {
                    vector[x] = vector[x + 1];
                }

               

                tamanio--;
            }


        }
    }

    vector = (int *)realloc(vector, tamanio * sizeof(int));

    for (int i = 0; i < tamanio; i++)
    {

        printf("%d ", vector[i]);
    }
}
