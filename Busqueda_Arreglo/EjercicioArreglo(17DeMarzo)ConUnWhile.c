/*
nombre: Ejercicio arreglo
fecha: 17 marzo 2021
autor:Oscar Joel Castro Contreras
descripcion:

Hacer un DFD y su respectivo programa en C, qué, reciba una serie de 5 valores enteros, los
almacene en un arreglo, solicite un valor a buscar, e indique en que posición se encuentra
en el arreglo, si el valor no se encuentra, marcar, error valor no encontrado y preguntar si
desea buscar otro valor.

*/

#include <stdio.h>

int main(){
	
	int arreglo[5];
	int i, valor=0;
	char c;
	
	printf("\n colocar 5 valores enteros para el arreglo (5) \n");
	
	for(i=0;i<5;i++){
		
		scanf("%d",&arreglo[i]);
		
	}
	
	i=0;
	do{
		printf("\n ¿que valor deseas buscar? \n\t");
		scanf("%d",&valor);
			
		while(arreglo[i] != valor && i<5){
				
			++i;
			
		}
	
		if(i<5){
			
			printf("\n El valor esta en la posicion %d \n",i);
			
		}else{
			
			printf("\n El valor no se encuantra en el arreglo \n");
			
		}
		
		printf("\n ¿Desea seguir peguntando esta pregunta? \n");
		printf("\n si; escriba s \n No; escriba n \n");
		fflush(stdin);
		scanf("%c",&c);
	
	}while(c!='n' && c!='N');
	
	return 0;
}
