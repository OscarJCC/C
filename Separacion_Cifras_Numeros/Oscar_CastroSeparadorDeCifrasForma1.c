/*
nombre: SEPARADOR DE SIFRAS FORMA 1
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
	
	int UM,M;
	
	M=(n%1000);
	UM=(n-M)/1000;
	
	return UM;
}

int centenas(int n){
	
	int UC,C;
	
	C=(n-(n%1000))+(n%100);
	UC=(n-C)/100;
	
	return UC;
}

int decenas(int n){
	
	int UD,D;
	
	D=n-(n%100)+(n%10);
	UD=(n-D)/10;
	
	return UD;
}

int unidades(int n){
	
	int U,A;

	A=n-(n%10);
	U=n-A;
	
	return U;
}

int main(){
	
	int numero;
	
	printf("\n\t Escribe un numero entero poitivo de 4 digitos: \n\t\t\t\t");
	scanf("%d",&numero);
	
	if(numero<0){
		
		printf("\n\t\t\t Numero no valido");
		
	}else{
		
		if(numero>9999){
			
			printf("\n\t\t\t Numero no valido");
			
		}else{
			
			printf("\n\t Unidades de millar  : %d",millares(numero));
			printf("\n\t Unidades de centena : %d",centenas(numero));
			printf("\n\t Unidades de decena  : %d",decenas(numero));
			printf("\n\t Unidades            : %d",unidades(numero));
	
		}
		
	}
		
	return 0;
}
