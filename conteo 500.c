#include <stdio.h>
#define NUMERO 500

main(){
	int i = {0}, f = {0};
	char cond = {' '};
	do {
		for (i=1;i<=20;++i){
			++f;
			printf("%d\n", f);
		}
		printf ("Desea continuar (S/N)\n");
		scanf ("%c", &cond);
		fflush (stdin);
		if (cond == 'S' && f < NUMERO || cond == 's' && f < NUMERO)
			system("cls");
	}while(cond == 'S' && f < NUMERO || cond == 's' && f < NUMERO);
	if (f == NUMERO)
		printf("Limite Alcanzado");
	else
		printf ("Ejecucion Finalizada");
	return 0;
	
}
