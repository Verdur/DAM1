#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TAM 21

main (){
	char cadena [TAM] = "", cadena2 [TAM] = "";
	printf ("Introduce una cadena de 20 caracteres\n");
	gets (cadena);
	fflush (stdin);
	strcpy(cadena2,cadena);
	strrev(cadena2);
	if(strcmp(cadena,cadena2) == 0)
		printf("Es un palindromo siendo case sensitive\n");
	else
		printf ("No es un palindromo siendo case sensitive\n");
	if (stricmp(cadena,cadena2)==0)
		printf ("Es un palindromo sin ser case sensitive \n");
	else
		printf ("No es un palindromo aun no siendo case sensitive\n");	
	system ("pause");
	return 0;
}
