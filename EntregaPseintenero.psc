Funcion feliz = calcfeliz ( total )
	Definir feliz Como Entero;
	feliz = feliz*0+ConvertirANumero(total) ;
FinFuncion

Algoritmo sin_titulo
	definir continuar como cadena;
	continuar = "";
	//dimension input[10];
	definir input Como Entero;
	definir i Como Entero;
	Definir aux Como Entero;
	definir aux1 como cadena;
	definir flag Como Logico;
	definir cont Como Entero;
	definir total Como Entero;
	definir flag0 Como Logico;
	definir long Como Entero;
	long =0;
	flag=Falso;
	aux=0;
	i=0;
	cont=0;
	total=0;
	flag0=falso;
	input = 0;
	aux1="";
	//Para i=1 Hasta 10 Con Paso 1 Hacer
		//input[i]=0;
	//FinPara
	
	
	
	
	
	Repetir
		
		Escribir "Introduce un numero positivo de dos o mas digitos";
		i=1;
		flag=falso;
		flag0=falso;
		cont = 0;
		Repetir
			//cambiar el si para un flag del 0
			//si (flag0 = Verdadero) Entonces
				//i=1;
				//cont=0;
				//flag=falso;
				//Escribir "Introduce un numero positivo de dos o mas digitos";
			//FinSi
			//leer input[i];
			//si(input[i]>=0) Entonces
			//	cont = cont +1;
			//FinSi
			
			leer continuar;
			si (continuar = "FIN") Entonces //mirar para arreglar, 0 convierte la flag a true y debe ir separado
				flag=Verdadero;
			SiNo
				input = convertiranumero(continuar);
			FinSi
			
			
			//i= i +1;
			//Hasta Que (flag = Verdadero o cont >= 2 y input[1]>0)
			hasta que (flag = verdadero o input > 9)
			//usar la funcion subcadena para ir aislando los numeros en un array para luego ir haciendo la suma de sus cuadrados todo dentro del mismo for
			//asigno antes del para una variable que recibe la longitud de la cadena principal
			//hago el para hasta esa longitud y dentro del para hago subcadena con las posciones de la i, esa subcadena la convierto a numero y opero con ella
			Si(flag=Falso) entonces
				
			//meter este para en un repetir hasta que sea menor a <9
			
			long = longitud(continuar);
			Para i=1 Hasta long Con Paso 1 Hacer
				aux1 = Subcadena(continuar,i,i);
				aux=ConvertirANumero(aux1);
				total= aux^2 + total;
			FinPara
			aux1=ConvertirATexto(total);
			long= longitud(aux1);
			continuar= Subcadena(aux1,1,long);
			Escribir continuar;
			si (calcfeliz(continuar)=1) Entonces
				Escribir input,"Es un numero feliz";
			SiNo
				Escribir input,"No es un numero feliz";
			FinSi
		FinSi
	Hasta Que (flag=Verdadero);
FinAlgoritmo


