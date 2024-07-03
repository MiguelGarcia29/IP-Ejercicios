#include <stdio.h>
#define N 3

void rellenarMatrizCero(int m[][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            
                m[i][j] = 0;
            
        }
    }
}

void productoMatrices(int m[][N], int n[][N], int p[][N])
{

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < N; k++)
            {
                p[i][j] += m[i][k] * n[k][j];
            }
        }
    }
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

    int m[N][N],n[N][N],p[N][N];

    rellenarMatriz(m);
    rellenarMatriz(n);
    rellenarMatrizCero(p);

    productoMatrices(m,n,p);
    mostrarMatriz(p);

}