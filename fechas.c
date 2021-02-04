#include <stdio.h>
#include <time.h>

main(){
	//declaro la variable de fecha que voy a utilizar
	time_t fecha;
	time_t fecha2;
	struct tm * fechaTM;
	//Asigno a esta variable fecha el tiempo actual
	time(&fecha);
	//imprimo la variable fecha para ver la fecha actual
	printf ("La fecha actual es %s\n",ctime(&fecha));
	//imprimimos un puntero con asctime
	printf ("La fecha de hoy es %s\n", asctime(localtime(&fecha2)));
	fechaTM=localtime(&fecha);
	printf ("La fecha de hoy es %s\n", asctime(fechaTM));
	struct tm ayer;
	ayer.tm_year=2021-1900;
	ayer.tm_mon=2-1;
	ayer.tm_mday=4;
	fecha2 = mktime(&ayer);
	printf ("La fecha actual es %s\n",ctime(&fecha2));
	system ("pause");
	return 0;
}
