#include <stdio.h>

main() {
	int nota={0};
	printf("Introduce una nota del 0 al 10\n");
	do{
		scanf("%d", &nota);
		fflush(stdin);
	}while(nota < 0 || nota > 10);
	switch (nota){
		case 0 : printf("Insuficiente\n");
			break;
		case 1 : printf("Insuficiente\n");
			break;
		case 2 : printf("Insuficiente\n");
			break;
		case 3 : printf("Suspenso\n");
			break;
		case 4 : printf("Suspenso\n");
			break;
		case 5 : printf("Aprobado\n");
			break;
		case 6 : printf("Bien\n");
			break;
		case 7 : printf("Notable\n");
			break;
		case 8 : printf("Notable\n");
			break;
		case 9 : printf("Sobresaliente\n");
			break;
		case 10 : printf("Sobresaliente\n");
			break;
		default : printf("ERROR\n");
		
	}
	
	system ("pause");
	return 0;
}
