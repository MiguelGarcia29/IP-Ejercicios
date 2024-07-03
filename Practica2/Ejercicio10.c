#include <math.h>
#include <stdio.h>

int main(){

    int sumatorio = 0;

    for(int i=1; i<=10; i++)
        sumatorio += i;

    printf("La suma de los 10 primeros naturales es %d",sumatorio);
    return 0;
}