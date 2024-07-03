#include <stdio.h>
#include <math.h>

void add_divisors(int, int *);
int nPerfecto(int);

// cabecera: int add_divisors2(int num,int*p);
// precondicion: un numero positivo
// postcondicion: devuelve la suma de los divisores
void add_divisors(int num, int *p)
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

// cabecera: int nPerfecto(int num);
// precondicion: un numero positivo
// postcondicion: devuelve 1 si es perfecto y 0 si no
int nPerfecto(int num){
    int divisores;
    add_divisors(num,&divisores);
    divisores-=num;

    return divisores==num;

}

int main()
{
    printf("Son numeros perfectos: ");
    for(int i=1;i<1000;i++){

        if(nPerfecto(i)){
            printf("%d, ",i);
        }

    }
}
