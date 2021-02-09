#include <stdio.h>

main(){
	FILE * f;

	char aux = ' ';
	char aux1 [101] = "abc";
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
			gets (aux1);
			fflush (stdin);
			fputs (aux1, f);
		}
		rewind (f);
		printf ("2. ");
		do{
			fgets (aux1,101,f);
			printf("%s",aux1);
		}while (!feof(f));
	}
	printf ("\n");
	fclose (f);
	system ("pause");
	return 0;
}
