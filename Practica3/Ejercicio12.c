#include <stdio.h>
#include <math.h>

int add_divisors(int);
void add_divisors2(int, int *);

// cabecera: int add_divisors(int num);
// precondicion: un numero positivo
// postcondicion: devuelve la suma de los divisores
int add_divisors(int num)
{

    int suma = 0;

    for (int i = 1; i <= num; i++)
    {

        if (num % i == 0)
        {
            suma += i;
        }
    }

    return suma;
}

// cabecera: int add_divisors2(int num,int*p);
// precondicion: un numero positivo
// postcondicion: devuelve la suma de los divisores
void add_divisors2(int num, int *p)
{

    int suma = 0;

    for (int i = 1; i <= num; i++)
    {

        if (num % i == 0)
        {
            suma += i;
        }
    }

    *p = suma;
}

int main()
{

    printf("Introduzca un numero para calcular la suma de sus divisores: ");
    int n;
    scanf("%d", &n);
    printf("La suma es: %d\n", add_divisors(n));

    int suma;
    add_divisors2(n, &suma);
    printf("La suma es: %d", suma);
}
