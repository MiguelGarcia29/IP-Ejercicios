#include <stdio.h>

int main()
{
    FILE *f;
    char c;
    if ((f = fopen("myfile.txt", "r")) != NULL)
    {
        while (!feof(f))
        {
            c = fgetc(f);
            putchar(c);
            
        }
    }
    else
        printf("Error de apertura");
    fclose(f);
}