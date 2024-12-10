/*
nombre: Calculo de la difernecia que hay entre el valor de cada termino de una progresion aritmetica
fecha:3 octubre 2020
autor:Oscar Joel Castro Contreras
descripcion:programa que calcula la diferencia que hay entre el valor de cada termin de una progrecion

   u=a+(n-1)r 
   
   r=u-a/(n-1)
      
entradas: u, a, n

n, define un termino de la progrecion elegido para sacar la diferencia

a, valor del primer termino de la sucecion

u, valor del termino elegido para sacar la diferencia

salidas: r

r, diferencia que hay entre el valor de cada termino de la progresion

conclusiones:
-Ha termino mer refiero a la posicion que tiene el numero en la progreciona
-Ha valor me refiero a el numero que esta en la prosicion 
-Por ejemplo 1, 3, 5, 7, 9, 11, 13
-si elegimos el temino 5 
-su valor seria 9 segun la progrecion.

-Tenemos que suponer que nosotros conocemos la mayor parte de toda la sucesion por ejemplo
-la sucesion que vamos a suponer que conosemos es
   5, 14, 23, 32, 41, 50, 59, 68, 77, 86, ...
-y que remos calcular la diferencia que hay entre cada termino
-entonce para calcular la diferencia usamos la formula
   u=a+(n-1)r
-y despejamos r que es la diferencia y nos queda
   r=u-a/(n-1)
-entonses elegimos un termino cualquiera de la progrecion que conosemos y
sustituimos los valores en la funcion por ejemplo
-de la sucecion elegimos en numero 68 entonces nosotros sabemos que es el
-termino 8, y el primer termino que conosemos de la progrecion es el 5
-entonces el valor de "u" que es el valor del temino seria 68, el valor de "n"
-que es el termino elegido sera el 8 y "a" que es el valor primer temino  seria igual a 5
-hasi que sustituimos y nos queda que
   r=68-5/(/8-1)
   r=9
-nos queda que la diferencia entre cada valor es igual a 9
*/

#include <stdio.h>
#include<math.h>

int main()
{
	//variable
	  
	float u, a, n;//Valores necesarios para calcular la diferenca de una progrecion
	float r;//Valor de la diferencia que entre cada valor de la progrecion

	//pedimiento e informacion

	printf("\t\t Calculo de la diferencia que hay entre cada valor de la progrecion \n");
	
	printf("\n\t\t Introduzca el valor de un termino cualquera de la progrecion: ");
	scanf("%f",&u); 
	
	printf("\t\t Introduzca la posicion del termino elegido en la progrecion: ");
	scanf("%f",&n);
	
	printf("\t\t Introduzca valor del primer termino de la progrecion: ");
	scanf("%f",&a);
	//pedimento e i e impresion de resultados
	
	r=((u-a)/(n-1));//formula para sacar la diferencia entre cada valor
	
	printf("\n\t Valor de la diferencia que hay entre cada valor de la progrecion es: %.0f \n",r);
	
	return 0;
	//fin de la funcion main
}
