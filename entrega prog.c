#include <stdio.h>
#define STOP 0
//SI SE CAMBIA EL NUMERO DE CONTROL PARA PARAR ESTE NO SERA CONTADO, SIEMPRE SE EXCLUYE EL NUMERO ESTABLECIDO PARA PARAR.
main(){
	//Declaracion Variables
	int num1={0},sumnum = {0}, tam = {0}, sumtam = {0},i={0},f={0},totsum={0};
	//Pedimos un numero que siempre debera ser mayor que 0 no puede haber tablas negativas
	printf("Introduce el numero de tablas (%d) para terminar\n", STOP);
	do{
	scanf("%d",&num1);
	fflush (stdin);}while(num1 < 0);
	//bucle mientras ya que nos puede introducir el stop desde el principio
	while(num1 != STOP){
		//pedimos el tamaño que tendrá cada tabla, solo ocurre cuando ya sabemos que vamos a imprimir x numero
		printf("Introduce el tamaño de la tabla\n");
		//de igual manera controlamos que sean positivos
		do{
		scanf("%d",&tam);
		fflush (stdin);}while(tam < 0);
		totsum=0;
		//dos bucles para anidados de forma que se hagan las tablas de multiplicar
		for (i=1;i<=num1;++i){
			for(f=1;f<=tam;++f){
				totsum = totsum + (i*f);
				printf ("%d * %d = %d\n",i,f,i*f);
		}
			printf ("====================\n");
		}
		printf ("La suma total es %d\n",totsum);
		//paramos antes de limpiar pantalla para preguntar si queremos hacer otras tablas.
		system ("pause");
		system("cls");
		printf("Introduce el numero de tablas (%d) para terminar\n",STOP);
		do{
			scanf("%d",&num1);
			fflush (stdin);}while(num1 < 0);
	}
	//paramos antes de acabar ya que en caso de abrir el exe no tiene pause por defecto.
	system ("pause");
	
	return 0;
}
