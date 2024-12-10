/*
nombre: Funcion a trozos
fecha: 18 noviembre 2020
autor: Oscar Joel Castro Contreras
descripcion: programa que calcula el valor de f(x) segun el valor dado

           5        si x<=2
  f(x){  x^2-6x+10  si 2<x<5
         4x-15      si x>=5
  
datos de entrada: x

salida:f2,f3

Conclusion:
-para el programa primero coloque la variable x que tiene la funcion, despues coloque una variable para cada funcion para la que esta definida f(x)
-luego se le da un valor a la variable x, despues se colocaron las funciones para las que se evaluara la variable x,luego
-yo use la sentencia if para imprimir los resultaos evaluados en f(x) dependiendo del valor que se le dio a la variable x.
*/

#include <stdio.h>
#include<math.h>

int main()
{
	//variable
	float x;// numeros a evaluar en la funcion
	float f2,f3;//valor de las funciones en las que esta definida f(x) b
	
	//pedimiento e informacion

	printf("\t\t EVALUCION DE LA FUNCION \n\n");
	
	printf("\t{ 5 si x<=0 \n");
	printf("f(x)");
	printf("\t{ x^2-6x+10 si 2<x<5 \n");
	printf("\t{ 4x-15 si x>=5 \n\n");
	
	printf("\t La funcion f(x) solo esta definida en los numeros reales\n\n");
	
	printf("\t\t Introduzca el valor que desea evaluar en la funcion :");
	scanf("%f",&x);
	
	//pedimento e i e impresion de resultados
	
	f2=(pow(x,2)-(6*x)+10);
	
	f3=((4*x)-15);
	
	if(x<=0){
	
	printf("\n\t\t Valor de f(%.2f) es = 5",x);
		
	}else if(x>2&x<5){
	
	printf("\n\t Valor de f(%.2f) =",x);
	printf(" %.2f",f2);
	
	}else if(x>=5){
	
	printf("\n\t Valor de f(%.2f) =",x);
	printf(" %.2f ",f3);
	
	}else if(x>0&x<=2){
	
	printf("\n\t La funcion no esta definida para este valor ");
	
	}
	
	return 0;
	//fin de la funcion main
}
