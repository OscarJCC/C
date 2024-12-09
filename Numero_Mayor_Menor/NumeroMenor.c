#include<stdio.h>
int main(){
	
	float a,b,c;
	
	printf("\t\t Programa que determina \n\t\t el mayor de 3 numeros \n\n");
	
	printf("Escribe el primer numero \n");
	scanf("%f",&a);
	printf("Escribe el segundo numero numero \n");
	scanf("%f",&b);
	printf("Escribe el tercer numero \n");
	scanf("%f",&c);
	
	if(a>b){
		
		if(a>c){
			
			printf("a es mayor");
			
		}else {
			
			printf("c es mayor");
			
		}
	}else if(b>c){
		
		printf("b es mayor");
		
	}else{
		
		printf("c es mayor");
		
	}
	
return 0;
}
