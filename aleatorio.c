#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#define TAM 10 
//definir una macro 
#define randomize (srand (time(NULL)))
#define MAX 21
#define MIN 10
main(){
	int i = {0};
	//srand (time(NULL)); //cambia la semilla que genera numeros aleatorios dependiendo del tiempo
	randomize;
	for (i=1;i<=TAM;++i)
		printf ("%d\n",rand() % (MAX - MIN) +MIN); //escribe numeros aleatorios en base a la semilla
	
	system ("pause");
	return 0;
}
