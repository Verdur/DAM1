#include <stdio.h>

main () {
	int num1 = {0}, num2 = {0}, num3 = {0};
	printf ("Introduce un numero\n");
	scanf ("%d", &num1);
	fflush (stdin);
	printf ("Introduce otro numero\n");
	scanf ("%d", &num2);
	fflush (stdin);
	printf ("¿Cuanto es la suma de estos numeros?\n");
	scanf ("%d", &num3);
	fflush (stdin);
	if (num3 == num1 + num2)
		printf ("CORRECTO");
	else 
		printf ("INCORRECTO");
		
	return 0;
}
