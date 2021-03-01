#include <stdio.h>
#include <stdlib.h>

void repeticiones (char sim,short veces);
main(){
	short veces = {0};
	char sim = ' ';
	scanf ("%d",&veces);
	fflush (stdin);
	scanf ("%c",&sim);
	fflush (stdin);
	repeticiones(sim,veces);
	system ("pause");
	return 0;
}

void repeticiones (char sim,short veces){
	int i = {0};
	const int MAX = 60;
	if(veces > MAX)
		printf("ERROR NUMERO DE VECES SOBREPASA LIMITE");
	else
		for (i=1;i<=veces;++i){
			printf("%c",sim);
		}
	printf("\n");
	return;
}


