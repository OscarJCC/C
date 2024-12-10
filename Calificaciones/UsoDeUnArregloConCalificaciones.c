#include<stdio.h>

int main(){
	
	int calificacion[5];
	int i, posicion=0;
	
	//para leer las calificaciones del arreglo usamos un ciclo for()
	
	for(i=0;i<5;i++){
		
		printf(" Espacio de la memoria para calificacion [%d] = [%p]",i,&calificacion+i);
		printf("\n Tamaño del arreglo [%lu] =",sizeof(calificacion[i]));
		printf("\n Valor para la calificacion [%d] = ",i);
		scanf("%d",&calificacion[i]);
		
	}
	//fin ciclo llendao del arreglo
		
	printf("\n Dame una posicion para consultar : ");
	scanf("%d",&posicion);
	
	if(posicion>=0 && posicion <=4){
	
		printf(" La calificacion para la posicion %d es %d \n",posicion,calificacion[posicion]);
	
	}else{
		
		printf(" Error: posicion fuera de rango");
		
	}
	
	return 0;
}

/*

	Direccion de memoria de la variable mas la posicion en el arreglo
	
*/
