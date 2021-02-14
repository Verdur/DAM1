#include <stdio.h>

void peticion (int * input);
main(){
	int casos = {0}, gasto = {0}, total = {0}, i = {0};
	printf ("Introduce la cantidad de gastos\n");
	peticion (&casos);
	while(casos > 0){
	total=0;
	for (i=1;i<=casos;++i){
		printf ("Introduce el gasto %d\n",i);
		peticion(&gasto);
		total = gasto + total;
	}
	printf ("El gasto total fue de %d\n", total);
	printf ("Introduce la cantidad de gastos\n");
	peticion (&casos);
	}
	
	system ("pause");
	return 0;
}

void peticion (int * input){
	scanf ("%d",&*input);
	fflush (stdin);
	return;
}
