/*
nombre: Calculo de enecimo termino de una progrecion aritmetica
fecha:3 octubre 2020
autor:Oscar Joel Castro Contreras
descripcion:programa que calcula en encimo termino de una progrecion aritmetica

   u=a+(n-1)r
      
entradas: a, n, r

a, valor del primer termino de cualquier progrecion aritmetica

n, Termino que se quiere encontrar de la progrecion aritmetica

r, diferencia que hay entre el valor de cada termino de la progrecion aritmetica

salidas: u

u, Valor del numero que se quiere encontrar

conclusiones:
-Ha termino mer refiero a la posicion que tiene el numero en la progreciona
-Ha valor me refiero a el numero que esta en la prosicion 
-Por ejemplo 1, 3, 5, 7, 9, 11, 13
-si elegimos el temino 5 
-su valor seria 9 segun la progrecion.

-Para peder calcular el enecimo termino de una progrecion se necesita
-tener una parte de la progrecion opor ejemplo
   5, 14, 23, 32, 41
-la formula es
   u=a+(n-1)r
-donde a es el primer termino de la que tenemos de la progrecion
-n es el termino que queremos encontrer de la suscesion
-y r es la diferencia que hay entre cada termino por ejemplo entre 5 y 14
-14-5=9 la diferencia que hay es de 9
-por lo que si quisiereamos encontrer el termino numero 20 seria
   u=5+(20-1)9
   u=176
-u es el numero que tiene el encimo termino que se quiere encontrar en este caso 
-el temino 20 esta el numero 176 
*/

#include <stdio.h>
#include<math.h>

int main()
{
	//variable
	  
	float a, n, r;//Valores necesarios para calcular el enecimo termino
	float u;//Valor del enecimo termino
	float x;//Valor que complementa la funcion para poder obtene un termino de la progrecion

	//pedimiento e informacion

	printf("\t\t Calculo del enecimo termino de una progrecion aritmetica\n");
	
	printf("\n\t\t Introduzca valor del primer termino de la progrecion:");
	scanf("%f",&a);
	
	printf("\t\t Introduzca el termino que se quiere encontrar:");
	scanf("%f",&n); 
	
	printf("\t\t Introduzca la diferencia que hay entre cada termino:");
	scanf("%f",&r);
	
	//pedimento e i e impresion de resultados
	
	u=(a+((n-1)*r));//formula para sacar el encimo termino de una sucesion numerica
	
	x=(a-r);//Valor que complementa la funcion para poder obtene un termino de la progrecion
	
	printf("\n\t Valor del termino %.0f de la progrecion es: ",n);
	printf("%.0f",u);
	
	if(x==0){
		
	printf("\n\n\t Funcion de la progrecion: %.0fn",r);
		
	}else{
		
	printf("\n\n\t Funcion de la progrecion: %.0fn",r);
	printf("%.0f \n",x);
		
	}
	
	return 0;
	//fin de la funcion main
}
