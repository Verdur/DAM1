#include <stdio.h>


main() {
	//declarar e inicializar
	int dia = {0}, mes = {0}, ano ={0};
	//inicio
	printf ("Calculo de años\n");
	printf ("Introduce el año\n");
	scanf ("%d",&ano);
	fflush (stdin);
	printf ("Introduce el mes\n");
	scanf ("%d",&mes);
	fflush (stdin);
	printf ("Introduce el día\n");
	scanf ("%d",&dia);
	fflush (stdin);
	++dia;
	if (dia==32){
		dia = 1;
		if (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12){
					dia=1;
					++mes;
				}else
		if (mes==12){
			mes = 1;
			++ano;
		}; 
		}else
					if (dia==31){
						if (mes==4 || mes==6 || mes==9 || mes==11){
							dia=01;
							++mes;
							};
					}else
								if (dia==28 || dia ==29)
									if (mes==2){
									dia=1;
									++mes;
								}else
									++dia; 

		printf ("La fecha actual es %d / %d / %d", dia,mes,ano);

 	return 0;

};				


