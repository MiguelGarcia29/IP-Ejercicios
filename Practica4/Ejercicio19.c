#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// cabecera: int compararCadenas(int *c1,int *c2);
// precondicion:
// postcondicion: devuelve 0 si las cadenas son distintas y 1 si iguales
int compararCadenas(char *c1, char *c2)
{
    return strcmp(c1, c2);
}

void copiarCadenar(char **c1, char *c2)
{
    strcpy(c1,c2);
}

void concatenarCadenas(char **c1, char *c2)
{
    strcat(c1, c2);
}

int longitudCadena(char *c1)
{
    return strlen(c1);
}

int main()
{

    char *c1[20], *c2[20], *c3[20];
    printf("Introduzca cadena 1: ");
    fgets(c1, 10, stdin);
    printf("Introduzca cadena 2: ");
    fgets(c2, 10, stdin);

    printf("Son iguales: %d\n",compararCadenas(c1,c2));
    copiarCadenar(&c3,c1);
    printf("Copiada la cadena c3: %s\n",c3);
    concatenarCadenas(&c1,c2);
    printf("Concatenada c1 con c2 %s\n",c1);
    printf("Tamanio total de c1: %d\n",longitudCadena(c1));

    return 0;
}