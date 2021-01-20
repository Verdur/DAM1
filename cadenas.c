#include <stdio.h>
#include <string.h>
#define TAM 21
main(){
	char nombre [TAM] = "",nombre2 [TAM] = "";
	char input [TAM]="",input2 [TAM]="";
	int i = {0};
	i = -1;
	printf ("Introduce la primera cadena\n");
	do{
	++i;	
	scanf ("%c",&input[i]);
	fflush (stdin);
	}while(input[i] != ' ');
	strcpy(nombre,input);
	i = -1;
	printf("Introduce la segunda cadena\n");
	do{
	++i;
	scanf ("%c",&input2[i]);
	fflush (stdin);
	}while(input2[i] !=' ');
	strcpy(nombre2,input2);
	//do{
	//	scanf ("$s",&nombre[i]);
	//	++i;
	//}while(i < TAM);
	printf ("%s %s\n",nombre,nombre2);
	if (strcmp (nombre,nombre2) == 0)
		printf ("Son iguales\n");
	else
		printf ("Son diferentes\n");
	system ("pause");
	return 0;
}
