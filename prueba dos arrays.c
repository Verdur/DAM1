#include <stdio.h>
#define TAM 11
main(){
	int num1 = {0}, array[TAM], i = {0},f={0};
	float array2[TAM];
	for (i=0;i<=TAM;++i){
		array[i]=0;
		array2[i]=0;
	}
	printf("Introduce 10 numeros\n");
	for (i=0;i<TAM-1;++i){
		scanf("%d", &num1);
		fflush(stdin);
		array[i]=num1;
	}
	for (f=0;f<TAM-1;++f)
		array2[f] = (float)array[f] * 0.35;
	
	for (i=0;i<=f-1;++i){
		printf("%d  %.3f \n",array[i],array2[i]);
	}
	system ("pause");
	return 0;
	
	
}
