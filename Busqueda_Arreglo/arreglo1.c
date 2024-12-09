#include <stdio.h>

int main(){
	
	int arreglo[5];
	int i, posicion,e;
	
	printf("\n valores para el arreglo (5) \n\n");
	
	for(i=0;i<5;i++){
		
		scanf("%d",&arreglo[i]);
		
	}
	
	posicion=1;
	
	do{
		
		printf("\n ¿que posicion desea consultar? \n\t");
		scanf("%d",&posicion);
		
		if(posicion>=0 && posicion<5){
			
			printf("\n El valor en la posicion %d es %d \n",posicion,arreglo[posicion]);
		
		}else{
		
			printf("\n Error posicion (%d) fuera de rango \n",posicion);
	
		}
		
		printf("¿desea volver a preguntar? \n si; coloque un 1. \n no; coloque un 0 \n");
		scanf("%d",&posicion);
	
	}while(posicion != 0);
	
	return 0;
}
