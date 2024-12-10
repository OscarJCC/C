/*
nombre: Area y Volumen de un cilindro
fecha:1 octubre 2020
autor:Oscar Joel Castro Contreras
descripcion:programa que calcula area y volumen de un cilindro con su altura y radio

 -Area lateral:
  Al=2*pi*r*h
  
 -Area de la base:
  Ab=pi*r^2
  
 -Volumen:
  V=Ab*h
  V=pi*r^2*h
  
 -Area:
  A=Al+Ab
  A=Al+2*Ab


datos de entrada: r, h, pi

  pi, numero pi

  r, radio que tiene el circulo de la base del cilindro.

  h, altura que tiene el cilindro.

salida: Ab, Al V, A

  V=Ab*h, volumen obtenido del cilindro.

  A=+2*Ab, area obtenidad del cilindro

  Ab=pi*r^2, area de un circulo ya que la base de un cilindro es un circulo.

  Al=2*pi*r*h, area de el lateral de un cilindro.
  
conclusion:
-AREA DE LA BASE
-El area de la base de un cilindro
-es un circulo por lo que la formula para 
-sacar el area de la base el la misma para calucular
-el area de un circulo que es:
   pi*r^2

-AREA LATERAL
-Para sacar el area lateral de un cilindro
-vemos que la cara si la desplegamos es un rectangulo,
- el area de un rectangulo e igual a su base por su altura
   b*h
-en este caso su base seria el perimetro del circulo de la base,
-para calcular el perimetro de un circulo, es su diametro por el numero pi
-y el diametro es 2 veces el radio
   2*r
-por lo que el perimetro es
   2*pi*r
- entonce sustitullendo la formula para calcular el area lateral es:
   2*pi*r*h
  
-VOLUMEN
-Para calcular el volumen de un cilindro es el area de la base por la altura
-por lo que sustetullendo con las anterires formulas, queda
-que la formula es:
   Ab*h
   pi*r^2*h

-AREA
-Para calcular el area de un cilindro es la suma de
-el area lateral del cilindro mas 2 veces el area de la base ya que hay 2 circulo
-uno en la sima y otro en la base por lo que si sustituimos con las anteriores
-formulas nos queda que la formula es:
  Al+Ab
  2*pi*r*h+pi*r^2
  pi*r*(2*h+r)
*/

#include <stdio.h>
#include<math.h>

int main()
{
	//variable

	double r, h; //radio y altura del cilindro
	double Ab, Al; //Area de base y area lateral de un cilindro
	double V, A; //Volumen y Area del cilindro
	
	//pedimiento e informacion

	printf("\t \t Calculo del area de un cilindro \n");
	
	printf("\n\t Introduzca los valores del radio y altura \n\n");
	
	printf("\t\t Radio= ");
	scanf("%lf",&r);
	
	printf("\t\t Altura= ");
	scanf("%lf",&h);
	
	//pedimento e i e impresion de resultados
	
	//Area lateral=2*pi*r*h
	Al=(2*M_PI*r*h);
	
	//Area de la base=pi*r^2
	Ab=(M_PI*pow(r,2));
	
	//Volumen=pi*r^2*h
	V=(Ab*h);
	
	printf("\n\t Volumen= %0.10lf \n",V);
	
	//Area=pi*r*(2*h+r)
	A=(Al+Ab);
	
	printf("\n\t Area= %0.10lf \n",A);
	
	return 0;
	//fin de la funcion main
}

