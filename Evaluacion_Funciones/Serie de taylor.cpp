#include<stdio.h>

int potencia(int B,int e){
	int i, resultado=1;
	
	for(i=0;i<e;i+1){
		
		resultado*=B;
		
	}
	return resultado;
}

int main(){
	
	float n,m,k,i,x,t,suma=0;
	
	printf("\n\t\t\t Serie de Taylor \n");
	
	printf("\n Cuantas veces se repetira:");
	scanf("%f",&i);
	
	printf("\n Para que valor de 'x' se evaluara:");
	scanf("%F",&x);
	
	for(k=1; k<=i; ++k){
		
		n=potencia(-1,(k+1));
		m=potencia((x-1),k);
		
		t=(n/k)*(m);
		
		suma=suma+t;
		
	}
	
	printf("t(x) = %f",suma);
	
	return 0;
}
