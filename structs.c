#include <stdio.h>
#include <string.h>
#include <time.h>
#define TAM 5

int calcedad(short dia,short mes,short ano);
int calcedad2(short dia,short mes,short ano);
void pet (char *nom,char *apellidos,int* edad,short* dia,short* mes,short* ano);
main (){
	struct fecha{
		short dia;
		short mes;
		short ano;
	};
	struct persona{
		char nombre [16];
		char apellidos [31];
		int edad;
		struct fecha fechaNac;
	};
	
	char cont [2];
	struct persona pers1 = {"","",0,0};
	int i = {0};
	pet (pers1.nombre,pers1.apellidos,&pers1.edad,&pers1.fechaNac.dia,&pers1.fechaNac.mes,&pers1.fechaNac.ano);
	/*printf ("Introduce el nombre\n");
	gets (pers1.nombre);
	fflush(stdin);
	printf ("Introduce los apellidos\n");
	gets (pers1.apellidos);
	fflush(stdin);
	printf ("Introduce la edad\n");
	scanf("%d",&pers1.edad);
	fflush(stdin);
	printf ("Introduce la fecha de nacimiento\n");
	scanf("%d %d %d",&pers1.fechaNac.dia,&pers1.fechaNac.mes,&pers1.fechaNac.ano);*/
	printf ("Has introducido nombre = %s, apellido = %s, y edad = %d y fecha nacimiento dia %d, mes %d y año %d\n",pers1.nombre,pers1.apellidos,pers1.edad,pers1.fechaNac.dia,pers1.fechaNac.mes,pers1.fechaNac.ano);
	printf ("La edad calculada es igual a %d\n", calcedad(pers1.fechaNac.dia,pers1.fechaNac.mes,pers1.fechaNac.ano));
	struct persona pers2 = {"","",0,0};
	printf("La segunda persona es gemelo de la primera S o N\n");
	fflush (stdin);
	scanf ("%c",&cont);
	fflush (stdin);
	if (cont [0] == 'S' || cont [0] == 's'){
		printf ("Introduce el nombre\n");
		pers2.edad = pers1.edad;
		strcpy (pers2.apellidos,pers1.apellidos);
		pers2.fechaNac.dia = pers1.fechaNac.dia;
		pers2.fechaNac.mes = pers1.fechaNac.mes;
		pers2.fechaNac.ano = pers1.fechaNac.ano;
		fflush(stdin);
		gets (pers2.nombre);
		fflush(stdin);
		}
		else{
			pet (pers2.nombre,pers2.apellidos,&pers2.edad,&pers2.fechaNac.dia,&pers2.fechaNac.mes,&pers2.fechaNac.ano);
			/*printf ("Introduce el nombre\n");
			gets (pers2.nombre);
			fflush(stdin);
			printf ("Introduce los apellidos\n");
			gets (pers2.apellidos);
			fflush(stdin);
			printf ("Introduce la edad\n");
			scanf("%d",&pers2.edad);
			fflush(stdin);
			printf ("Introduce la fecha de nacimiento\n");
			scanf("%d %d %d",&pers2.fechaNac.dia,&pers2.fechaNac.mes,&pers2.fechaNac.ano);*/
			fflush (stdin);
		}
	printf ("Has introducido nombre = %s, apellido = %s, y edad = %d y fecha nacimiento dia %d, mes %d y año %d\n",pers2.nombre,pers2.apellidos,pers2.edad,pers2.fechaNac.dia,pers2.fechaNac.mes,pers2.fechaNac.ano);
	struct persona array[TAM];
	for (i=0;i<TAM;++i){
		printf ("%d Registro:\n",i);
		pet(array[i].nombre,array[i].apellidos,&array[i].edad,&array[i].fechaNac.dia,&array[i].fechaNac.mes,&array[i].fechaNac.ano);
	}
	for (i=TAM-1;i>=0;--i)
		printf("Numero %d nombre = %s, apellido = %s, y edad = %d , fecha nacimiento dia %d, mes %d y año %d\n",i,array[i].nombre,array[i].apellidos,array[i].edad,array[i].fechaNac.dia,array[i].fechaNac.mes,array[i].fechaNac.ano);
	
	fflush(stdin);
	system ("pause");
	return 0;
}


int calcedad(short dia,short mes,short ano){
	short dia1 = {2}, mes1 = {2}, ano1 = {2021};
	dia = dia - dia1;
	mes =  mes - mes1;
	ano =  ano1 - ano;
	if (ano<0)
		ano = ano * -1;
	if (dia>0 && mes>0)
		ano = ano-1;
	return ano;
}
int calcedad2(short dia,short mes,short ano){
	struct fecha2{
		int tm_mday;
		int tm_mon;
		int tm_yday;
	};
	struct fecha2 fech = {3,1,2021};
	ano = ano - fech.tm_yday;
	dia = dia - fech.tm_mday;
	mes = mes - fech.tm_mon;
	if (ano<0)
		ano = ano * -1;
	if (dia>0 && mes>0)
		ano = ano-1;
	return ano;
}

void pet (char* nom,char *apellidos,int* edad,short* dia,short* mes,short* ano){
	printf ("Introduce el nombre\n");
	gets (nom);
	fflush(stdin);
	printf ("Introduce los apellidos\n");
	gets (apellidos);
	fflush(stdin);
	/*printf ("Introduce la edad\n");
	scanf("%d",&*edad);
	fflush(stdin);*/
	printf ("Introduce la fecha de nacimiento\n");
	scanf("%d %d %d",&*dia,&*mes,&*ano);
	fflush (stdin);
	*edad=calcedad(*dia,*mes,*ano);
	return;
	
}
