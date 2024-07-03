#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *f;
    printf("Introduzca el nombre del fichero: ");
    char fichero[11];
    fgets(fichero, 11, stdin);

    if ((f = fopen(fichero, "r")) != NULL)
    {
        fflush(stdin);
        if ((f = fopen(fichero, "a")) != NULL)
        {
            printf("Introduzca caracteres y * para terminar");
            char c;
            while ((c = getchar()) != '*')
            {
                fputc(c, f);
            }
        }
        fclose(f);
    }

    else
    {
        printf("ESE FICHERO NO EXISTE");
    }
}