#include <stdio.h>

main() {
	int num1={0};
	printf("Introduce un numero del 1 al 9\n");
	do{
		scanf("%d", &num1);
		fflush(stdin);
	}while(num1 < 0 || num1 > 9);
	switch (num1){
		case 0 : printf("Ha introducido un cero\n");
			break;
		case 1 : printf("Ha introducido un uno\n");
			break;
		case 2 : printf("Ha introducido un dos\n");
			break;
		case 3 : printf("Ha introducido un tres\n");
			break;
		case 4 : printf("Ha introducido un cuatro\n");
			break;
		case 5 : printf("Ha introducido un cinco\n");
			break;
		case 6 : printf("Ha introducido un seis\n");
			break;
		case 7 : printf("Ha introducido un siete\n");
			break;
		case 8 : printf("Ha introducido un ocho\n");
			break;
		case 9 : printf("Ha introducido un nueve\n");
			break;
		default : printf("Valor no contemplado\n");
		
	}
	
	system ("pause");
	return 0;
}
