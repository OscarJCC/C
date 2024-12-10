/*
nombre: estructurac.c
fecha:1 septiembre 2020
autor:Oscar Joel Castro Contreras
descripcion:programa para calcular el radio de una circunferencia con su ecuacion general

  (x-h)^2+(y-k)^2=r^2
  
  r=sqrt(x-h)^2+(y-k)^2
  
datos de entrada:x,y,h,k
(x,y), un punto que este en la circunferencia
(h,k), centro de la Circunferencia

salida:r
r, radio que tiene la circunferencia
*/

#include <stdio.h>
#include<math.h>

int main()
{
	//variable

	float x,y,h,k; //valores de los puntos, p(x,y) y c(h,k)
	float r; //radio de la circunferencia
	
	//pedimiento e informacion

	printf("\t \t Radio de una circunferncia  \n");
	
	//pedimento e i e impresion de resultados

x=-2;
y=-3;
h=1;
k=1;

r=(sqrt(((x-h)*(x-h))+((y-k)*(y-k))));
  
  //modificadores de acceso: %d --> int, %f --> float, %lf --> double
  
  printf("\n \n Valor del radio :%f\n",r);
  
	return 0;
}

