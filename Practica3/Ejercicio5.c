#include <stdio.h>

void intercambiarValores(int*,int*);

//cabecera: void intercambiarValores(int* a,int* b);
//precondicion:
//postcondicion: intercambia los valores
void intercambiarValores(int* a,int* b){

    int aux = *a;
    *a = *b;
    *b = aux;

}

int main(){

    int f,r;
    printf("Introduzca dos enteros: ");
    scanf("%d %d",&f,&r);

    

    printf("Has introducido %d %d\n",f,r);
    intercambiarValores(&f,&r);
    printf("Orden intercambiado %d %d\n",f,r);

    return 0;
}