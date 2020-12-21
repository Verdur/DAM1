#include <stdio.h>
#define TAMANO 1000

main (){
	int num = {0}, array[TAMANO],i={0}, f={0};
	char cond = {' '};
	for (i=1;i<=TAMANO;++i)
		array [i] = 0;
	printf ("Introduce un numero\n");
	i=0;
	do{
		do{
			scanf ("%d", &num);
			fflush (stdin);
		}while(num < 0 && num > 1000);
		if (num != 0){
			++i;
			array[i]=num;
		}
	}while(num != 0);
	for (f=1;f<=i;++f){
		if (array[f] % 2 == 0)
			printf("DERECHA\n");
		else
			printf ("IZQUIERDA\n");		
	}
	system ("pause");
	return 0;
	
	
}
