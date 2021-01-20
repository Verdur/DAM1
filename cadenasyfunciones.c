#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TAM 51

main(){
	char cadena [TAM], cont [2];
	int i = {0},digito={0},lower={0},upper={0},space={0},punct={0},alpha={0},longi = {0};
	do{
	printf ("Introduce una cadena de 50 caracteres\n");
	//fgets(cadena, TAM, stdin);
	gets(cadena);
	fflush (stdin);	
	digito = 0;
	lower = 0;
	upper= 0;
	space = 0;
	punct = 0;
	alpha = 0;
	longi = strlen(cadena);
	printf ("cadena = %d\n", longi);
	for (i=0;i<longi;++i){
		if (isdigit(cadena[i]))
			++digito;
		else
			if (islower(cadena[i]))
				++lower;
			else
				if (isupper(cadena[i]))
					++upper;
				else
					if (isspace(cadena[i]))
						++space;
					else
						if (ispunct(cadena[i]))
							++punct;
	}
	printf("Total Digitos %d\n",digito);
	printf("Total minusculas %d\n",lower);
	printf("Total mayusculas %d\n",upper);
	printf("Total espacios %d\n",space);
	printf("Total otros simbolos %d\n",punct);
	printf("Total alfanumericos %d\n",digito+lower+upper);
	printf ("¿Quieres seguir leyendo?\n");
	scanf ("%c",&cont);
	fflush (stdin);
	if (cont [0] == 'S' || cont [0] == 's')
		system ("cls");
	}while(cont [0] == 'S' || cont [0] == 's');
	system ("pause");
	return 0;
}
