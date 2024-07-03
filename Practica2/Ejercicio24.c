#include <math.h>
#include <stdio.h>

int main()
{

    int raiz, esPrimo;
    int numero, rango;
    printf("Introduzca un numero\n");
    scanf("%d", &rango);
    printf("Los primos encontrados entre el 1 y %d son: ", rango);
    for (int j=1;j<=rango;j++)
    {
        numero = j;
        esPrimo = 1;
        raiz = sqrt(numero);

        for (int i = 2; i <= raiz && esPrimo; i++)
            if (numero % i == 0)
            {
                esPrimo = 0;
            }

        if (esPrimo)
            printf("%d ",numero);
    }
    return 0;
}