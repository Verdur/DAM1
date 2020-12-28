#include <stdio.h>

main(){
	int hora = {0}, minuto = {0}, segundo = {0};
	do{
	printf("Introduce la hora\n");
	scanf ("%d", &hora);
	fflush (stdin);
	}while(hora < 0 || hora > 23);
	do{
	printf("Introduce los minuto\n");
	scanf ("%d", &minuto);
	fflush (stdin);
	}while(minuto < 0 || hora > 59);
	do{
	printf("Introduce los segundos\n");
	scanf ("%d", &segundo);
	fflush (stdin);
	}while(segundo < 0 || segundo > 59);
	++segundo;
	if (segundo > 59){
		segundo = 0;
		++minuto;
		if (minuto > 59){
			minuto = 0;
			++hora;
			if(hora > 23)
				hora = 0;	
		}
	}
	printf("la hora un segundo despues es %d : %d : %d \n",hora,minuto,segundo);
		
	system ("pause");
	return 0;
}
