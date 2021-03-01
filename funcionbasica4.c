#include <stdio.h>

void peticion (int * input);
void parimp (int num);
main(){
	int num = {0};
	peticion (&num);
	parimp(num);
	system ("pause");
	return 0;
}

void parimp (int num){
	if (num % 2 ==0)
		printf ("El numero es par\n");
	else
		printf ("El numero es impar\n");
	return;
}
void peticion (int * input){
	scanf ("%d",&*input);
	fflush (stdin);
	return;
}
