#include <stdio.h>

main(){
	int num1 = {0}, num2 = {0};
	printf("Introduce el primer numero\n");
	scanf("%d", &num1);
	fflush (stdin);
	printf("Introduce el segundo numero\n");
	scanf("%d", &num2);
	fflush (stdin);
	if (num1>num2)
		printf ("%d es el mayor\n");
	else
		if (num2>num1)
			printf ("%d es el mayor\n", num2);
		else
			printf ("Son Iguales\n");
			
	system ("pause");
	return 0;
}
