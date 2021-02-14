#include <stdio.h>
#include <math.h>
#define TIEMPO 10
void peticion (int * input);
main(){
	int huevos = {0}, capacidad = {0},i={0},total={0};
	float veces = {0};
	printf ("Introduce la cantidad de huevos");
	peticion (&huevos);
	printf ("Introduce la capacidad\n");
	peticion(&capacidad);
	while (huevos > 0 && capacidad > 0){
		total=0;
		if (huevos<= capacidad)
			printf("%d",TIEMPO);
		else{
			veces = (float)huevos/(float)capacidad;
			veces=ceil(veces);
			for (i=1;i<=veces;++i)
				total=TIEMPO+total;
			printf("el total es %d\n",total);
		}
		printf ("Introduce la cantidad de huevos");
		peticion (&huevos);
		printf ("Introduce la capacidad\n");
		peticion(&capacidad);
	}
	
	system ("pause");
	return 0;
}

void peticion (int * input){
	scanf ("%d",&*input);
	fflush (stdin);
	return;
}
