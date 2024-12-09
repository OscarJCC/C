/*
nombre: Analisis de valores en funciones con condiciones
fecha:1 octubre 2020
autor:Oscar Joel Castro Contreras
descripcion:programa evaluar un valoras en funciones con condiciones

        1+.05 si 0<x<=5
f(x)=
        .7x si x>5

entradas:x

x, valor a evaluar que pertenesca a los numeros enteros positivo

salidas:f

f, valor que nos danlas condiciones inpuestas a el conjunto

conclusion:
-Como las funciones en las que se van a evaluar los valores tienen condiciones
-que nos dicen que los valors siempres son mayores a cero el dominio de las funciones que
-se estan evaluando pertenece a los numeros enteros positivos ya que x nunca puede
-ser menor a cero.
*/

#include <stdio.h>
#include<math.h>

int main()
{
	//variable
	
	int x;//valor a evaluar
	float f1,f2;//funcones en las que se evalua x

	//pedimiento e informacion
	
	printf("\t\t Programa que evalua valor en funciones con condiciones \n");
	
	printf("\n\t se evalua de la forma 1+.05x si 0<x<=5 \n\t\t o");
	
	printf("\n\t se evalua de la forma .7x si x>5 \n\n");
	
	printf("\t\t las condiciones impuestas nos imponen a decir que \n");
	printf("\t\t x pertence a los numeros enteros positivos \n");
	
	printf("\n\t Poner valor a evaluar: x= \t");
	scanf("%d",&x);
	
	//pedimento e i e impresion de resultados
	
	f1=(1+.5*x);
	
	f2=(.7*x);
	
	if(x<0){
	
	printf("\n\t\t No existe devido a que \n\t x pertenece a lo numero enteros positivos");
		
	}else if(x>5){
	
	printf("\n\t se evalua de la forma .7x \n");
	printf("\n\t\t %f",f2);
	
	}else if(x>=0&&x<=5){
	
	printf("\n\t se evalua de la forma 1+.5x");
	printf("\n\t\t %f",f1);
	
	}
	return 0;
	//fin de la funcion main
}
