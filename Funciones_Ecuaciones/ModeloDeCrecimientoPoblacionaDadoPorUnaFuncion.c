/*
nombre: Calculo del un modelo de crecimiento poblacional que esta dado por una funcion
fecha:3 octubre 2020
autor:Oscar Joel Castro Contreras
descripcion:programa que calcula  el crecimiento pobalcional dado por n=5t+e^0.1t

   n=5t+e^0.1t
      
entradas:t

t, es el tiempo en a�os que nos da el crecimiento

salidas: n

n, crecimiento poblacional en sierto tiempo

conclusiones:
-tenemos que sustuir los valores de tiempo en la funcion y nos idicara
-el crecimiento poblacional de cada a�o.
*/

#include <stdio.h>
#include<math.h>

int main()
{
	//variable
	  
	float t;//valor del tiempo en a�os
	float n, n1, n2, n3;//Valor del crecimiento poblasional respecto al tiempo

	//pedimiento e informacion

	printf("\t\t Calculo del crecimiento poblacional \n");
	
	//pedimento e i e impresion de resultados
	
	n1=((5*1)+pow(M_E,.1*1));
	n2=((5*2)+pow(M_E,.1*2));
	n3=((5*3)+pow(M_E,.1*3));
	
	printf("\n\t Crecimiento de la poblacion en 1 a�o:%.2f",n1);

	printf("\n\t Crecimiento de la poblacion en 2 a�os:%.2f",n2);
	
	printf("\n\t Crecimiento de la poblacion en 3 a�os:%.2f \n",n3);
	
	printf("\n\t Indique el tiempo en el que se quire medir el crecimiento poblaciona: ");
	scanf("%f",&t);
	
	n=(5*t)+pow(M_E,.1*t);
	
	if(t==1){
	
	printf("\n\t Cremiento poblacional en %.0f a�o: ",t);
	printf("%.2f",n);
	
	}else{
		
	printf("\n\t Cremiento poblacional en %.0f a�os: ",t);
	printf("%.2f",n);
	
	}
	return 0;
	//fin de la funcion main
}
