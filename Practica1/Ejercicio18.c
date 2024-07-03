#include <stdio.h>
#include <math.h>

int main(){
    double x1,x2,y1,y2;

    printf("Introduzca el valor de x1:\n");
    scanf("%lf",&x1);
    printf("Introduzca el valor de y1:\n");
    scanf("%lf",&y1);
    printf("Introduzca el valor de x2:\n");
    scanf("%lf",&x2);
    printf("Introduzca el valor de y2:\n");
    scanf("%lf",&y2);

    printf("La distrancia entre los dos puntos es de %.2lf\n",sqrt(pow((x2-x1),2)+pow((y2-y1),2)));

    return 0;
}