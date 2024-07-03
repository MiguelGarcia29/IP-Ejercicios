#include <stdio.h>

int main(){
    printf ("Introduzca un caracter. \n");
    char letra;

    scanf("%c", &letra);

    printf("El codigo ASCII es %d y el siguiente caracter alfabeticamente es %c", letra,(char) ((int)letra + 1) );
    return 0;    
}