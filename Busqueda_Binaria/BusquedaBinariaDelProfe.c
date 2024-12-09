#include <stdio.h>
#define TAMAÑO 4

int main(){
	
	int arreglo[]={1,2,3,4,5,6};
	int A, B, C, x;
	int encontrado = 0;
	
//pedir el valor a buscar
	printf("\n Valor a buscar:");
	scanf("%d",&x);
	
//Definir los extremos de al lista a buscar
	A = 0;
	B = 4;

//inicio de la busqueda binaria
	do{

//pregunta si el valor buscado es alguno de los extremos
		encontrado = (x == arreglo[A] || x == arreglo[B])? 1:0;
		
		if(encontrado){
			
			C = (x == arreglo[A])? A:B;
			break;
			
		}
		
//si ni es uno de los extremos ir a la mitad del arreglo
		C=(A+B)/2;
		
//preguntar si C es igual al valor encontrado
		if(x == arreglo[C]){
			
			encontrado = 1;
			break;
			
//si no es el C, intercambiar los extremos
		}else if(x > arreglo[C]){
			
			A=C; //El valor buscado esta en la parte derecha
			
		}else{
			
			B=C; //El valor buscado esta en la parte izquierda
			
		}
		
//verificar si ya no se puede buscar mas, diferencia entre A y B es 1
		if(A - B == 1 || B - A == 1){
			
			printf("\n El valor no se encuentra en el arreglo \n");
			break;
			
		}
		
	}while(!encontrado);
	
	(encontrado)? printf("\n El valor esta en la posicion %d \n",C) : printf("\n El valor no se encuentra en el arreglo \n");
	
	return 0;
}
