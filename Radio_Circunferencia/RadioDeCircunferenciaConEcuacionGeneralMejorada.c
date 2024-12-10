/*
nombre: calculo del radio de una circunferencicia
fecha:23 septiembre 2020
autor:Oscar Joel Castro Contreras
descripcion:programa para calcular el radio de una circunferencia con su ecuacion general

  x^2 + y^2=r

  (x-h)^2 + (y-k)^2 = r^2
  
  r = sqrt((x-h)^2 + (y-k)^2)
  
datos de entrada:x,y,h,k
"p=(x,y)", un punto que este en la circunferencia
"c=(h,k)", centro de la Circunferencia

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
	float Difxh,Difyk;//diferencias de (x-h) y (y-k)
	
	//pedimiento e informacion

	printf("\t\t Radio de una circunferncia  \n");
	
	printf("\t\t Valores de la coordenada p: \n");
	
	printf("\t coordenada x=");
	scanf("%f",&x);
	
	printf("\t coordenada y=");
	scanf("%f",&y);
	
	printf("\t\t valores de la coordenada c: \n");
	
	printf("\t coordenada h=");
	scanf("%f",&h);
	
	printf("\t coordenada k=");
	scanf("%f",&k);
	
	//pedimento e i e impresion de resultados

Difxh=(x-h);
Difyk=(y-k);
r=(sqrt(pow(Difxh,2)+(pow(Difyk,2))));
  
  printf("\n \n Valor del radio :%f\n",r);
  
	return 0;
}

