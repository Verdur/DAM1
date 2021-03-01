#include <stdio.h>

int devnum (int num);
main(){
	int num = {0};
	scanf("%d",&num);
	fflush(stdin);
	printf("el cuadrado de %d es %d\n",num,devnum(num));
	system ("pause");
	return 0;
}

int devnum (int num1){
	int cuad = {0};
	cuad = num1 * num1;
	return cuad;
}
