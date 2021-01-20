#include <stdio.h>
#include <string.h>
#define TOTCAD 15
#define TOTCAR 9
main(){
	char cadenas [TOTCAD] [TOTCAR],input [TOTCAR];
	int i = {0}, j = {0};
	for (i=0;i<TOTCAD;++i)
		strcpy(cadenas[i],"");
	
	for (i=0;i<TOTCAD;++i){
		j=-1;
		printf ("Introduce la cadena numero %d\n",i);
		do{
			++j;
			scanf ("%c",&input[j]);
			fflush (stdin);
		}while(input[j] != ' ');
		strcpy(cadenas[i],input);
	}
	for (i=TOTCAD;i>=0;--i)
		printf ("%s \n",cadenas [i]);
	system ("pause");
	return 0;
}
