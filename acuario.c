#include <stdio.h>

void peticion (int * input);
main(){
	int casos = {0},compartimentos = {0} ,litros = {0}, diferencia = {0}, i = {0},f={0},total={0};
	
	peticion (&casos);
	
	for (i=1;i<=casos;++i){
		total=0;
		peticion (&compartimentos);
		peticion (&litros);
		peticion (&diferencia);
		total = litros+total;
		for(f=1;f<=compartimentos-1;++f){
			litros = litros - diferencia;
			total= total + litros;
		}
		printf ("%d\n",total);
	}
	
	system ("pause");
	return 0;
}

void peticion (int * input){
	scanf ("%d",&*input);
	fflush (stdin);
	return;
}
