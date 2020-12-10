#include <stdio.h>
main (){
	int num1= {0},num2={0},num3={0},num4={0},suma={0};
	printf ("Introduce cuatro numeros\n");
	scanf ("%d",&num1);
	fflush (stdin);
	scanf ("%d",&num2);
	fflush (stdin);
	scanf ("%d",&num3);
	fflush (stdin);
	scanf ("%d",&num4);
	fflush (stdin);
	do{
		suma = num1 + num2 + num3;
		if (suma != num4){
			printf("La suma no es igual\n");
			num1 = num2;
			num2 = num3;
			num3 = num4;
			printf ("Introduce un cuarto numero nuevo\n");
			scanf ("%d",&num4);
			fflush (stdin);	
		}
	}while (suma != num4);
	printf("La suma de los 3 numeros fue igual al 4 numero");
	return 0 ;
}
