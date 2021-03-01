#include <stdio.h>
#include <string.h>
#define TAM 11
main(){
	FILE * f;

	char aux = ' ';
	char aux1 [TAM] = "abc";
	int i = 0;
	f = fopen("archivo.txt","r+");
	if (f == NULL)
		printf("No se ha podido leer el archivo");
	else{
		for(i=0;i<2;++i){
			scanf("%c",&aux);
			fflush (stdin);
			fputc (aux,f);
			}
		printf ("1. ");
		rewind (f);
		do{
			aux = fgetc(f);
			printf("%c",aux);
		}while (aux != EOF);
	}
	printf ("\n");
	fclose (f);
	
	f = fopen("archivo1.txt","w+");
	if (f == NULL)
		printf("No se ha podido leer el archivo");
	else{
		for(i=1;i<=3;i++){
			do{
			gets (aux1);
			fflush (stdin);
			}while(strlen(aux1)>=TAM);
			fputs (aux1, f);
		}
		rewind (f);
		printf ("2. ");
		do{
			fgets (aux1,TAM,f);
			printf("%s\n",aux1);
		}while (!feof(f));
		rewind(f);
		fseek(f, 1, SEEK_CUR);
		fgets (aux1,2,f);
		printf("%s\n",aux1);
	}
	fclose (f);
	
	system ("pause");
	return 0;
}
