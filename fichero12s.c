#include <stdio.h>

main(){
	FILE * f;
	f = fopen("archivo.txt","r");
	char aux = ' ';
	char aux1 [101] = "";
	if (f == NULL)
		printf("No se ha podido leer el archivo");
	else{
		printf ("1. ");
		while (aux != EOF){
			aux = fgetc(f);
			printf("%c",aux);
		}
	}
	printf ("\n");
	fclose (f);
	
	f = fopen("archivo1.txt","r");
	if (f == NULL)
		printf("No se ha podido leer el archivo");
	else{
		while (!feof(f)){
			fgets (aux1,100,f);
			printf("2. %s",aux1);
		}
	}
	printf ("\n");
	fclose (f);
	system ("pause");
	return 0;
}
