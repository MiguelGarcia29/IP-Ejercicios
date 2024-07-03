#include <math.h>
#include <stdio.h>

int main(){

    int sumatorio = 0;
    int n;
    printf("Introduzca un numero para calcular su sumatorio\n");
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
        sumatorio *= i;

    printf("El sumatorio es %d",sumatorio);
    return 0;
}