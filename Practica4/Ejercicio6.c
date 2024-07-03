#include <stdio.h>

int main(){

    int vector[4]={1, 7, 3, 4};
    int n= *vector  + (* (vector + 1));
    int a = *(vector + 3);

    printf("%d %d",n,a);

    

}