#include <stdio.h>

int devnum ();
main(){
	printf("el numero es %d\n",devnum());
	system ("pause");
	return 0;
}

int devnum (){
	int num = {0};
	scanf("%d",&num);
	fflush(stdin);
	return num;
}
