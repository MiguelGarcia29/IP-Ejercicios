int primer_caracter(char *cad1, char *cad2)
{
    int seEncuentraCaracter=-1;
    for (int i = 0; i < strlen(cad1)&& seEncuentraCaracter==-1; i++)
    {
        for (int j = 0; j < strlen(cad2) && seEncuentraCaracter==-1; j++)
        {
            if (cad1[i] == cad2[j])
            {
                seEncuentraCaracter = j;
            }
        }
    }

    return seEncuentraCaracter;
}
int main(){

    char cad[]="Hola";
    char c[]="Cc";


    printf("Primer caracter encontrado: %d",    primer_caracter(cad,c));

    return 0;
}