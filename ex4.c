#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TOTCAD 3
#define TOTCAR 9
#define dsplz(n) ((long)((n-1)*sizeof(cad1)))
main(){
	int i = {0},casos={0};
	struct cadena{
		char cad[9];
	}cad1;
	FILE * f;
	f=fopen("ex.txt","wb+");
	printf("Introduce el numero de cadenas\n");
	scanf("%d",&casos);
	fflush(stdin);
	fseek (f,dsplz(casos),SEEK_SET);
	for (i=0;i<casos;++i){
		printf("Escribe la cadena %d\n",i);
		gets(cad1.cad);
		fwrite (&cad1,sizeof(cad1),1,f);
		fseek (f,dsplz(-1),SEEK_CUR);
	}
	rewind (f);
	fread (&cad1,sizeof(cad1),1,f);
	while(!feof(f)){
		printf("%s\n",cad1.cad);
		fread (&cad1,sizeof(cad1),1,f);
	}	
	fclose (f);
	system ("pause");
	return 0;
}


