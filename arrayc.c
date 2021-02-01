#include <stdio.h>
#define TAM 5
void maximo (int array [],int *max);
main(){
	int array [TAM] = {0},i={0},max={0};
	for (i=0;i<TAM;++i){
		scanf("%d",&array[i]);
		fflush(stdin);
	}
	maximo (array,&max);
	printf ("El mayor numero del array es %d\n",max);
	return 0;
}

void maximo (int array [],int *max){
	int i = {0};
	for (i=0;i<TAM;++i){
		if (*max < array[i])
			*max = array[i];
	}
	return;
}
