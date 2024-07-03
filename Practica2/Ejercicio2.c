#include <stdio.h>
#include <math.h>

int main()
{

    printf("Introduzca tres numeros ");
    int n1, n2, n3, aux;

    scanf("%d%d%d", &n1, &n2, &n3);

    if (n1 < n2)
    {
        aux = n1;

        n1 = n2;
        n2 = aux;
    }

    if (n2 < n3)
    {
        aux = n2;

        n2 = n3;
        n3 = aux;

        if (n1 < n2)
        {
            aux = n1;

            n1 = n3;
            n3 = aux;
        }
    }

    printf("%d > %d > %d", n1, n2, n3);

    return 0;
}