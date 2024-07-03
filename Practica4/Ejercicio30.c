#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char ingles[40];
    char espanio[40];
} Palabra;

Palabra generarPalabra();

Palabra generarPalabra()
{
    Palabra palabra;
    printf("Inserta la palabra en ingles: ");
    fgets(palabra.ingles, 40, stdin);
    fflush(stdin);
    printf("Inserta la palabra en español: ");
    fgets(palabra.espanio, 40, stdin);
    fflush(stdin);
    return palabra;
}

void introducirPalabras(Palabra diccionario[])
{

    for (int i = 0; i < 5; i++)
    {
        printf("Palabra en ingles: ");
        fgets(diccionario[i].ingles, 40, stdin);
        fflush(stdin);
        printf("Palabra en español: ");
        fgets(diccionario[i].espanio, 40, stdin);
        fflush(stdin);
    }
}

char *traducirPalabra(Palabra diccionario[], char palabra[])
{
    char *traduccion;
    int encontrado = 1;
    for (int i = 0; i < 5 && encontrado; i++)
    {
        if (strcmp(palabra, diccionario[i].ingles) == 0)
        {
            encontrado = 0;
            traduccion = diccionario[i].espanio;
        }
    }

    if(encontrado==1)
        traduccion = "NO ENCONTRADA";

    return traduccion;
}

int main()
{

    Palabra diccionario[5];
    char palabra[40];
    introducirPalabras(diccionario);
    do
    {
        printf("Introduzca una palabra: ");

        fgets(palabra, 40, stdin);
        fflush(stdin);
        printf("Traduccion: %s\n", traducirPalabra(diccionario, palabra));

    } while (strcmp(palabra, "FIN\n") != 0);

    return 0;
}
