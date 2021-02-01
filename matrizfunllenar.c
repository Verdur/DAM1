#include <stdio.h>
#define FIL 5
#define COL 5
void recorrer (int array [FIL][COL]);
void llenar (int array [FIL] [COL]);

main(){
	int array1 [FIL] [COL] = {0};
	printf("Introduce 4 numeros\n");
	llenar (array1);
	printf ("\n");
	recorrer (array1);
	system ("pause");
	return 0;
}
void llenar (int array [FIL] [COL]){
	int i = {0};
	int f = {0};
	for (i = 0; i<FIL; ++i){
		for(f = 0; f<COL; ++f){
		scanf ("%d",&array[i] [f]);
		fflush (stdin);
		}
	}
	return;
}

void recorrer (int array [FIL] [COL]){
	int f = {0};
	int i = {0};
	for (i=0;i<FIL;++i){
		for (f = 0; f<COL; ++f)
			printf ("%d\n", array[i] [f]);
	}
		
	return;
}
