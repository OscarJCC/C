/*
nombre: estructurac.c
fecha:1 septiembre 2020
autor:Oscar Joel Castro Contreras
descripcion:programa que calcula las raices de una ecuacion de segundo grado

  ax^[2] + bx + c
  
datos de entrada: a, b, c

salida:x1 ,x2, son las raices de la ecuacion de segundo grado

tipos de datos de lenguaje c,c++,JAVA:
  int: enteros
  float: numeros realrs o numeros de la forma 2.336
  double: numeros reales o numeros de la forma 5.222454646846
*/

#include <stdio.h>
#include<math.h>

int main()
{
	//variable
	
	
	  /*se puede formaro construir de esta formas:
	  1)
	  int a;
	  int b;
	  int c;
	  int x1;
	  int x2;
	  2)
	  int a,b,c;
	  int x1,x2;
	  3)
	  int termino_cuadrarico;
	  int termino_lineal;
	  int termino_independiente;
	  int raiz1;
	  int raiz2
	  4)
	 int TerminoCuadratico
	  con mayusculas y minusculas
	  */
	  
	int a,b,c; //a,b,c coeficientes de ecuacion de segundo grado
	int x1,x2; //raises de ecuacion de segundo grado
	
	//secuencias de escape: \n, \t
	
	//pedimiento e informacion


	printf("\t \t La ecuacion de segundo grado \n");

	//pedimento e i e impresion de resultados
	
	
	//operadores aritmeticos: +, -, *, /
	  /*
	  propiedad de ceradura:
	  x,y in R, x+y in R
	  x,y in R, x*y in R
	  */
	
 a=3;
 b=6;
 c=3;
 
 x1=(-b+sqrt(b*b-4*a*c))/(2*a);
 x2=(-b-sqrt(b*b-4*a*c))/(2*a);
  
  //modificadores de acceso: %d --> int, %f --> float, %lf --> double
  
  printf("\n La raiz 1 es :%d\n",x1);
  printf("\n La raiz 2 es :%d\n",x2);
  
	return 0;
	//fin de la funcion main
}

