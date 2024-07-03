#include <stdio.h>
#include <math.h>

int main(){

    double a,b;
    char op;

    printf("Introduzca un numero: ");
    scanf("%lf",&a);
    printf("Introduzca otro numero: ");
    scanf("%lf",&b);
    printf("Introduzca la operacion a realizar (+, -, /, *, %%):");
    scanf(" %c",&op);

    switch(op){

        case '+':
                printf("%.2lf + %.2lf = %.2lf\n",a,b,a+b);
                break;
        case '-':
                printf("%.2lf - %.2lf = %.2lf\n",a,b,a-b);
                break;
        case '*':
                printf("%.2lf * %.2lf = %.2lf\n",a,b,a*b);
                break;
        case '/':
                if(b!=0)
                    printf("%.2lf / %.2lf = %.2lf\n",a,b,a/b);
                else
                    printf("No puedo dividir %.2lf / 0\n",a);
                if(a!=0)
                    printf("%.2lf / %.2lf = %.2lf\n",b,a,b/a);
                else
                    printf("No puedo dividir %.2lf / 0\n",b);
                break;
        /*case '%':
                if(b!=0)
                    printf("%.2lf %% %.2lf = %.2lf",a,b,a%b);
                else
                    printf("No puedo calcular %.2lf %% 0",a);
                if(a!=0)
                    printf("%.2lf %% %.2lf = %.2lf",b,a,b%a);
                else
                    printf("No puedo calcular %.2lf %% 0",b);
                break;
        */
       default:
                printf("Esa operación no esta permitida");

    }

    return 0;
}