#include <stdio.h>
#include <math.h>

int main()
{

    double a, b, c, discriminante;

    printf("Introduzca el valor de a:\n");
    scanf("%lf", &a);

    printf("Introduzca el valor de b:\n");
    scanf("%lf", &b);

    printf("Introduzca el valor de c:\n");
    scanf("%lf", &c);

    discriminante = pow(b, 2) - (4 * a * c);

    if (discriminante > 0)
    {
        printf("Los resultados de ecuacion son: %lf, %lf", ((-b + sqrt(discriminante)) / (2 * a)), ((-b - sqrt(discriminante)) / (2 * a)));
    }
    else if (discriminante == 0)
    {
        printf("Esta ecuacion solo tiene un resultado, %lf", -b / (2 * a));
    }
    else
    {
        printf("No puedo resolver esta ecuacion");
    }

    return 0;
}