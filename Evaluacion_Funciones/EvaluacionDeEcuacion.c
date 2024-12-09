/*
nombre: evalucion de la ecuacion
fecha:10 septiembre 2020
autor:Oscar Joel Castro Contreras
descripcion:programa que calcula las raices de una ecuacion de segundo grado y evaluacion de funcion

  ax^[2] + bx + c
  
  y=x^3-2x^2+6.3/x^2+.500500x-3.14
  
datos de entrada: a, b, c, x
a, variable cuadratica
b, variable lineal
c, numero independiente
x, variable de la ecuacion

salida:x1 ,x2, y,
x1, primera raiz de la ecuacion de segundo grado
x2, segunda raiz de la ecuacion de sugundo grado
y= solucion de la evalucion de la ecuacion
*/

#include <stdio.h>
#include<math.h>

int main()
{
	//variable
	  
	float a,b,c,x; //a,b,c coeficientes de ecuacion de segundo grad
	float x1,x2,y; //raises de ecuacion de segundo grado
	
	//pedimiento e informacion

	printf("\t \t ecuacion de segundo grado \n");
	printf("\n \t raises de la ecuacion del denominador \n ya que si el denominador es igual a cero la ecuacion no existe \n");
	printf("\t denominador=x^2+.500500x-3.14\n");

	//pedimento e i e impresion de resultados
	
 a=1;
 b=.500500;
 c=-3.14;
 x=1;
 
 x1=(-b+sqrt(b*b-4*a*c))/(2*a);
 x2=(-b-sqrt(b*b-4*a*c))/(2*a);
 y=(((x*x*x)-(2*x*x)+(6.3))/(((x*x)+(.500500*x)-(3.14))));
 
  //modificadores de acceso: %d --> int, %f --> float, %lf --> double
  
  printf("\n La raiz 1 es :%f\n",x1);
  printf("\n La raiz 2 es :%f\n",x2);
  printf("\n \t\t dominio de la ecuacion es cuando \n x pertenece a dom(-infinito,-2.039838)u(-2.039838,1.539338)u(1.539338,infinito)");
  printf("\n\n \t evalucion de la ecuacion con sustitullendo x");
  printf("\n\n\t resultado de evaluacion de la ecuacion:\n\t%f\n",y);
  
	return 0;
	//fin de la funcion main
}
