#include <stdio.h>


void peticion (int * input);
main(){
	int casos = {0},i={0},dia={0},mes={0};
	printf("Introduce el numero de casos de prueba\n");
	peticion (&casos);
	for (i=1;i<=casos;++i){
		printf("Introduce el dia\n");
		do{
		peticion(&dia);
		}while(dia<0 || dia>31);
		printf ("Introduce el mes\n");
		do{
		peticion(&mes);
		}while(mes<0 || mes>12);
		if (dia == 25 && mes == 12)
			printf ("SI\n");
		else
			printf ("NO\n");
	}
	
	
	system ("pause");
	return 0;
}

void peticion (int * input){
	scanf ("%d",&*input);
	fflush (stdin);
	return;
}

