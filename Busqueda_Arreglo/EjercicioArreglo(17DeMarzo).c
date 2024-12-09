/*
nombre: Ejercicio arreglo
fecha: 17 marzo 2021
autor:Oscar Joel Castro Contreras
descripcion:

Hacer un DFD y su respectivo programa en C, qué, reciba una serie de 5 valores enteros, los
almacene en un arreglo, solicite un valor a buscar, e indique en que posición se encuentra
en el arreglo, si el valor no se encuentra, marcar, error valor no encontrado y preguntar si
desea buscar otro valor.

----Hola profesor este problema no lo pude mandar el día de ayer ya que tuve unos problemas 
con mi internet y por esos problemas la plataforma de teams no me dejaba cargar los documentos.-------

----gracias por todas las explicaciones que a dado, se entiende a la perfeccion.-----
*/

#include <stdio.h>

int main(){
	
	int arreglo[5];
	int i, valor=0;
	char c;
	
	printf("\n colocar 5 valores enteros para el arreglo (5) \n\n");
	
	for(i=0;i<5;i++){
		
		scanf("%d",&arreglo[i]);
		
	}
	
	do{
		printf("\n ¿que valor deseas buscar? \n\t");
		scanf("%d",&valor);
		
		if(arreglo[0]==valor){
			
			printf("\n El valor %d se encuentra en la posicion 0 \n",valor);
			
		}else if(arreglo[1]==valor){
			
			printf("\n El valor %d se encuentra en la posicion 1 \n",valor);
			
		}else if(arreglo[2]==valor){
			
			printf("\n El valor %d se encuentra en la posicion 2 \n",valor);
			
		}else if(arreglo[3]==valor){
			
			printf("\n El valor %d se encuentra en la posicion 3 \n",valor);
			
		}else if(arreglo[4]==valor){
			
			printf("\n El valor %d se encuentra en la posicion 4 \n",valor);
			
		}else{
			
			printf("\n Error valor no encontrado \n");
			
		}
		
		printf("¿desea seguir peguntando esta pregunta?\n");
		printf("\n si; escriba s \n No; escriba n \n");
		fflush(stdin);
		scanf("%c",&c);
				
	}while(c!='n' && c!='N');
	
	return 0;
}
