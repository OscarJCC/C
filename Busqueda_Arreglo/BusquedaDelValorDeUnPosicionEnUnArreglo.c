#include<stdio.h>

int main(){
	
	int arreglo[5];
	int i, posicion=0;
	char c;
	
	printf("\n colocar 5 valores enteros para el arreglo (5) \n\n");
	
	for(i=0;i<5;i++){
		
		scanf("%d",&arreglo[i]);
		
	}
	
	do{
		printf("\n Dame una posicion para consultar : ");
	scanf("%d",&posicion);
	
	if(posicion>=0 && posicion <=4){
	
		printf(" El valor para la posicion %d es %d \n",posicion,arreglo[posicion]);
	
	}else{
		
		printf(" Error: posicion fuera de rango \n");
		
	}
		
		printf("\n¿desea seguir peguntando esta pregunta?\n");
		printf("\n si; escriba s \n No; escriba n \n");
		fflush(stdin);
		scanf("%c",&c);
				
	}while(c!='n' && c!='N');	
	
	return 0;
}

