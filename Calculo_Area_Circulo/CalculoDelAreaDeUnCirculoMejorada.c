/*
nombre: calculo del area de una circulo.c
fecha:23 septiembre 2020
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
	
	double r; //valores para calcular el area de un circulo
	double A; //area del circulo
	
	//pedimiento e informacion

	printf("\t\t Calculo del area de una circulo segum su radio \n");
	
	printf("\n\t introduzca valor del radio=");
	scanf("%lf",&r);
	
	//pedimento e i e impresion de resultados
	
	A=(M_PI*pow(r,2));
  
  //modificadores de acceso: %d --> int, %f --> float, %lf --> double
  
  printf("\n\n\t Valor del area del circulo:%0.10lf \n",A);
  
	return 0;
}
