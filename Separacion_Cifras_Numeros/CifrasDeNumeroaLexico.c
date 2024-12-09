/*
nombre: CIFRAS DE NUMERO A LEXICO
fecha: 04 marzo 2021
autor:Oscar Joel Castro Contreras
descripcion:

Hacer un DFD y su respectivo programa en C para una aplicación, qué, reciba un numero flotante de hasta cuatro
enteros y dos decimales, el que representa una cantidad en pesos y se requiere que se escriba en letra
(como en un cheque) la misma cantidad, por ejemplo:

a)564.7       = Quinientos sesenta y cuatro pesos 70/100 MN
b)3490.08 = Tres mil cuatrocientos noventa pesos 8/100 MN

Nota: es importante validar que el valor recibido cumpla con el formato requerido y utilizar las funciones que
considere necesarias.

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

float decimales(float n){
	return ((n-(int)n)*100);
}

int main(){
	
	float numero;
	
	printf("\n\t Escribe un numero entero poitivo de 4 digitos: \n\t\t\t\t");
	scanf("%f",&numero);
	
	if(numero>0 && numero<9999 && decimales(numero)<99){
		
		printf("%.2f = ",numero);
		
		switch(millares(numero)){
		
			case 1:
			printf("Mil");
			break;
		
			case 2:
			printf("Dos mil");
			break;
		
			case 3:
			printf("Tres mil");
			break;
	
			case 4:
			printf("Cuatro mil");
			break;
	
			case 5:
			printf("Cinco mil");
			break;
	
			case 6:
			printf("Seis mil");
			break;
	
			case 7:
			printf("Siete mil");
			break;
	
			case 8:
			printf("Ocho mil");
			break;
	
			case 9:
			printf("Nueve mil");
			break;
	
			default:
			break;
		}
			
		switch(centenas(numero)){
		
			case 1:
			printf(" Ciento");
			break;
		
			case 2:
			printf(" Doscientos");
			break;
		
			case 3:
			printf(" Trescientos");
			break;
	
			case 4:
			printf(" Cuatrocientos");
			break;
	
			case 5:
			printf(" Quinientos");
			break;
	
			case 6:
			printf(" Seiscientos");
			break;
	
			case 7:
			printf(" Setecientos");
			break;
	
			case 8:
			printf(" Ochocientos");
			break;
	
			case 9:
			printf(" Nuevecientos");
			break;
	
			default:
			break;
		}
		
		if(unidades(numero)==1{

			switch(decenas(numero)){
		
			case 1:
			printf(" Dies");
			break;
		
			case 2:
			printf(" Veinte");
			break;
		
			case 3:
			printf(" Treinta");
			break;
	
			case 4:
			printf(" Cuareta");
			break;
	
			case 5:
			printf(" Cincuenta");
			break;
	
			case 6:
			printf(" Sesenta");
			break;
	
			case 7:
			printf(" Setenta");
			break;
	
			case 8:
			printf(" Ochenta");
			break;
	
			case 9:
			printf(" Noventa");
			break;
	
			default:
			break;
		}
		
		}else{
			
			switch(decenas(numero)){
		
			case 1:
			printf(" Dies");
			break;
		
			case 2:
			printf(" Veinte");
			break;
		
			case 3:
			printf(" Treinta");
			break;
	
			case 4:
			printf(" Cuareta");
			break;
	
			case 5:
			printf(" Cincuenta");
			break;
	
			case 6:
			printf(" Sesenta");
			break;
	
			case 7:
			printf(" Setenta");
			break;
	
			case 8:
			printf(" Ochenta");
			break;
	
			case 9:
			printf(" Noventa");
			break;
	
			default:
			break;
		}
			printf(" y");
			
		}
			
		switch(unidades(numero)){
		
			case 1:
			printf(" Uno");
			break;
		
			case 2:
			printf(" Dos");
			break;
		
			case 3:
			printf(" Tres");
			break;
	
			case 4:
			printf(" Cuatro");
			break;
	
			case 5:
			printf(" Cinco");
			break;
	
			case 6:
			printf(" Seis");
			break;
	
			case 7:
			printf(" Siete");
			break;
	
			case 8:
			printf(" Ocho");
			break;
	
			case 9:
			printf(" Nueve");
			break;
	
			default:
			break;
		}
		
		printf(" %.0f/100 MN",decimales(numero));
		
	}else{
		
		printf("Numero no valido");
			
	}
		
	return 0;
}
