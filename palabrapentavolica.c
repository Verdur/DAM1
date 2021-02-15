#include <stdio.h>
#include <string.h>
#define TAM 10


void peticion (int * input);
int validacion (int conta,int conte, int conti, int conto, int contu);
main (){
	int casos = {0}, lon = {0},i={0},f={0},j={0},contA = {0},contE = {0},contI = {0},contO = {0},contU = {0};
	char cadena [TAM] = "";
	peticion (&casos);
	for (i=1;i<=casos;++i){
		gets (cadena);
		lon = strlen(cadena);
		contA = 0;
		contE = 0;
		contI = 0;
		contO = 0;
		contU = 0;
		for(f=0;f<lon;++f){
			switch (cadena[f]){
				case 'a' :
				case 'A' : contA++;
							break;
				case 'e' :
				case 'E' : contE++;
							break;
				case 'i' :
				case 'I' : contI++;
							break;
				case 'o' :
				case 'O' : contO++;
							break;
				case 'u' :
				case 'U' : contU++;
							break;
				default : printf("");
			}
		}
		if (validacion (contA,contE,contI,contO,contU) > 0)
			printf ("SI\n");
		else
			printf ("NO\n");
	}
	system("pause");
	return 0;
}

void peticion (int * input){
	scanf ("%d",&*input);
	fflush (stdin);
	return;
}

int validacion (int conta,int conte, int conti, int conto, int contu){
	int ok = {0};
	if (conta >0 && conte > 0 && conti > 0 && conto > 0 && contu >0)
		ok++;
	return ok;
}
