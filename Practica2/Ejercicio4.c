#include <stdio.h>

int main()
{

    int n1, n2;

    printf("Introduzca dos numeros:\n");
    scanf("%d%d", &n1, &n2);

    if (n2 == 0)
        printf("%d no es divisible por %d\n", n1, n2);
    else if (n1 % n2 == 0)
        printf("%d es divisible por %d\n", n1, n2);
    else
        printf("%d no es divisible por %d\n", n1, n2);

    if (n1 == 0)
        printf("%d no es divisible por %d\n", n2, n1);
    else if (n2 % n1 == 0)
        printf("%d es divisible por %d\n", n2, n1);
    else
        printf("%d no es divisible por %d\n", n2, n1);
}