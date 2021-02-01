#include <stdio.h>
#define TAM 10
#define TAMINT 20

int strlen2(char cadena[]);
main(){
	char cadena [TAM]="";
	gets (cadena);
	fflush (stdin);
	printf ("La longitud de la cadena es igual a %d\n",strlen2(cadena));	
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

void repetir (int array[],int num,int cond,char condtext [5]){
	int i = {0};
	//conteo y devuelta de maximos en array
	for(i=0;i<TAMINT;++i){
		
		
		
	}
	//busqueda numero en array y devuelta de valor booleano
	//mirar alternativa si creo un array con todos los numeros contado para buscar la poscion y ver si esta el numero es decir crear un if y mirar si tiene un numero mayor a 0
	i=0;
	do{
		if (num = array[i])
			cond = 1;
		else
			++i;	
	}while(cond == 0 || i<TAMINT);
	if (cond == 0)
		condtext = "cero";
	else
		condtext = "uno";
	
	return;
}
