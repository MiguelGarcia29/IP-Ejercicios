#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        printf("--Tabla del %d--\n",i);
        for (int j = 1; j <= 10; j++)
            printf("%d * %d = %d\n", i, j, i * j);
        system("PAUSE");
    }

    return 0;
}