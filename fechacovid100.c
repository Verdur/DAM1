#include <stdio.h>
#include <time.h>

void pedirfechas(int *anyo,int *mes,int *dia,int* hora,int* minutos,int* segundos);
main(){
	time_t fechain;
	struct tm fecha1;
	pedirfechas (&fecha1.tm_year,&fecha1.tm_mon,&fecha1.tm_mday,&fecha1.tm_hour,&fecha1.tm_min,&fecha1.tm_sec);
	fecha1.tm_mday = fecha1.tm_mday + 100;
	fechain = mktime(&fecha1);
	printf ("%s",ctime(&fechain));
	system ("pause");
	return 0;
}


void pedirfechas(int *anyo,int *mes,int *dia,int* hora,int* minutos,int* segundos){
	printf ("Introduce una fecha, anyo,mes,dia\n");
	scanf("%d",*&anyo);
	fflush(stdin);
	scanf("%d",*&mes);
	fflush(stdin);
	scanf("%d",*&dia);
	fflush(stdin);
	*anyo = *anyo - 1900;
	*mes = *mes-1;
	*dia = *dia;
	*hora= 0;
	*minutos=0;
	*segundos=0;
	return;
}

