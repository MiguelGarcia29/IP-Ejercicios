#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int numero(char *cad)
{
    int tamanio = strlen(cad);
    tamanio--;
    int numero = 0;
    int valorDecimal = 0;
    int suma = 0;
    for (int i = tamanio - 1; i >= 0; i--)
    {

        switch (cad[i])
        {
        case '0':
            suma = 0;
            break;
        case '1':
            suma = 1;
            break;
        case '2':
            suma = 2;
            break;
        case '3':
            suma = 3;
            break;
        case '4':
            suma = 4;
            break;
        case '5':
            suma = 5;
            break;
        case '6':
            suma = 6;
            break;
        case '7':
            suma = 7;
            break;
        case '8':
            suma = 8;
            break;
        case '9':
            suma = 9;
            break;
        default:
            break;
        }

        numero += suma * pow(10,valorDecimal);
        valorDecimal ++;
    }

    return numero;
}

int main(){

    char *cad[10];
    printf("Introduzca una cadena: ");
    fgets(cad,10,stdin);
    printf("El numero es %d",numero(cad));

    return 0;
}