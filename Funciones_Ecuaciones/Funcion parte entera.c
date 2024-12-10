/*
nombre: evaluacion de funcion parte entera
fecha: 18 noviembre 2020
autor: Oscar Joel Castro Contreras
descripcion: programa que calcula el valor entero de cualquier numero real evaluandolo en la funcion parte entera

  f(x)=[x]

datos de entrada: A

salida:

Conclusion:
-La funcion parte entera toma cualquier numero real y le asigna un numero equivalente entero, definiendo la funcion al graficarla por tramos.
-para asignar el valor entero equivalente, la funcion comprende cada numero real en un intervalo de 2 numeros enteros, dandole al numero real un
-valor del numero entero mas pequeño de ese intervalo por ejemplo si tomamos el numero 1.2 este se encuentra en el intervalo de los numeros enteros 1 y 2
-por lo que el valor que le asigna la funcion es 1
  f(x)=[x]
  f(1.2)=1
  
-y si es un numero negativo por ejemplo -5.4 este se encuentra entre el intervalo de los numeros enteros -5 y -6
-por lo que el valor que le da la funcion es -6 ya que es el numero mas pequeño del intervalo
  f(x)=[x]
  f(-5.4)=-6

-para poder realizar el programa, primero coloque una variable A que es a la que se le asignara un valor que pertenesca a los numeros reales
-despues de la bibliote math.h hay 2 funciones llamadas ceil y floor,

-la funcion ceil: toma el valor de la variable y lo redondea dependiendo de las decimales que tenga el numero asignado a la variable,
-por ejemplo si se le asigna el valor de 1.5, la funcion ceil lo redondea a 2 o si se le asigna el valor de 1.4, la funcion ceil lo redondea a 1.

-la funcion floor: toma el valor de la variable y lo redondea al numero mas pequeño del intevalo que pertenese el numero asignado a la variable,
-por ejemplo si se le asigna el valor de 2.5, la funcion floor lo redondea a 2, o si se le asigna el valor de 2.9, la funcion lo redondea a 2.

-por lo que a la hora de imprimir los resultados se utiliso la funcion floor ya que la funcion parte entera evaluan igual los numeros 
-por lo que se coloca de la forma
   printf("%f",A,floor(A));
esto nos redondea el valor que se le asigno a la variable al numero entero mas pequeño del intervalo al que pertenese.
*/

#include <stdio.h>
#include<math.h>

int main()
{
	//variable
	
	float A;// numeros real a evaluar en la funcion parte entera
	
	//pedimiento e informacion

	printf("\t\t Evaluacion de un numero real en la funcion parte entera \n");
	
	printf("\t\t Introduzca cualquier numero real =");
	scanf("%f",&A);
	
	//pedimento e i e impresion de resultados

   printf("\n\n\t\t Valor entero de (%f) = %.0f\n",A,floor(A));
   
	return 0;
	//fin de la funcion main
}
