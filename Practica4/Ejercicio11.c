#include <stdio.h>
#define N 3

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

void mostrarMatriz(int m[][N]){
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            printf("%d  ",m[i][j]);
        printf("\n");
    }
}

int main()
{
    int m[N][N], t[N][N];
    rellenarMatriz(m);
    mostrarMatriz(m);
    copiarMatriz(m,t);
    mostrarMatriz(t);

    return 0;
}