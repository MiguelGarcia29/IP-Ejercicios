#include <stdio.h>
#define N 10

void inicializarVector(int[], int);
void mostrarVector(int[], int);
void cantidadElementos(int[], int);

// cabecera: void inicializarVector(int[] v);
// precondicion:
// postcondicion:
void inicializarVector(int vec[], int TAMANIO)
{
    for (int i = 0; i < TAMANIO; i++)
    {
        printf("Introduzca el elemento %d: ",i);
        scanf("%d", &vec[i]);
        
    }
}
// cabecera: void void mostrarVector(int[]);
// precondicion:
// postcondicion:
void mostrarVector(int v[], int TAMANIO)
{
    for (int i = 0; i < TAMANIO; i++)
    {
        printf("%d ", v[i]);
    }
}
// cabecera: void cantidadElementos(int[] t,int t);
// precondicion:los elementos del vecor deben ser del 1 al 10
// postcondicion:
void cantidadElementos(int v[], int TAMANIO)
{
    for(int i=1;i<=TAMANIO;i++){
        int cantidad=0;
        for(int j=0;j<TAMANIO;j++){
            if(v[j]==i)
                cantidad++;
        }
        if(cantidad>0)
            printf("Existen %d elementos del numero %d\n",cantidad,i);
    }
}
int main()
{

    int v[N];

    inicializarVector(v, N);
    mostrarVector(v, N);
    cantidadElementos(v,N);

    return 0;
}