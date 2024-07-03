#include <stdlib.h>
#include <stdio.h>

void imprimir(char *v, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", v[i]);
    }
}

int main()
{

    char *lista;
    int tamanio = 0;
    lista = (char *)malloc(sizeof(char));
    char caracterActual;
    printf("Escribe una frase:");
    int hayLetra = 1;
    while (hayLetra)
    {
        caracterActual=getchar();
        if (caracterActual != '\n')
        {
            lista[tamanio] = caracterActual;
            tamanio++;
            lista = (char *)realloc(lista, (tamanio+1) * sizeof(char));
        }
        else
        {
            hayLetra = 0;
        }
    }

    imprimir(lista, tamanio);
    printf("\n\n");
}