#include <stdio.h>
#include <time.h>
void pedirfechas(int *anyo,int *mes,int *dia,int* hora,int* minutos,int* segundos);
void comparar (int *anyo1,int* anyo2,int * mes1,int* mes2,int* dia1,int* dia2);
main(){
	//calcular diferencia entre las dos fechas
	time_t fecha = {0},fechaa = {0};
	struct tm fecha1,fecha2;
	pedirfechas(&fecha1.tm_year,&fecha1.tm_mon,&fecha1.tm_mday,&fecha1.tm_hour,&fecha1.tm_min,&fecha1.tm_sec);
	
	pedirfechas(&fecha2.tm_year,&fecha2.tm_mon,&fecha2.tm_mday,&fecha2.tm_hour,&fecha2.tm_min,&fecha2.tm_sec);
	//pedirfechas(&fecha1.tm_year,&fecha1.tm_mon,&fecha1.tm_mday,&fecha1.tm_hour,&fecha1.tm_min,&fecha1.tm_sec);
	comparar (&fecha1.tm_year,&fecha2.tm_year,&fecha1.tm_mon,&fecha2.tm_mon,&fecha1.tm_mday,&fecha2.tm_mday);
	//mirar para restar los años de los structs, los meses y los dias para dar un total aproximado
	fecha = mktime(&fecha1);
	printf ("El tiempo de diferencia entre fechas es %d años, %d meses y %d dias , %s\n",fecha1.tm_year,fecha1.tm_mon,fecha1.tm_mday,ctime(&fecha));
	
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

void comparar (int *anyo1,int* anyo2,int * mes1,int* mes2,int* dia1,int* dia2){
	*anyo1 = *anyo1 - *anyo2;
	if (*anyo1 < 0)
		*anyo1 = *anyo1 * -1;
	*mes1 = *mes1 - *mes2;
	if (*mes1 < 0)
		*mes1 = *mes1 * -1;	
	*dia1 = *dia1 - *dia2;
	if (*dia1 < 0)
		*dia1 = *dia1 * -1;	
	
	return;
}
