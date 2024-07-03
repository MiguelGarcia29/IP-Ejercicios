#include <math.h>
#include <stdio.h>

void obtenerFactorial(int, int *);
double obtenerBinomio(int, int);

// cabecera: int obtenerFactorial (int x,int*);
// precondicion:
// postcondicion: devuelve el factorial de un numero
void obtenerFactorial(int x, int *f)
{
    int a = 1;

    for (int i = 1; i <= x; i++)
    {

        a *= i;
    }

    *f = a;
}

// cabecera: int obtenerFactorial (int n,int k);
// precondicion: n<=k
// postcondicion: devuelve el factorial de un numero
double obtenerBinomio(int n, int k)
{

    int r1, r2, r3;
    obtenerFactorial(n, &r1);
    obtenerFactorial(k, &r2);
    obtenerFactorial(n-k, &r3);
    double resultado = (double)r1 / (r2 * r3);

    return resultado;
}

int main()
{

    int n, k;
    printf("Introduzca el valor de n: ");
    scanf("%d", &n);

    printf("Introduzca el valor de k: ");
    scanf("%d", &k);

    printf("El resultado es: %lf\n", obtenerBinomio(n, k));

    return 0;
}
