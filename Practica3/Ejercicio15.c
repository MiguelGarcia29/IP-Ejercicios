#include <stdio.h>
#include <math.h>

/*void calcularBinario(int decim){
    int dividir = decim;
    while(dividir/2>=1){

        printf("%d",dividir%2);
        dividir/=2;
    }
    printf("%d\n",dividir);

}*/

void calcularBinario(int);

// cabecera void calcularBinario(int decim);
// precondicion: numeroPositivo;
// postcondicion: devuelveElNumeroEnBinario;

void calcularBinario(int decim)
{
    // log2(x)=log10(x)/log10(2)
    int tamanioNum = log10(decim) / log10(2);

    for (int i = tamanioNum; i >= 0; i--)
    {

        if (decim >= pow(2, i))
        {
            printf("1");
            decim -= pow(2, i);
        }
        else
        {
            printf("0");
        }
    }
    printf("\n");
}
// CALCULO EL LOGARITMO EN BASE 2 PARA VER EL TAMAÑO
// HAGO UN BUCLE QUE USANDO METODO DE PESO ME VAYA DICIENDO SI VA UN 1 O NO

int main()
{

    for (int i = 0; i < 5; i++)
    {
        if (i > 0)
            calcularBinario(i);
        else
            printf("0\n");
    }
}