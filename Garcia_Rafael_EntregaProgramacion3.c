#include <stdio.h>
#include <string.h>
#define TAM 10
#define TAMINT 20


int strlen2(char cadena[]);
void repetir (int array[],int num,int array2 [],int* cond,char condtext [5],int TAMA);
main(){
	char cadena [TAM]="", estaText [5] = "";
	int input [TAM],num1 = {0},mayor [10],estaInt = {0},i={0};
	for (i=0;i<TAM;++i){
		input[i] = 0;
		mayor[i] = 0;
	}
	gets (cadena);
	fflush (stdin);
	printf ("La longitud de la cadena es igual a %d\n",strlen2(cadena));
	printf ("Introduce un numero\n");
	scanf ("%d",&num1);
	fflush (stdin);
	for (i=0;i<TAM;++i){
		printf("Introduce el %d numero \n", i);
		scanf ("%d",&input[i]);
		fflush (stdin);
	}
	repetir (input,num1,mayor,&estaInt,estaText,TAM);
	if (estaInt ==1)
		printf ("El numero que introducio se encuentra en el array\n");
	else
		printf ("El numero que introducio no se encuentra en el array\n");
	for (i=0;i<TAM;++i){
		if (mayor[i]== 1)
			printf("El numero %d es el mayor o uno de los mayores del array\n", i);
	}	
	system ("pause");
	return 0;
}


int strlen2(char cadena[]){
	int i = {0},longi = {0};
	i=0;
	while(cadena[i]!='\0'){
		longi++;
		++i;
	}
	return longi;
}

void repetir (int array[],int num,int array2 [],int* cond,char condtext [5],int TAMA){
	int i = {0}, array3 [10] = {0},f = {0};
	//conteo y devuelta de maximos en array
	//hacer un switch para ir guardando en el array 3 las veces que sale un numero concreto
	for(i=0;i<TAMA;++i){
		switch (array[i]){
		case 0 : 
			array3[0]++;
			break;
		case 1 : 
			array3[1]++;
			break;
		case 2 : 
			array3[2]++;
			break;
		case 3 :
			array3[3]++;
			break;
		case 4 : 
			array3[4]++;
			break;
		case 5 : 
			array3[5]++;
			break;
		case 6 : 
			array3[6]++;
			break;
		case 7 : 
			array3[7]++;
			break;
		case 8 : 
			array3[8]++;
			break;
		case 9 : 
			array3[9]++;
			break;
		default : printf("ERROR\n");
		
	}	
		
	}

	for(i=0;i<10;++i){
		do{
			if (array3[i] >= array3[f] && array3[i] != 0)
				array2[i] = 1;
			else
				array2[i] = 0;
		f++;
		}while(f<TAM && array2[i]==1);
		f=0;
	}
	if (array3[num]>0){
		*cond = 1;
		strcpy (condtext,"uno");
	}
	else{
		*cond = 0;
		strcpy (condtext,"cero");
	}
	
	return;
}
