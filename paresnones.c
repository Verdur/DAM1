#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#define randomize (srand (time(NULL)))
#define WIN 3
#define PARES 1
#define NONES 2
main(){
	int maqnum = {0}, usrnum = {0}, usrwin = {0}, maqwin = {0}, select = {0},tot = {0};
	char blank [2] = "";
	printf ("PARES Y NONES\n");
	usrwin = 0;
	maqwin = 0;
	do{
		if (maqwin > 0 || usrwin > 0)
			printf("%97c Marcador actual\n%100c Usuario : %d\n%100c Maquina : %d \n",blank,blank,usrwin,blank,maqwin);
		usrnum = 0;
		maqnum = 0;
		tot = 0;
		select = 0;
		printf("Elige pares o nones\nPares = %d \nNones = %d \n",PARES,NONES);
		do{
			scanf ("%d",&select);
			fflush (stdin);
		}while(select != PARES && select != NONES);
		if (select == PARES)
			printf("Has elegido pares\n");
		else
			printf("Has elegido nones\n");
		printf ("Elige el numero de dedos para sacar\n");
		do{
			scanf ("%d",&usrnum);
			fflush (stdin);	
		}while (usrnum < 0 && usrnum > 5);
		randomize;
		maqnum = rand() % 6;
		tot = maqnum + usrnum;
		printf ("Has elegido %d dedos\nLa maquina ha elegido %d dedos\nEl total de dedos es :%d\n",usrnum,maqnum, tot);
		if (tot % 2 == 0 && select == PARES){
			printf ("Gana el usuario\n");
			++usrwin;
		}else
			if (tot % 2 != 0 && select == NONES){
				printf ("Gana el usuario\n");
				++usrwin;
			}else{
				printf ("Gana la maquina\n");
				++maqwin;
			}
		system ("pause");
		system ("cls");		
	}while(usrwin < WIN && maqwin < WIN);
	if (usrwin >= WIN)
		printf ("Gana el usuario");
	else
		printf ("Gana la maquina");
	return 0;
}
