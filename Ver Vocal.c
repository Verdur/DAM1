#include <stdio.h>

main () {
	char letra = ' ';
	printf ("Introduce un caracter\n");
	scanf ("%c", &letra);
	fflush (stdin);
	if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' || letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U' )
		printf ("El caracter introducido es una vocal");
	else 
		printf ("El caracter introducido no es una vocal");
		
	return 0;
}
