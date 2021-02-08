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
	ayer.tm_year=2001-1900;
	ayer.tm_mon=6-1;
	ayer.tm_mday=9;
	ayer.tm_sec=0;
	ayer.tm_hour=0-1;
	ayer.tm_min=0;
	fecha2 = mktime(&ayer);
	printf ("La fecha actual es %s\n",ctime(&fecha2));
	system ("pause");
	return 0;
}
