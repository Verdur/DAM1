#include <stdio.h>


main(){
	int i = {0},cont2 = {0}, cont1 = {0}, contcent = {0},cont50 = {0},cont20 = {0}, cont10 = {0}, cont5 = {0};
	float billetes [5] = {50,20,10,5}, monedas [8] = {2,1,0.50,0.20,0.10,0.05,0.01}, total = {0}, importe = {0}, cambio = {0};
	printf ("Introduce el total\n");
	scanf ("%f", &total);
	fflush (stdin);
	printf ("Introduce cuanto entrega\n");
	scanf ("%f", &importe);
	fflush (stdin);
	cambio = importe - total;
	printf ("El cambio es de %.2f, y se entrega en :\n",cambio);
	while (cambio !=0){
		if (cambio < 5){
			i=0;
			do{
				while(cambio>=monedas[i]){
					cambio = cambio - monedas[i];
					if (i==0)
						cont2++;
					else
						if (i==1)
							cont1++;
						else
							contcent++;	
				}
				printf ("%.2f\n",monedas[i]);
				printf ("cambio = %.2f\n",cambio);
				++i;
				/*if (cambio < 0.01)
					cambio = 0;*/
			}while(cambio != 0 );
		}
		else{
			i=0;
			do{
				while(cambio>=billetes[i]){
					cambio = cambio - billetes[i];
					if (i==0)
						cont50++;
					else
						if (i==1)
							cont20++;
						else
							if (i==2)
								cont10++;
							else
								cont5++;
				}
				++i;	
			}while(cambio >= 5);
			
			i=0;
			do{
				while(cambio>=monedas[i]){
					cambio = cambio - monedas[i];
					if (i==0)
						cont2++;
					else
						if (i==1)
							cont1++;
						else
							contcent++;
				}	
				++i;
				if (cambio < 0.01)
				cambio = 0;
			}while(cambio != 0);
		}	
	}
	printf("El total de cambio en billetes es de %d billetes de 50, %d billetes de 20, %d billetes de 10 y %d billetes de 5.\n",cont50,cont20,cont10,cont5);
	printf ("El total de cambio es %d monedas de dos euros %d monedas de un euro %d monedas de centimo.\n",cont2,cont1,contcent);
	
	
	
	system ("pause");
	return 0;
}
