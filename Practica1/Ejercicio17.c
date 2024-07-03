#include <stdio.h>
#include <math.h>

int main()
{

    double a,b,c,d,x;

    printf("Introduzca el valor de a:\n");
    scanf("%lf",&a);

    printf("Introduzca el valor de b:\n");
    scanf("%lf",&b);

    printf("Introduzca el valor de c:\n");
    scanf("%lf",&c);

    printf("Introduzca el valor de d:\n");
    scanf("%lf",&d);

    printf("Introduzca el valor de x:\n");
    scanf("%lf",&x);

    printf("El valor de p(%.2lf) es %.2lf",x,(a*pow(x,3)+b*pow(x,2)+ c*x + d));

    return 0;

}