#include <stdio.h>
#include <math.h>

int sonAmigos(int, int);
int add_divisors(int);

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

// cabecera: int sonAmigos(int n1,int n2);
// precondicion: dos numero positivo
// postcondicion: devuelve 1 si son amigos y 0 si no
int sonAmigos(int n1, int n2)
{
    int divisoresn1 = add_divisors(n1) - n1;
    int divisoresn2 = add_divisors(n2) - n2;

    return divisoresn1 == divisoresn2;
}

int main()
{
    printf("Introduzca dos enteros: ");
    int n1,n2;
    scanf("%d %d",&n1,&n2);

    if(sonAmigos(n1,n2)){
        printf("Son amigos");
    }else{
        printf("No son amigos");
    }
    
}
