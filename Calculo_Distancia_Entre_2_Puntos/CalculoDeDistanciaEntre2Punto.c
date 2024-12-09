/*
nombre: Calculo de la distancia entre 2 puntos
fecha:23 septiembre 2020
autor:Oscar Joel Castro Contreras
descripcion:programa que calculos las distancias entre 2 puntos en el plano carteciano.

   ||xy||=sqst((x2-x1)^2 + (y2-y1)^)

entradas:x1,y1,x2,y2
x=(x1,y1), punto que se encuentra en el plano xy
y=(x2,y2), punto que se encuentra en el plano xy

salidas: xy
xy, numero real que representa la distancia entre los puntos en el plano

conclusiones:
-primero se debe definir como se resolvera el problema,
-analizando el problema se puede encontrar que se puede calcular la distancia de cada eje,
-restando su posiciones, en eje x seria (x2-x1), y en el eje y seria (y2-y1),
-formando un triangulo rectangulo y observando que la distancia xy es la hipotenusa,
-la diatancia calculada en los ejes son catetos,
-entonces se puede usar el teorema de pitagora para resolver este problema,
   h^2 = c^2 + c^2
-despejando la hipotenusa y observando que los cateto son las ditancia (x2-x1) y (y2-y1)
   h=sqst(c^2 + c^2)
-llegando a la formula sustillendo los valores que dice,
   xy=sqst((x2-x1)^2 + (y2-y1)^)
-por logica decimos que una distancia siempre es positiva y le colocamos valor absoluto,
   ||xy||=sqst((x2-x1)^2 + (y2-y1)^)
*/

#include <stdio.h>
#include<math.h>

int main()
{
	//variable
	  
	float x1,x2,y1,y2;//puntos que se encuentran en el plano xy
	float xy;//valor de la norma
	float cateto1,cateto2;//Distancia entre (x1 y x2) y (y1 y y2)

	//pedimiento e informacion

	printf("\t\t Calculo de la distancia entre 2 puntos \"x\" y \"y\" \n");
	
	printf("\t\t introduzca coordenada x1:");
	scanf("%f",&x1);
	
	printf("\t\t introduzca coordenada y1:");
	scanf("%f",&y1);
	
	printf("\t\t introduzca coordenada x2:");
	scanf("%f",&x2);
	
	printf("\t\t introduzca coordenada y2:");
	scanf("%f",&y2);

	//pedimento e i e impresion de resultados
	
	cateto1=(x2-x1);
	cateto2=(y2-y1);
	
	xy=sqrt(pow((cateto1),2)+pow((cateto2),2));
	
	printf("\n Distancia entre los puntos \"x\" y \"y\" = %f\n",xy);

	return 0;
	//fin de la funcion main
}

