#include <stdio.h>

void recorrer (int array[]);
void llenar (const int  array[]);

main(){
	int array [5] = {0};
	printf("Introduce 4 numeros\n");
	int i = {0};
	for (i = 0; i<5; ++i){
		array[i]=0;
	}
	recorrer (array);
	llenar (array);
	printf ("\n");
	recorrer (array);
	system ("pause");
	return 0;
}
void llenar (const int array[]){
	int i = {0};
	for (i = 0; i<5; ++i){
		scanf ("%d",&array[i]);
		fflush (stdin);
	}
	return;
}

void recorrer (int array[]){
	int f = {0};
	for (f=0;f<5;++f)
		printf ("%d\n", array[f]);
	return;
}
