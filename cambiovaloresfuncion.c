#include <stdio.h>

void camb (int *num1,int* num2);
main(){
	int num = {0}, num1 = {0};
	printf("Introduce un numero\n");
	scanf ("%d",&num);
	fflush (stdin);
	printf("Introduce un numero\n");
	scanf ("%d",&num1);
	fflush (stdin);
	camb (&num,&num1);
	printf ("%d %d\n",num,num1);
	system ("pause");
	return 0;
}

void camb (int *num1,int* num2){
	int inter = {0};
	inter = *num1;
	*num1=*num2;
	*num2=inter;
	return;
}
