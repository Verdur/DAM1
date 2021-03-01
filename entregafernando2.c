#include <stdio.h>
#include <string.h>
#define TAM 50
#define TAM1 50

void subcadenas (char cadena[], char cadena2[], int* oc);
void subcadenas2 (char cadena[], char cadena2[], int* oc);
main(){
	char cadena [TAM] = "", cadena2 [TAM1] = "";
	int cont = {0};
	gets (cadena);
	fflush (stdin);
	gets (cadena2);
	fflush (stdin);
	//subcadenas (cadena,cadena2,&cont);
	subcadenas2 (cadena,cadena2,&cont);
	printf ("La subcadena aparece %d veces en la cadena principal\n", cont);
	system ("pause");
	return 0;
}

void subcadenas (char cadena[], char cadena2[], int* oc){
	int i = {0},lon = {0};
	lon = strlen(cadena2);
	do{
		if (strstr(cadena,cadena2)){
			cadena = strstr(cadena,cadena2);
			(*oc)++;
			for (i=0;i<lon;++i)
				cadena[i]=' ';
		}	
	}while(strstr(cadena,cadena2));
	return;
}

void subcadenas2 (char cadena[], char cadena2[], int* oc){
	int i = {0},lon = {0};
	lon = strlen(cadena2);
	while(strstr(cadena,cadena2)){
		cadena = strstr(cadena,cadena2);
		(*oc)++;
			for (i=0;i<lon;++i)
				cadena[i]=' ';
	}
	return;
}
