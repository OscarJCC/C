/*
nombre: estructurac.c
fecha: 1 octubre 2020
autor:Oscar Joel Castro Contreras
descripcion:programa que calcula las raices de una ecuacion de segundo grado

  ax^[2] + bx + c
  
datos de entrada: a, b, c

salida:x1 ,x2, son las raices de la ecuacion de segundo grado

  x=(-b+sqrt(pow(b,2)-4*a*c))/(2*a)
*/

#include <stdio.h>
#include<math.h>

int main()
{
	//variable

	float a,b,c; //a,b,c coeficientes de ecuacion de segundo grado
	float x1,x2; //raises de ecuacion de segundo grado
	float Evaluacion1,Evaluacion2;//evaluaciones de las raices
	float D;//D, es el discriminante de la raiz de la ecuacion cuadratica
	float u, v;//soluciones imaginarias
	//secuencias de escape: \n, \t
	
	//pedimiento e informacion

	printf("\t \t La ecuacion de segundo grado \n");
	
	printf("\t\t Coeficiente de la ecuacion.\n\n");
	
	printf("\t\t Introduzca coeficiente cuadratico a=");
	scanf("%f",&a);
	
	printf("\t\t Introduzca coeficiente lineal b=");
	scanf("%f",&b);
	
	printf("\t\t Introduzca coeficiente constante c=");
	scanf("%f",&c);
	
	//pedimento e i e impresion de resultados
	
	D=(pow(b,2)-4*a*c);
	
	x1=(-b+sqrt(D))/(2*a);
	x2=(-b-sqrt(D))/(2*a);
	
	u=(-b/(2*a));
	v=(sqrt(fabs(D))/(2*a));
	
	Evaluacion1=(fabs((a*pow(x1,2))+(b*x1)+c));
	Evaluacion2=(fabs((a*pow(x2,2))+(b*x2)+c));
	
	if(a==0){
	
	printf("\n\t\t No es una ecuacion cuadratica si a = 0 \n");
	
	}else if(D==0){
		
	printf("\n\t Solo hay una solucion:\n");
	printf("\n\t\t X = %f \n",x1);
	
	printf("\n\t Evaluacion: \n\n"); 
	printf("\t\t %.0f = 0 \n",Evaluacion1);
		
	}else if(D>0){
		
	printf("\n\t Existen 2 soluciones \n:");
	printf("\n\t X1 = %f \n",x1);
	printf("\t X2 = %f \n",x2);
	
	printf("\n\t Evaluacion X1: \n");
	printf("\n\t\t %.0f = 0 \n",Evaluacion1);
	printf("\n\t Evaluacion X2: \n");
	printf("\n\t\t %.0f = 0 \n",Evaluacion2);
	
	}else if(D<0){
		
	printf("\n\t La solucion no pertenece a las numeros reales \n");
	printf("\t por lo que la soluciones son un numero complejo \n");
	printf("\t o imaginario: \n");
	
	printf("\n\t X1 = %f +",u);
	printf(" %f i ",v);
	printf("\n\t X2 = %f -",u);
	printf(" %f i \n",v);
	}

	return 0;
	//fin de la funcion main
}

