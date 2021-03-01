#include <stdio.h>
#include <string.h>
#define TAM 17
main(){
	char cad [TAM]="";
	int voc = {0},lon={0},i={0},cont = {0};
	do{
	gets(cad);
	fflush(stdin);
	lon = strlen(cad);
	}while(lon > TAM - 1);
	for (i=0;i<lon;++i){
		if (cad[i]=='a' || cad[i]=='e' || cad[i]=='i' || cad[i]=='o' || cad[i]=='u' || cad[i]=='A' || cad[i]=='E' || cad[i]=='I' || cad[i]=='O' || cad[i]=='U')
			cont++;
	}
	printf ("El total de vocales fue de %d",cont);
	system ("pause");
	return 0;
}
