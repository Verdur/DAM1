#include <stdio.h>

void fact1 (int num);
int fact2 (int num);
int fact3 (int num, int* total);
main(){
	int num = {0}, total = {0};
	printf ("Introduce un numero para calcular su factorial");
	scanf ("%d",&num);
	fflush (stdin);
	fact1(num);
	printf ("El factorial es igual a %d\n", fact2(num));
	fact3 (num,&total);
	printf ("El factorial es igual a %d\n", total);
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
int fact3 (int num, int* total){
	int i = {0};
	*total = 1;
	for (i=num;i>=2;--i)
		*total= i * *total;
	return *total;
}
