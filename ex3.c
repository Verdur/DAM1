#include <stdio.h>
#include <stdlib.h>
#define TAM 10
int media (int array [],int TAMA);
void iniciar (int array[],int TAMA);
void llenar (const int array[],int TAMA);
main(){
	int array [TAM];
	iniciar (array,TAM);
	llenar (array,TAM);
	printf ("La media del array fue igual a %d\n",media(array,TAM));
	system ("pause");
	return 0;
}

int media (int array [],int TAMA){
	int i = {0},cont={0},tot={0},med={0};
	const int NOCONT = 0;
	for (i=0;i<TAMA;++i){
		if (array[i] != NOCONT){
			cont++;
			tot = tot + array[i];
		}
	}
	med = tot / cont;
	return med;
}
void iniciar (int array[],int TAMA){
	int i = {0};
	for (i = 0; i<TAMA; ++i){
		array[i]=0;
	}
	return;
}
void llenar (const int array[],int TAMA){
	int i = {0};
	for (i = 0; i<TAMA; ++i){
		scanf ("%d",&array[i]);
		fflush (stdin);
	}
	return;
}


