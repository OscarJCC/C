/*
nombre: Calculo de la posicion en la que esta un termino de la progresion aritmetica
fecha:3 octubre 2020
autor:Oscar Joel Castro Contreras
descripcion:programa que calcula la posicion de un termino de una progresion aritmetica

   u=a+(n-1)r 
   
   n=(u-a/r)+1
      
entradas: u, a, r

a, valor del primer termino de la sucecion

u, valor del termino elegido para sacar la diferencia

r, diferencia que hay entre el valor de cada termino de la progresion aritmetica

salidas: n

n, posicion del termino en la progrecion numerica

conclusiones:
-Ha termino mer refiero a la posicion que tiene el numero en la progresion
-Ha valor me refiero a el numero que esta en la prosicion 
-Por ejemplo 1, 3, 5, 7, 9, 11, 13
-si elegimos el temino 5 
-su valor seria 9 segun la progrecion.

-Tenemos que suponer que el problema nos da una parte de la sucecion y nos pide que calculemos 
-la posicion que tiene un numero saltandose varios termino por ejemplo
   5, 14, 23, 32, 41, ..., 896
-nos piden que calculemos la posicion en la que esta el termino 896 en la progresion
-entonces de la formula para calcular el valor de un termino
   u=a+(n-1)r 
-despejamos la "n" de la posicicon y nos queda
   n=(u-a/r)+1
-sustituimos los teminos necesarios que son 
-"u" que es el valor del termino que nos piden encontrar su posicion en la progresion, seria 896
-"a" que es el valor del primer termino de la progresion, seria 5
-"r" que es la diferencia que hay entre cada valor de cada termino, seria 9
-y nos quedaria que su posicion es
   n=(896-5/9)+1
   n=100
*/

#include <stdio.h>
#include<math.h>

int main()
{
	//variable
	  
	float u, a, r;//Valores necesarios para calcular la posicion de un termino en una progrsion
	float n;//Valor de la poosicicon del termino

	//pedimiento e informacion

	printf("\t\t Calculo de la posicion de un termino en una progresion \n");
	
	printf("\n Introduzca el valor del termino del que se quiere encontra su posicion en la progresion: ");
	scanf("%f",&u); 
	
	printf("\t\t Introduzca el valor del primer temino de la progresion: ");
	scanf("%f",&a);
	
	printf("\t\t Introduzca la diferencia que entre cada valor de la progresion: ");
	scanf("%f",&r);
	//pedimento e i e impresion de resultados
	
	n=(((u-a)/r)+1);//formula para calcular la posicion de un termino de la progresion
	
	printf("\n\t Posicion del numero %.0f en la progresion: ",u);
	printf("%.0f \n",n);
	
	return 0;
	//fin de la funcion main
}
