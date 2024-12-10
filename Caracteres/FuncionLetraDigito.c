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
		case  -96: // á = -96
		case -126: // é = -126
		case  -95: // í = -95
		case  -94: // ó = -94
		case  -93: // ú = -93
		case  -75: // Á = -78
		case -112: // É = -112	
		case  -42: // Í = -42
		case  -32: // Ó = -32
		case  -23: // Ú = -23
		case  -92: // ñ = -92
		case  -91: // Ñ = -91
		case -127: // ü = -127
		case -102: // Ü = -102
			return 1;
		default:
			return 0;
	}
}

