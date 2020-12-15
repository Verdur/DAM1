#include <stdio.h>

main(){
	int num1 = {0}, contpos = {0}, contneg = {0};
	printf("Introduce un numeros, 0 para parar\n");
	scanf ("%d", &num1);
	fflush (stdin);
	while (num1 !=0){
		if (num1>0)
			++contpos;
		else
			++contneg;
	scanf ("%d", &num1);
	fflush (stdin);	
	}
	printf ("El total de numeros positivos fue de %d y el total de negativos de %d", contpos,contneg);
	
	return 0;
}
