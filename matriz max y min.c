#include <stdio.h>
#define FIL 2
#define COL 3
main(){
	int max = {0}, min = {0},matriz [FIL] [COL] = {1,2,3,12,-15,6}, i = {0}, f = {0};
	min = matriz [0] [0];
	max = matriz [0] [0];
	for (i=0;i<FIL;++i){
		for(f=0;f<COL;++f){
			if (matriz [i] [f] > max)
				max = matriz [i] [f];
			if (matriz [i] [f] < min)
				min = matriz [i] [f];
		}
	}
	printf ("El numero mayor fue %d\n", max);
	printf ("El numero menor fue %d\n", min);
	
	return 0;
}
