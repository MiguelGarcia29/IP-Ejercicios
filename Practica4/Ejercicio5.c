#include <stdio.h>
#define N 5

void leerVector(int *);
void maximo(int *,int *);

//cabecera void leerVector(int *vector)
//precondicion:
//postcondicion:
void leerVector(int *v){
    for(int i =0;i<N;i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

//cabecera: void maximo(int *vector,int *maximo)
//precondicion:
//postcondicion:
void maximo(int *vector,int *maximo){
    int max = vector[0];
    for (int i=1;i<N;i++){
        if (max<vector[i]){
            max = vector[i];
        }
    }

    *maximo = max;

}

void inicializarVector(int *vec)
{
    for (int i = 0; i < N; i++)
    {
        printf("Introduzca el elemento %d: ", i);
        scanf("%d", &vec[i]);
    }
}


int main(){

    int v[N];
    int max;

    inicializarVector(v);
    leerVector(v);
    maximo(v,&max);
    printf("El maximo es %d",max);




    return 0;
}

