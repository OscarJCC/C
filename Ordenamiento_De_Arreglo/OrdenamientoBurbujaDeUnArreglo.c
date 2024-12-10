
#include<stdio.h>

int main(){
	
	int arreglo[6];
	int i,j,valor,aux;
	
	printf("\n Colocar valor para cada posicion \n");

	for(i=0; i<6; i++){
		
		printf("\n P(%d)",i);
		scanf("%d",&arreglo[i]);
		
	}
	
	for(i=0; i<6; i++){
	
		for(j=i+1; j<6; j++){
			
			if(arreglo[i] > arreglo[j]){
			
				aux=arreglo[i];
				arreglo[i]=arreglo[j];
				arreglo[j]=aux;
					
			}
		
		}
		
		printf("\n Valor de la posicion (%d) = %d \n",i,arreglo[i]);
	
	}
	
	
	
	return 0;
}
