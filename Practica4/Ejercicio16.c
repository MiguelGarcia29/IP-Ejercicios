#include <stdio.h>
#define N 8

void generarCuadradoLatino(int n[][N], int t);
void mostrarMatriz(int n[][N], int t);

// cabecera:
// precondicion:
// postcondicion:
void generarCuadradoLatino(int m[][N], int tamanio)
{

    // PRIMERA FILA
    for (int j = 1; j < tamanio+1; j++)
    {
        m[0][j-1] = j;
    }
    //SIGUIENTES FILAS
    for(int i=1;i<tamanio;i++){
        for(int j=0;j<tamanio-1;j++){
            m[i][j]=m[i-1][j+1];
        }
        m[i][tamanio-1]=0;
    }
}

void mostrarMatriz(int n[][N], int t){
    for(int i=0;i<t;i++){
        for(int j=0;j<t;j++){
            printf("%d ",n[i][j]);
        }
        printf("\n");
    }
}

int main(){

    int tamanioMatriz = 9;

    int m[N][N];
    generarCuadradoLatino(m,N);
    mostrarMatriz(m,N);
}