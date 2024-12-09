/*
nombre: calculo del area de una circulo
fecha:10 septiembre 2020
autor:Oscar Joel Castro Contreras
descripcion:programa para calcular area de una circulo con su raiz

  A=pir^2
  
datos de entrada:pi,r
pi, numero 3.141592654
r, radio que tiene el circulo

salida:A
A, area que tiene el circulo
*/
#include <stdio.h>
#include<math.h>

int main()
{
	//variable

	float pi,r; //valores para calcular el area de un circulo
	float A; //area del circulo
	
	//pedimiento e informacion

	printf("\t\t Calculo del area de una circulo \n");
	
	//pedimento e i e impresion de resultados
	
	r=3;
	pi=3.14159265;
	
	A=(pi*r*r);
  
  //modificadores de acceso: %d --> int, %f --> float, %lf --> double
  
  printf("\n\n\t Valor del area :%f \n",A);
  
	return 0;
}
