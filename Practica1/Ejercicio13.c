#include <stdio.h>

int main()
{

    int horas;
    double precioporhora;

    printf("Introduzca las horas trabajadas\n");
    scanf("%d", &horas);

    printf("Introduzca el precio por hora\n");
    scanf("%lf", &precioporhora);

    printf("Su salario neto es %.2lf€",(precioporhora*horas)*0.9);

    return 0;
}