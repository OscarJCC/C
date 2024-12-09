#include<stdio.h>

int main(){
	
	int arreglo[]={1,2,3,4,5,6,7,8};
	int A, B, C, x, i=1;
	
	printf("\n¿que valor desea buscar en el arreglo? \n");
	scanf("%d",&x);

	A=0;
	B=6;
	
	do{
		
		C=(A+B)/2;
		
		if(x==arreglo[A]){
			
			printf("\n El valor %d en la posicion %d \n",x,A);
			i=0;
			
		}else if(x==arreglo[B]){
			
			printf("\n El valor %d esta en la posicion %d \n",x,B);
			i=0;
			
		}else if(x==arreglo[C]){
				
			printf("\n El valor %d esta en la posicion %d \n",x,C);
			i=0;
			
		}else if(x>arreglo[C]){
			
			A=C;
			
		}else if(x<arreglo[C]){
				
			B=C;
			
		}
		
		if(A - B == 1 || B - A == 1){
			
			printf("\n Valor no encontrado \n");
			i=0;
			
		}
		
	}while(i!=0);
	
	return 0;
}
