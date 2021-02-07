#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE * file;
    char aux;
    char aux1 [101]="";
    aux=' ';
    file = fopen("/Users/rafaelgarcia/Desktop/DAM1/DAM1/leer.txt","r");
    if (file == NULL)
        printf("No se ha podido abrir el fichero");
    while (aux != EOF){
        aux = fgetc(file);
        printf("%c",aux);
    }
    printf ("\n");
    fclose(file);
    file = fopen("/Users/rafaelgarcia/Desktop/DAM1/DAM1/leer.txt","r");
    if (file == NULL)
        printf("No se ha podido abrir el fichero");
    while (!feof(file)){
        fgets(aux1, 100, file);
        printf("%s",aux1);
    }
    printf ("\n");
    fclose(file);
//    system ("pause");
    return 0;
}
