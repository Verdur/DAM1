#include <stdio.h>

void peticion (int * input);
main(){
	int casos ={0}, sueldo = {0}, gastos = {0}, i=0;
	printf("Introduce el numero de casos que vamos a contemplar\n");
	peticion (&casos);
	for (i=1;i<=casos;++i){
		printf("Introduce el saldo de la cuenta\n");
		peticion (&sueldo);
		printf("Introduce los gastos estimados\n");
		peticion (&gastos);
		if ( (sueldo + gastos) < 0)
			printf("NO\n");
		else
			printf ("SI\n");
	}
	
	
	system ("pause");
	return 0;
}

void peticion (int * input){
	scanf ("%d",&*input);
	fflush (stdin);
	return;
}
