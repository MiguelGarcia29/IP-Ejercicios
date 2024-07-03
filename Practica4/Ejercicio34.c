#include <stdio.h>

int main()
{
    FILE *f;
    char c;
    if ((f = fopen("prueba.txt", "w")) != NULL)
    {

        while ((c = getchar()) != '*')
            fputc(c, f);

        fclose(f);
    }
}