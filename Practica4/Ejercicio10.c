#include <stdio.h>
#define N 3

void rellenarMatriz(double m[][N])
{

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("Introduzca el valor nº%d%d: ", i, j);
            scanf("%lf", &m[i][j]);
        }
    }
}

void traspuesta(double m[][N], double t[][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            t[i][j] = m[j][i];
    }
}

void mostrarMatriz(double m[][N]){
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            printf("%lf  ",m[i][j]);
        printf("\n");
    }
}

int main()
{
    double m[N][N], t[N][N];
    rellenarMatriz(m);
    mostrarMatriz(m);
    traspuesta(m,t);
    mostrarMatriz(t);

    return 0;
}