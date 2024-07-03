#include <stdio.h>

void escribirTriangulo(int*);

//cabecera: void escribirTriangulo(int f);
//precondicion: f >0
//postcondicion: muestra por pantalla un triangulo
void escribirTriangulo(int *f){
    int mostrar = 1;
    for(int i = 1;i<=*f;i++){
        mostrar = i%2==0 ? 0 : 1;
        for(int j=1;j<=i;j++){
            printf("%d",mostrar);
            mostrar =  mostrar == 1 ? 0 : 1;
        }
        printf("\n");
    }
}

int main(){

    int filas;
    do{
        printf("Introduzca el numero de filas: ");
        scanf("%d",&filas);
        escribirTriangulo(&filas);
    }while(filas>0);

    return 0;
}