/*
Nombre: FuncionDeLetrasEnEspa�ol
Fecha: 07/05/2021
Autor: Oscar Joel Castro Contreras
Descripcion:

La funcion IsAlphaEs() le un caracter y determina si es una letra incluyendo las especiales,
si es verdad retorna 1 y si es falso retorna 0,


1.- si el caracter es una letra retornar 1
2._ si el caracter no es una letra retornar 0
*/

#include <stdio.h>

int IsAlphaEs(int c);

int main(){
	
	int i=0;
	
	char L;
	
	printf("Escribe una un caracter: \n");
	scanf(" %c",&L);
	
	if(isAlphaEs(L)){
		
		printf(" Si es una letra \n");
		
	}else{
	
		printf(" No es una letra \n");
		
	}
	return 0;
}

int IsAlphaEs(int c){
	
	if((c>=65 && c<=90) || (c>=97 && c<=122)){ // return (((c>=65 && c<=90) || (c>=97 && c<=122)))?1:0;
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
