#include <math.h>
#include <stdio.h>

int main(){

    int n1,n2;

    printf("Introduzca un rango de dos numeros: ");
    scanf("%d%d",&n1,&n2);

    for(int i=n1+1; i<n2; i++)
        printf("%d\n",i);

    return 0;
}