#include <stdio.h>

main(){
	int num1 = {0}, num2 = {0}, num3 = {0}, aux = {0};
	printf ("Introduce el valor de a:");
	scanf("%d", &num1);
	fflush (stdin);
	printf ("\nIntroduce el valor de b:");
	scanf("%d", &num2);
	fflush (stdin);
	printf ("\nIntroduce el valor de c:");
	scanf("%d", &num3);
	fflush (stdin);
	printf ("\nCambiando valores ...\n");
	aux = num2;
	num2 = num1 + num3;
	num1 = num3 * 2;
	num3 = aux * 3;
	printf ("El valor de a es %d\n", num1);
	printf ("El valor de b es %d\n", num2);
	printf ("El valor de c es %d", num3);
	
	return 0;
}
