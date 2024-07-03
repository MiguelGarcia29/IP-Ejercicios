#include <stdio.h>
#include <math.h>

int main()
{

    int d;

    printf("Introduzca un dia de la semana: ");
    scanf("%d", &d);

    switch (d)
    {

    case 1:
        printf("LUNES");
        break;
    case 2:
        printf("MARTES");
        break;
    case 3:
        printf("MIERCOLES");
        break;
    case 4:
        printf("JUEVES");
        break;
    case 5:
        printf("VIERNES");
        break;
    case 6:
        printf("SABADO");
        break;
    case 7:
        printf("DOMINGO");
        break;
    default:
        printf("Esa dia no existe");
    }

    return 0;
}