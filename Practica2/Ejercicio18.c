#include <math.h>
#include <stdio.h>

int main(){
    char c;
    int palabras = 0;
    int caracteres = 0;
    int saltos = 0;
    while ((c=getchar())!='*'){
        if(c==' ')
            palabras ++;
        else if(c=='\n'){
            saltos ++;
            palabras ++;
            }
        else
            caracteres ++;
    }

    printf("Palabras: %d\n",palabras);
    printf("Caracteres: %d\n",caracteres);
    printf("Saltos: %d\n",saltos);
}