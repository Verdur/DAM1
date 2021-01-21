#include <stdio.h>

void fact1 (int num);
int fact2 (int num);
main(){
	int num = {0};
	printf ("Introduce un numero para calcular su factorial");
	scanf ("%d",&num);
	fflush (stdin);
	fact1(num);
	printf ("El factorial es igual a %d\n", fact2(num));
	system ("pause");
	return 0;
}

void fact1 (int num){
	int i = {0},suma = {0};
	suma = 1;
	for (i=num;i >= 2;--i)
		suma= i * suma;
	printf("El factorial es igual a %d\n",suma);
	return;
}

int fact2 (int num){
	int i = {0},suma = {0};
	suma = 1;
	for (i=num;i>=2;--i)
		suma= i * suma;
	return suma;
}
