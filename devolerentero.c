#include <stdio.h>
int fun1 (int* num);
//int fun2 ();
int fun3 (int* num);
main(){
	int num1 = {0};
	printf ("Introduce un numero\n");
	fun1 (&num1);
	printf("La suma del numero + 6 fue %d\n",num1);
	//fun2;
	fun3 (&num1);
	printf("El numero fue %d\n",num1);
	system ("pause");
	return 0;
}

int fun1 (int* num){
	int num1 = {0};
	do{
		scanf("%d",&num1);
		fflush (stdin);
	}while(num1 < 0);
	*num = num1 + 6;
	return *num;
}
/*int fun2 (){
	int num1 = {0};
	do{
		scanf("%d",&num1);
		fflush (stdin);
	}while(num1 < 0);
	return num1;
}*/

int fun3 (int* num){
	do{
		scanf("%d",&*num);
		fflush (stdin);
	}while(*num < 0);
	return *num;
}
