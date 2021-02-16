#include <stdio.h>

void pet (char* nom,char *apellidos,int* edad,float * altura);
main(){
	FILE * f;
	int i ={0};
	struct persona {
		char  nombre [20];
		char  apellidos [30];
		int edad;
		float altura;
	};
	struct persona pers1;
	f = fopen ("archivo2.txt","w+");
	for(i=1;i<=3;++i){
	pet(pers1.nombre,pers1.apellidos,&pers1.edad,&pers1.altura);
	fwrite(&pers1,sizeof(pers1),1,f);
	}
	rewind(f);
	fread(&pers1,sizeof(pers1),1,f);
	while(!feof(f)){
		printf("%s \n",pers1.nombre,pers1.apellidos,pers1.edad,pers1.altura);
		fread(&pers1,sizeof(pers1),1,f);
	}
	fclose(f);
	
	system ("pause");
	return 0;
}


void pet (char* nom,char *apellidos,int* edad,float * altura){
	printf ("Introduce el nombre\n");
	gets (nom);
	fflush(stdin);
	printf ("Introduce los apellidos\n");
	gets (apellidos);
	fflush(stdin);
	printf ("Introduce la edad\n");
	scanf("%d",&*edad);
	fflush(stdin);
	printf ("Introduce la altura\n");
	scanf("%d",&*altura);
	fflush (stdin);
	return;
	
}
