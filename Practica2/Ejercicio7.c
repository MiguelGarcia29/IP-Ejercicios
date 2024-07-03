#include <stdio.h>
#include <math.h>

int main()
{

    int dia, mes, anio;

    printf("Introduzca el dia: ");
    scanf("%d", &dia);

    printf("Introduzca el mes: ");
    scanf("%d", &mes);

    printf("Introduzca el anio: ");
    scanf("%d", &anio);

    switch (mes)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:

        if (dia > 31 || dia < 1)
            printf("La fecha no es valida");
        else
            printf("La fecha es valida");

        break;
    case 4:
    case 6:
    case 9:
    case 11:
        if (dia > 30 || dia < 1)
            printf("La fecha no es valida");
        else
            printf("La fecha es valida");

        break;
    case 2:
        if(dia>30|| dia < 1)
            printf("La fecha no es valida");
        else{
            if(dia<29)
                printf("La fecha es valida");
            else{
                if((anio%4==0 && anio%100!=0)||anio%400==0)
                    printf("La fecha es valida");
                else
                printf("La fecha no es valida");
            }
        }
        break;
    default:
        printf("Ese mes no existe");
    }

    return 0;
}