#include <stdio.h>
#include <string.h>
#define TAM 50
#define TAM1 50

void subcadenas (char cadena[], char cadena2[]);
main(){
	char cadena [TAM] = "", cadena2 [TAM1] = "";
	gets (cadena);
	fflush (stdin);
	gets (cadena2);
	fflush (stdin);
	subcadenas (cadena,cadena2);
	
	system ("pause");
	return 0;
}

void subcadenas (char cadena[], char cadena2[]){
	
	 if (strstr(cadena,cadena2))
	 	printf("Ocurrencia encontrada");
	
	
	return;
}
