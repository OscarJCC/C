/*
Nombre: 
Fecha: 21/04/2021
Autor: Oscar Joel Castro Contreras
Descripcion:

Hcer un progrma en C que capture una palabra de hasta 10
caracteres alfabeticos y convierta de mayuscula a minuscula y viceversa

1.-	Capturar una cadena de hasta 10 posiciones.

2.-	Si la posicion i del arreglo es >=65 && <=90 sumarle 32.

3.-	Si la posicion i del arreglo es >=97 && <=122 restarle 32.

4.-	imprimir el arreglo modificado.

5.-	Fin.
*/

#include <stdio.h>
#include <ctype.h>

int main(){
	
	int i=0;
	
	char letra[20];
	
	printf("Colocar una palabra con pueras mayusculas o puras minusculas: \n\t");
	
	scanf("%[^\n]",letra);
	
	// scanf("%s",letra);
	
	/*
	for(i=0;i<10;i++){
		
		scanf(" %c",&letra);
	
	}
	/*
	
	/*
	for(i=0;i<10;i++){
	
		letra[i]=getchar(); //getchar() Toma del teclado el caracter de la tecla que se presiona;
	
	}
	*/
	
	do{
		
		if(letra[i]>=65 && letra[i]<=90){
			
			letra[i]=tolower(letra[i]);
			
			// letra[i]+=32;
			
			// putchar(letra[i]+32);
			
			// printf(" %c ",letra[i]);
 
		}else if(letra[i]>=97 && letra[i]<=122){
			
			letra[i]=toupper(letra[i]);
			
			// letra[i]-=32;
				
			// putchar(letra[i]-32);
			
			// printf(" %c ",letra[i]);
				
		}
			
		i++;
		
	}while(i<10 && letra[i]!=0);
	
	printf("%s",letra);
	
	return 0;	
}

