#include <stdio.h>
#include <stdlib.h>


int longitud(char *c);

// cabecera: int longitud (char *c);
// precondicion:
// poscondicion: devuelve la cantidad de caracteres de la cadena

int longitud(char *c)
{
    int i=0;
    while(c[i] != '\0' && c[i] != '\n'){
        i++;
    }

    return i;
}

int main()
{

    char c[21];
    printf("introduzca la cadena:\n");
    fgets(c, 21, stdin);
    printf("La cantidad de caracteres son: %d",longitud(c));
}