#include <stdio.h>

main () {
	int num1 = {0};
	printf ("Introduce un numero\n");
	scanf ("%d", &num1);
	fflush (stdin);
	if (num1 % 3 == 0)
		printf ("El numero es multiplo de 3");
	else 
		printf ("El numero no es multiplo de 3");
		
	return 0;
}
