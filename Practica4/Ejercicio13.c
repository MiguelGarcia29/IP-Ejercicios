#include <stdio.h>
#define N 3

int esSimetrica(int m[][N], int n[][N]){

    int iguales = 1;
    for(int i =0;i<N&&iguales;i++){
        for(int j=0;j<N&&iguales;j++){
            if(m[i][j]!=n[i][N-1-j])
                iguales = 0;
        }
    }

    return iguales;
}

void rellenarMatriz(int m[][N])
{

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("Introduzca el valor nº%d%d: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
}

void copiarMatriz(int m[][N], int t[][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            t[i][j] = m[i][j];
    }
}

int main(){
    int n[N][N],m[N][N];

    rellenarMatriz(n);
    rellenarMatriz(m);
    printf("Son simetricas %d",esSimetrica(n,m));
}