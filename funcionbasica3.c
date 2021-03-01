#include <stdio.h>
void cambio (int * num1, int * num2);
void peticion (int * input);
main(){
	int in1 = {0},in2={0};
	printf ("Input 1st number : ");
	peticion (&in1);
	printf("\nInput 2st number : ");
	peticion (&in2);
	printf ("\nBefore Swapping %d %d \n",in1,in2);
	cambio(&in1,&in2);
	printf ("After Swapping %d %d \n",in1,in2);
	system ("pause");
	return 0;
}

void cambio (int * num1, int * num2){
	int aux = {0};
	aux = *num1;
	*num1=*num2;
	*num2=aux;	
	return;
}
void peticion (int * input){
	scanf ("%d",&*input);
	fflush (stdin);
	return;
}
