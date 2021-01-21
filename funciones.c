#include <stdio.h>

void area (int base,int altura);
float prueba2 (int base,int altura);
main(){
	int num1 = {0}, num2 = {0};
	float resultado = {0};
	scanf ("%d", &num1);
	fflush (stdin);
	scanf ("%d", &num2);
	fflush (stdin);
	area (num1,num2);
	//resultado = prueba2 (num1,num2); Se podría usar en el print
	printf ("El area es igual a %.2f\n",prueba2 (num1,num2));
	system ("pause");
	return 0;
}

void area (int base,int altura){
	float area2 = {0};
	area2 = (float)(base * altura)/2;
	printf("El area del triangulo es igual a %.2f\n", area2);
	return;
}

float prueba2 (int base,int altura){
	float superf = {0};
	superf = (float)(base * altura)/2;
	return superf;
	//return (float)(base * altura) /2;
}
