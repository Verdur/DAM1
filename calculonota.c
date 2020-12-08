#include <stdio.h>
//Declarar e Inicializar
int input = {0}, cont = {0}, sum = {0};
char seguir = ' ';

//INICIO
main () {
	printf("Calcula tu nota media\n");
	do{
		printf("Introduce una nota\n");
		scanf ("%d", &input);
		fflush (stdin);
		sum = sum + input;
		++cont;
		printf("¿Quiere seguir leyendo? (S/N)\n");
		scanf ("%c", &seguir);
		fflush (stdin);
	} while (seguir == 'S' || seguir == 's');
	printf ("Tu nota es %d",sum/cont);
}
