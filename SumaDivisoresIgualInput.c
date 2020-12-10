#include <stdio.h>

main(){
	int num1 = {0}, i = {0}, suma = {0};
	printf ("Introduzca un numero\n");
	scanf ("%d", &num1);
	fflush (stdin);
	for (i=1;i<=num1-1;++i){
		if (num1 % i == 0)
			suma= i + suma;
	};
	printf ("%d\n", suma);
	if (suma == num1)
		printf ("La suma de los divisores es igual al numero introducido");
	else
		printf ("La suma de los divisores no es igual al numero introducido");
		
	return 0;
	
}
