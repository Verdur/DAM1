#include <stdio.h>


void peticion (int * input);
void llenar (int array[]);
main(){
	int casos = {0}, i = {0},dientesA [6] = {0},dientesB [6] = {0},j={0},tot={0},flag={0};
	printf("Introduce el numero de casos de prueba\n");
	peticion (&casos);
	for (i=1;i<=casos;++i){
		printf("Introduce la longitud de los dientes de arriba\n");
		llenar (dientesA);
		printf("Introduce la longitud de los dientes de abajo\n");
		llenar (dientesB);
		flag=0;
		j=0;
		tot=dientesA[j] + dientesB[j];
		do{
			if (tot != dientesA[j] + dientesB[j])
				flag=1;
			j++;
		}while(flag==0 && j<6 );
		if (flag < 1)
			printf ("Si\n");
		else
			printf ("No\n");
	}
	
	system ("pause");
	return 0;
}

void peticion (int * input){
	scanf ("%d",&*input);
	fflush (stdin);
	return;
}

void llenar (int array[]){
	int i = {0};
	for (i = 0; i<6; ++i){
		scanf ("%d",&array[i]);
		fflush (stdin);
	}
	return;
}

