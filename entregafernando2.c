#include <stdio.h>
#include <string.h>
#define TAM 50
#define TAM1 50

void subcadenas (char cadena[], char cadena2[], int* oc);
main(){
	char cadena [TAM] = "", cadena2 [TAM1] = "";
	int cont = {0};
	gets (cadena);
	fflush (stdin);
	gets (cadena2);
	fflush (stdin);
	subcadenas (cadena,cadena2,&cont);
	printf ("La subcadena aparece %d veces en la cadena principal\n", cont);
	system ("pause");
	return 0;
}

void subcadenas (char cadena[], char cadena2[], int* oc){
	do{
		if (strstr(cadena,cadena2)){
			cadena = strstr(cadena,cadena2);
			(*oc)++;
			cadena[0]=' ';
			/*printf ("%s",cadena);
			system ("pause");*/
		}	
	}while(strstr(cadena,cadena2));
	return;
}
