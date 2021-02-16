#include <stdio.h>
#define TAM 10
#include <string.h>

main(){
	FILE * f;
	struct registros{
		char signo [TAM];
		char input [TAM];
	}reg1;
	int lon = {0};
	f= fopen ("archivo10.txt","wb+");
	gets(reg1.input);
	fflush(stdin);
	while (reg1.input [0] != 'F'){
		if (reg1.input[0] == '+' || reg1.input[0] == '-' || reg1.input[0] == '*' || reg1.input[0] == '/'){
			switch (reg1.input[0]){
				case '+': strcpy(reg1.input,"SUMA");
							break;
				case '-': strcpy(reg1.input,"RESTA");
							break;
				case '*': strcpy(reg1.input,"MULTI");
							break;
				case '/': strcpy(reg1.input,"DIVI");
							break;
				default: strcpy(reg1.input,"");
			}
			//gets(reg1.input);
			//fflush(stdin);
			//lon = strlen(input);
			//input [lon] = '\n';
			fwrite (&reg1.input,sizeof(reg1.input),1,f);
			gets(reg1.input);
			fflush(stdin); 		
		}
		else {
			fwrite (&reg1.input,sizeof(reg1.input),1,f);
			gets(reg1.input);
			fflush(stdin); 
		}
		
	}
	rewind (f);
	//fgets (reg1.input,100,f);
	fread (&reg1.input,sizeof(reg1.input),1,f);
	while(!feof(f)){
		printf("%s\n",reg1.input);
		fread (&reg1.input,sizeof(reg1.input),1,f);
		//fgets (input,100,f);
	}
	fclose(f);
	
	
	
	system ("pause");
	return 0;
}
