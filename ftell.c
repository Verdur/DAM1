#include <stdio.h>
#define dsplz(n) ((long)((n-1)*sizeof(reg)))
void pet (char* nom,char *apellidos,int* edad,float * altura);
main(){
	FILE * f;
	int i ={0},pos = {0};
	int reg={0};
	struct persona {
		char  nombre [20];
		char  apellidos [30];
		int edad;
		float altura;
	};
	struct persona pers1;
	f = fopen ("archivo22.txt","wb+");
	for(i=1;i<=3;++i){
	pet(pers1.nombre,pers1.apellidos,&pers1.edad,&pers1.altura);
	fwrite(&pers1,sizeof(pers1),1,f);
	}
	rewind(f);
	fread(&pers1,sizeof(pers1),1,f);
	while(!feof(f)){
		printf("%s %s %d %f \n",pers1.nombre,pers1.apellidos,pers1.edad,pers1.altura);
		fread(&pers1,sizeof(pers1),1,f);
	}
	scanf("%d",&reg);
	fseek (f,reg*sizeof(pers1),SEEK_SET);
	pos = ftell(f);
	fread(&pers1,sizeof(pers1),1,f);
	printf("1 %s %s %d %f \n",pers1.nombre,pers1.apellidos,pers1.edad,pers1.altura);
	scanf("%f",&pers1.altura);
	fseek (f,pos,SEEK_SET);
	//fseek (f,(long)(0-1*sizeof(pers1)),SEEK_CUR);
	//fseek (f,dsplz(0),SEEK_CUR);
	fwrite (&pers1,sizeof(pers1),1,f);
	fseek (f,pos,SEEK_SET);
	//fseek (f,(long)(0-1*sizeof(pers1)),SEEK_CUR);
	//fseek (f,dsplz(0),SEEK_CUR);
	fread(&pers1,sizeof(pers1),1,f);
	printf("2 %s %s %d %f \n",pers1.nombre,pers1.apellidos,pers1.edad,pers1.altura);
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
	scanf("%f",&*altura);
	fflush (stdin);
	return;

}
