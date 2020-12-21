#include <stdio.h>
#define TAM 11
main(){
	int num1 = {0}, array[TAM], i = {0},f={0};
	printf("Introduce 10 numeros\n");
	for (i=0;i<TAM-1;++i){
		scanf("%d", &num1);
		fflush(stdin);
		array[i]=num1;
	}
	for (f=i-1;f>=0;--f)
		printf("%d\n",array[f]);
		
	system ("pause");
	return 0;
	
	
}
