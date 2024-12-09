/*
Nombre: Calculo de un numero entero positivo menor o igual a 20
Fecha: 14 enero 2021
Autor: Oscar Joel Castro Contreras
Descripcion: Programa que permite capturar el volor entero positivo menor o igual a 20 que indica su resultado de la siguiente forma:

  1 + 1/2 + 1/3 + 1/4 + 1/n

*/
#include <stdio.h>
#include <math.h>

int main(){
	
	//variables
	float n, suma, i, o;
	
	//Pedido de informacion
	printf("\n\n\t\t INTRODUCE UN NUMERO ENTERO MENOR O IGUAL A 20 -- ");
	scanf("%f",&o);
	
	//Procedimiento e impresion de datos
	if(o<0){

		printf("\n\n\t\t --ERROR DEBES COLOCAR UN NUMERO ENTERO MENOR O IGUAL A 20-- \n");
		
	}else if(o>20){
		
		printf("\n\n\t\t --ERROR DEBES COLOCAR UN NUMERO ENTERO MENOR O IGUAL A 20-- \n");	
		
	}else{
	i=1;
	while(i<=o){
		n=i;
		suma=1/n;
		printf("%.4f + ",suma);
		i=i+1;
	}			
	}	
	return 0;
}
