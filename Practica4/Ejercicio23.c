#include <stdio.h>
#include <stdlib.h>

int palindromo(char *cad)
{
    int tamanio = 0;
    for (int i = 0; cad[i] != '\n' && cad[i] != '\0'; i++)
        tamanio++;

    int caracterIzq = 0;
    int caracterDer = tamanio - 1;

    int iguales = 1;
    for (int i = 0; i < tamanio / 2 && iguales; i++)
    {
        if (cad[caracterIzq] == ' ')
            caracterIzq++;
        if (cad[caracterDer] == ' ')
            caracterDer--;

        if (cad[caracterIzq] != cad[caracterDer])
            iguales = 0;
        caracterIzq++;
        caracterDer--;
    }
    return iguales;
}

int main()
{
    char *cad[20];

    printf("Introduzca una cadena: ");
    fgets(cad, 20, stdin);
    if (palindromo(cad))
    {
        printf("Es palindromono");
    }
    else
    {
        printf("No es palindromono");
    }
}