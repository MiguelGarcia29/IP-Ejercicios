#include <math.h>
#include <stdio.h>

int main(){

    int h,m,s;

    printf("Introduzca la/s hora/s: ");
    scanf("%d",&h);
    printf("Introduzca lo/s minuto/s: ");
    scanf("%d",&m);
    printf("Introduzca lo/s segundo/s: ");
    scanf("%d",&s);

    s ++;

    if(s >= 60){
        m += s/60;
        s %= 60;
        
    }

    if(m >= 60){
        h += m/60;
        m %= 60;
    }

    printf("La hora aumentando un segundo es %d:%02d:%02d",h,m,s);

}