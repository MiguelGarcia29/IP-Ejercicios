#include <stdio.h>

int main()
{

    printf("Introduzca tres numeros enteros\n");
    int n1, n2, n3;

    scanf("%d%d%d",&n1,&n2,&n3);
    printf("La media aritmetica es %.2lf",(n1+n2+n3)/3.0);

    return 0;
}