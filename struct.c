#include <stdio.h>
#include <string.h>

int calcedad(short dia,short mes,short ano);
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
	printf ("Has introducido nombre = %s, apellido = %s, y edad = %d y fecha nacimiento dia %d, mes %d y a�o %d\n",pers1.nombre,pers1.apellidos,pers1.edad,pers1.fechaNac.dia,pers1.fechaNac.mes,pers1.fechaNac.ano);
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
	printf ("Has introducido nombre = %s, apellido = %s, y edad = %d y fecha nacimiento dia %d, mes %d y a�o %d\n",pers2.nombre,pers2.apellidos,pers2.edad,pers2.fechaNac.dia,pers2.fechaNac.mes,pers2.fechaNac.ano);
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
