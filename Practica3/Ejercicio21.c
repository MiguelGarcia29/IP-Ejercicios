#include <stdio.h>
int operacion(int, int, int (*)(int, int));

int suma(int a, int b)
{
    return a + b;
}
int resta(int a, int b)
{
    return a - b;
}
int producto(int a, int b)
{
    return a * b;
}
int division(int a, int b)
{
    return a / b;
}

int operacion(int a, int b, int (*operacion)(int, int))
{
    return operacion(a, b);
}

int main()
{

    printf("Introduzca dos numeros: ");
    int a, b;
    scanf("%d %d", &a, &b);

    printf("Introduzca una operacion + - * /: ");
    char op;
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        printf("%d", operacion(a, b, suma));
        break;
    case '-':
        printf("%d", operacion(a, b, resta));
        break;
    case '*':
        printf("%d", operacion(a, b, producto));
        break;
    case '/':
        printf("%d", operacion(a, b, division));
        break;
    default:
        break;
    }
}