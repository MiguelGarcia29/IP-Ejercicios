#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *f1, *f2;

    if ((f1 = fopen("myfile.txt", "r")) != NULL && (f2 = fopen("copia.txt", "w")) != NULL)
    {
        int palabras = 0, caracter = 0, lineas = 0;
        char c;
        while (!feof(f1))
        {
            c = fgetc(f1);

            if (c == ' ' || c == '\n')
            {
                palabras++;
            }
            else
            {
                caracter++;
            }
            if (c == '\n')
            {
                lineas++;
            }

            fputc(c, f2);
        }

        printf("Hay %d palabras", palabras);
        printf("Hay %d caracteres", caracter);
        printf("Hay %d lineas", lineas);
    }
    else
    {
        printf("NO SE PUEDO ABRIR EL ARCHIVO");
    }

    fclose(f1);
    fclose(f2);
}