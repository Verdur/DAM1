#include <stdio.h>
#define TAM 10
#define IN 0
#include <string.h>
#include <ctype.h>

main(){
	FILE * f;
	int reg = {0};
	struct registros{
		char input [TAM];
	}reg1;
	int lon = {0},pos1={0},pos2={0},total={0},flag={0};
	char aux [TAM];
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
	rewind (f);
	fread (&reg1.input,sizeof(reg1.input),1,f);
	while (!feof(f)){
		if (isupper(reg1.input[0])){
			switch (reg1.input[0]){
				case 'S': flag=0;
							break;
				case 'R': flag=1;
							break;
				case 'M': flag=2;
							break;
				case 'D': flag=3;
							break;
				default: strcpy(reg1.input,"");
			}
			if (pos1!=-5){
				pos2 = ftell(f);
				//strcpy(aux,total);
				pos1 = pos1 - sizeof(reg1.input);
				fseek (f,pos1,SEEK_SET);
				fread (&reg1.input,sizeof(reg1.input),1,f);
				strcat (reg1.input, "hola");
				//printf("castro %s\n",reg1.input);
				fseek (f,pos1,SEEK_SET);
				//meter cadena aux para guardar valor y concatenar ambas
				fwrite (&reg1.input,sizeof(reg1.input),1,f);
				pos1 = pos2;
				fseek (f,pos1,SEEK_SET);
				//printf ("2. %s\n",reg1.input);
				pos2=0;
				total=0;
			}
			else{
				pos1 = ftell (f);
				//printf(" astro %s\n",reg1.input);
				//printf ("3. %s\n",reg1.input);
		 	}
			fread (&reg1.input,sizeof(reg1.input),1,f);
		}
		else{
			switch (flag){
				case 0 : total = reg1.input[0] + total;
							break;
				case 1 : total = reg1.input[0] - total;
							break;
				case 2 : total = reg1.input[0] * total;
							break;
				case 3 : total = reg1.input[0] / total;
							break;
				default : strcpy(reg1.input,"");
			}
			//printf ("4. %d\n",total);
			fread (&reg1.input,sizeof(reg1.input),1,f);
		}
	}
	rewind (f);
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
