#include<stdio.h>

int main(){
	
	int arreglo[]={5,8,9,6,3,4};
	int i,j,aux;
	
	//orden acendente
	for(i=0; i<6; i++){
	
		for(j=i+1; j<6; j++){
			
			if(arreglo[i] < arreglo[j]){
			
				aux=arreglo[i];
				arreglo[i]=arreglo[j];
				arreglo[j]=aux;
					
			}
		
		}
		
		printf("\n Orden ascendente \n",i,arreglo[i]);
		for(i=0;i<6;++i){
			
			printf(" \t\t\n %d",arreglo[i]);
			
		}
	}
	
	//orden decendente
	for(i=0; i<6; i++){
	
		for(j=i+1; j<6; j++){
			
			if(arreglo[i] > arreglo[j]){
			
				aux=arreglo[i];
				arreglo[i]=arreglo[j];
				arreglo[j]=aux;
					
			}
		
		}
		
		printf("\n Orden desendente \n",i,arreglo[i]);
		for(i=0;i<6;++i){
			
			printf(" \t\t\n %d",arreglo[i]);
			
		}
	}
	
	i = 0;
	j = 0;
	
	while(i >= 0, i <= 6){
		while(j >= i+1, j <= 10){
			
			if(Datos[i]>Datos[j]){
				aux = Datos[i];
				Datos[i] = Datos[j];
				Datos[j] = aux;
			}
		j++;
		i++;
		}
		printf("\n Orden desendente \n",i,Datos[i]);
		int a = 0;
		while(a >= 0, a <= 11){
			printf("%f\n",Datos[a]);
			a++;
		}
	}
	
	return 0;
}
