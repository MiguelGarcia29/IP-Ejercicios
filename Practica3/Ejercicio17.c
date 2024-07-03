#include <stdio.h>
#include <math.h>

int tamanioNumero(int n)
{

    int tamanio = 1;
    int sePuedeDividir = 1;
    while (sePuedeDividir)
    {

        if (n / (int)pow(10, tamanio) > 0)
        {
            tamanio++;
        }
        else
        {
            sePuedeDividir = 0;
        }
    }

    return tamanio;
}

//HACER UNA FUNCION QUE DADO UN NUMERO Y UNA POSICION
//DEVUELVA EL DIGITO DONDE SE ENCUENTRA
// n1 digito n2 posicion
int obtenerDigito(int n, int d)
{
    int numero = n;
    int digito=0;
    int tamanio=tamanioNumero(n);
    for (int i = tamanio; i >= d; i--)
    {
        int multiplo10 = pow(10, i-1);
        digito = numero/multiplo10;
        numero -= digito * multiplo10;
        //printf("%d ", digito);
    }

    return digito;
}

int escribirCapicua(int n)
{
    int tamanio = tamanioNumero(n);
    int bucle = tamanio / 2;
    int esCapicua = 1;
    for (int i = 0; i < bucle && esCapicua; i++)
    {
        int n1 = obtenerDigito(n,tamanio - i);
        int n2 = obtenerDigito(n,i+1);
        if (n1 != n2)
        {
            esCapicua = 0;
        }
    }
    return esCapicua;
}

int main()
{
    int n;
    do
    {
        printf("Introduzca numero: ");
        scanf("%d", &n);
        if (escribirCapicua(n))
        {
            printf("Es capicua\n");
        }
        else
        {
            printf("No es capicua\n");
        }
    } while (n != 0);
}