#include <stdio.h>

main(){
	int num1={0},sumnum = {0}, tam = {0}, sumtam = {0},i={0},f={0},totsum={0};
	printf("Introduce el numero de tablas (0) para terminar\n");
	scanf("%d",&num1);
	fflush (stdin);
	while(num1!=0){
		sumnum= num1 + sumnum;
		scanf("%d",&num1);
		fflush (stdin);
	}
	printf("Introduce el tamaño de la tabla (0) para terminar\n");
	scanf("%d",&tam);
	fflush (stdin);
	while(tam!=0){
		sumtam= tam + sumtam;
		scanf("%d",&tam);
		fflush (stdin);
	}
	for (i=1;i<=sumnum;++i){
		for(f=1;f<=sumtam;++f){
			totsum = totsum + (i*f);
			printf ("%d * %d = %d\n",i,f,i*f);
	}
		printf ("--------------------------\n");
	}
	printf ("La suma total es %d",totsum);
	return 0;
}
