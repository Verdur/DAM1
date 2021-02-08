#include <stdio.h>
#include <time.h>
void pedirfechas(int *anyo,int *mes,int *dia,int* hora,int* minutos,int* segundos);
main(){
	//calcular diferencia entre las dos fechas
	time_t fecha = {0},fecha2 = {0};
	struct tm fecha1; //fecha2;
	pedirfechas(&fecha1.tm_year,&fecha1.tm_mon,&fecha1.tm_mday,&fecha1.tm_hour,&fecha1.tm_min,&fecha1.tm_sec);
	fecha = mktime(&fecha1);
	//pedirfechas(&fecha2.tm_year,&fecha2.tm_mon,&fecha2.tm_mday,&fecha2.tm_hour,&fecha2.tm_min,&fecha2.tm_sec);
	pedirfechas(&fecha1.tm_year,&fecha1.tm_mon,&fecha1.tm_mday,&fecha1.tm_hour,&fecha1.tm_min,&fecha1.tm_sec);
	fecha2 = mktime(&fecha1);
	//mirar para restar los años de los structs, los meses y los dias para dar un total aproximado
	//printf ("El tiempo de diferencia entre fechas es %s\n",ctime(&fecha));
	
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
	*mes = *mes - 1;
	*dia = *dia;
	*hora= 0;
	*minutos=0;
	*segundos=0;
	return;
}
