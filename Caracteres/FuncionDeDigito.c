/*
Nombre: FuncionDeDigito
Fecha: 07/05/2021
Autor: Oscar Joel Castro Contreras
Descripcion:

La funcion EsDigito() le un caracter y determina si es un numero de un digito.
si es verdad retorna 1 y si es falso retorna 0

1.- si el caracter es un numero de un digito retornar 1
2._ si el caracter no un numero de un digito retornar 0
*/

#include <stdio.h>

int EsDigito(int c);

int main(){
	
	int i=0;
	
	char L;
	
	printf("Escribe una un caracter: \n");
	scanf(" %c",&L);
	
	if(EsDigito(L)){
		
		printf(" Es un digito \n");
		
	}else{
	
		printf(" No es un digito \n");
		
	}
	return 0;
}

int EsDigito(int c){
	
	if (c>=48 && c<=57){ //((c>=48 && c<=57)?:1:0);
		return 1;
	}else{
		return 0;
	}
}
