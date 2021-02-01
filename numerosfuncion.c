#include <stdio.h>
int fun1 (int* num);
int fun2 (int* num);
void fun3 (int num);
int fun4 ();
main(){
	int num1 = {0}, array [3] ={0},i={0};
	printf ("Introduce un numero\n");
	fun1 (&num1);
	printf("El numero fue %d\n",num1);
	fun2 (&num1);
	printf("El numero fue %d\n",num1);
	fun3 (num1);
	printf ("El ultimo numero fue %d\n",fun4());
	for (i = 0;i<3;++i)
		array[i]= fun4();
	printf ("Primer Numero: %d\nSegundo Numero: %d\nTercer Numero: %d\nLa suma de %d, %d y %d es igual a %d",array[0],array[1],array[2],array[0],array[1],array[2],array[0]+array[1]+array[2]);
	system ("pause");
	return 0;
}

int fun1 (int* num){
	int num1 = {0};
	do{
		scanf("%d",&num1);
		fflush (stdin);
	}while(num1 < 0);
	*num = num1;
	return *num;
}

int fun2 (int* num){
	do{
		scanf("%d",&*num);
		fflush (stdin);
	}while(*num < 0);
	return *num;
}

void fun3 (int num){
	do{
		scanf("%d",&num);
		fflush (stdin);	
	}while(num < 0);
	printf ("El numero introducido fue = %d\n",num);
	return;
}

int fun4 (){
	int num = {0};
	do{
		scanf("%d",&num);
		fflush (stdin);
	}while(num < 0);
	return num;
}
