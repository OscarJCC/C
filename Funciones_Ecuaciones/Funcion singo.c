/*
nombre: Funcion a trozos
fecha: 18 noviembre 2020
autor: Oscar Joel Castro Contreras
descripcion: programa que calcula el valor de f(x) segun el valor dado

            1 si x>0
  sing(x){  0 si x=0
           -1 si x<0
  
datos de entrada: x

salida:

Conclusion:
-la funcion sing(x) lo que hace es asignar a los numeros positivos el valor de 1, signa a los numeros negativos el numero -1, y a 0 le asigna el valor de 0
-para realizar el programa primero se creo un a variable x a la que se da un valor, despues con la centencia if se acomoda la impresion de los
-resultados dependiendo del valor que se le dio a la variable.
*/

#include <stdio.h>
#include<math.h>

int main()
{
	//variable
	float x;// numeros a evaluar en la funcion
	
	//pedimiento e informacion

	printf("\t\t EVALUCION DE LA FUNCION sing(x) \n\n");
	
	printf("\t{ 1 si x>0 \n");
	printf("sing(x)");
	printf("\t{ 0 si x=0 \n");
	printf("\t{ -1 si x<0 \n\n");
	
	printf("\t La funcion sing(x) solo esta definida en los numeros reales\n\n");
	
	printf("\t\t Introduzca el valor que desea evaluar en la funcion :");
	scanf("%f",&x);
	
	//pedimento e i e impresion de resultados
	
	if(x>0){
	
	printf("\n\t\t Valor de sing(%.2f) es = 1",x);
		
	}else if(x==0){
	
	printf("\n\t Valor de sing(%.2f) = 0",x);
	
	}else if(x<0){
	
	printf("\n\t Valor de sing(%.2f) = -1",x);
	
	}

	return 0;
	//fin de la funcion main
}
