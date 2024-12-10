/*
Nombre: FuncionLetraDigito
Fecha: 07/05/2021
Autor: Oscar Joel Castro Contreras
Descripcion:

La funcion EsLetrasoDigito() le un caracter y determina si es un numero de un digito
o una letra incluyendo las especiale,
si es verdad retorna 1 y si es falso retorna 0

1.- si el caracter es una letra o un numero de un digito retornar 1
2._ si el caracter no es una letra o un numero de un digito retornar 0

*/

#include <stdio.h>
#define MAX 10

int EsLetrasoDigito(int c);

int main(){
	
	int i=0;
	
	char letra[MAX];
	
	scanf(" %[^\n]",letra);
	
	do{
		
		if(EsLetrasoDigito(letra[i])){
			
			printf(" Si es una letra o un digito\n");
			
		}else{
				
			printf(" No es letra ni digito\n");
			
		}
		
		i++;
		
	}while(letra[i]!=0 && i<10);
	
	printf(" %s ",letra);
	
	return 0;
}

int EsLetrasoDigito(int c){

	if((c>=65 && c<=90) || (c>=97 && c<=122) || (c>=48 && c<=57)){ 	// return (((c>=65 && c<=90) || (c>=97 && c<=122) || (c>=48 && c<=57)))?1:0;
		return 1;
	}
	switch(c){
		case  -96: // � = -96
		case -126: // � = -126
		case  -95: // � = -95
		case  -94: // � = -94
		case  -93: // � = -93
		case  -75: // � = -78
		case -112: // � = -112	
		case  -42: // � = -42
		case  -32: // � = -32
		case  -23: // � = -23
		case  -92: // � = -92
		case  -91: // � = -91
		case -127: // � = -127
		case -102: // � = -102
			return 1;
		default:
			return 0;
	}
}

