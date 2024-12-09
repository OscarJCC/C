/*
nombre: SEPARADOR DE SIFRAS FORMA 2
fecha: 27 febrero 2021
autor:Oscar Joel Castro Contreras
descripcion:

Diseñar un DFD y su respectivo programa en C qué, reciba un valor entero positivo de hasta 4 cifras y lo 
descomponga en unidades, decenas, centenas y unidades de millar (según sea el caso), para resolverlo 
utilice una función para cada cifra.

Nota: validar que el valor recibido no sea mayor a 4 cifras ni menor a 0.
*/

#include<stdio.h>

int millares(int n){
	return (n/1000);
}

int centenas(int n){
	return ((n/100)%10);
}

int decenas(int n){	
	return ((n/10)%10);
}

int unidades(int n){
	return (n%10);
}

int main(){
	
	int numero;
	
	printf("\n\t Escribe un numero entero poitivo de 4 digitos: \n\t\t\t\t");
	scanf("%d",&numero);
	
	if(numero>0 && numero<=9999){
		
		printf("\n\t Unidades de millar  : %d",millares(numero));
		printf("\n\t Unidades de centena : %d",centenas(numero));
		printf("\n\t Unidades de decena  : %d",decenas(numero));
		printf("\n\t Unidades            : %d",unidades(numero));
		
	}else{
		
		printf("Numero no valido");
			
	}
		
	return 0;
}
