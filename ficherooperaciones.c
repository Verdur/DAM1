#include <stdio.h>
#define TAM 10
#include <string.h>

main(){
	FILE * f;
	char input [TAM] = "", signo [TAM] = "";
	int lon = {0};
	f= fopen ("archivo11.txt","w+");
	gets(input);
	fflush(stdin);
	while (input [0] != 'F'){
		if (input[0] == '+' || input[0] == '-' || input[0] == '*' || input[0] == '%'){
			switch (input[0]){
				case '+': strcpy(signo,"SUMA\n");
							break;
				case '-': strcpy(signo,"RESTA\n");
							break;
				case '*': strcpy(signo,"MULTI\n");
							break;
				case '/': strcpy(signo,"DIVI\n");
							break;
				default: strcpy(signo,"");
			}
			gets(input);
			fflush(stdin);
			lon = strlen(input);
			input [lon] = '\n';
			if (input!="F"){
				fputs (signo,f);
				fputs (input,f);
			}
			gets(input);
			fflush(stdin); 		
		}
		else {
			fputs (input,f);
			gets(input);
			fflush(stdin); 
		}
		
	}
	rewind (f);
	fgets (input,100,f);
	while(!feof(f)){
		printf("%s",input);
		fgets (input,100,f);
	}
	fclose(f);
	
	
	
	system ("pause");
	return 0;
}


