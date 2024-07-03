#include <stdio.h>

int main()
{

    printf("Introduzca dos numeros enteros\n");
    int n1, n2;

    scanf("%d%d", &n1, &n2);

    printf("Suma %d + %d =  %d\n", n1, n2, n1 + n2);
    printf("Resta %d - %d =  %d\n", n1, n2, n1 - n2);
    printf("Resta %d - %d =  %d\n", n2, n1, n2 - n1);
    printf("Multiplicacion %d * %d =  %d\n", n1, n2, n1 * n2);
    printf("Division %d / %d = %lf\n", n1, n2, (double)n1 / n2);
    printf("Division %d / %d = %lf\n", n2, n1, (double)n2 / n1);
    printf("Resto %d %% %d = %d\n", n1, n2, n1 % n2);
    printf("Resto %d %% %d = %d\n", n2, n1, n2 % n1);

    return 0;
}
