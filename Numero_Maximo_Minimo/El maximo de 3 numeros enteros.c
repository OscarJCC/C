/*
nombre: El maximo de 3 numeros enteros
fecha: 18 noviembre 2020
autor: Oscar Joel Castro Contreras
descripcion: programa que calcula el maximo y el minimo de 3 numeros enteros
  
datos de entrada: A,B,C

salida:Maximo, Minimo

Conclusion:
-Para calcular los minimos de 3 numeros enteros primero coloque 3 variable A,B,C
-despues se les asigna un valor con scanf
-luego de darle valoras a las variables, yo utilise la asignacion if para evaluar cada uno de los valores
-primero evalue el valor que se le asigno a la variable A, intentando acomodar las condiciones llegue a que se puede acomodar de
-forma que destro de la asignacion if se pude colocar otra asignacion if con condiciones diferentes y de esa forma el evaluir la variable 
-con 2 condiciones, hasi evalue cada variable, primero se evalua si es el maximo y des pues el minimo
-luego se pasa a la siguiente variable y analisa lo mismo hasi hasta analizar los 3 valores.
*/

#include <stdio.h>
#include<math.h>

int main()
{
	//variable
	
	int A,B,C;// numeros enteros a evaluar
	
	//pedimiento e informacion

	printf("\t\t MAXIMO Y MINIMO DE 3 NUMEROS enteros \n");
	
	printf("\t\t Introduzca primer numero  =");
	scanf("%d",&A);
	
	printf("\t\t Introduzca segundo numero =");
	scanf("%d",&B);
	
	printf("\t\t Introduzca tercer numero  =");
	scanf("%d",&C);
	
	//pedimento e i e impresion de resultados
	
	//Analisis de primer numero
	if(A>B){
		if(A>C){
		
		printf(" Maximo = %d \n",A);
		
		}
	}else if(A<B){
		if(A<C){
		
		printf(" Minimo = %d \n",A);
		
		}
	}
	
	//analisis del segundo numero
	if(B>A){
		if(B>C){
		
		printf(" Maximo = %d \n",B);
		
		}
	}else if(B<A){
		if(B<C){
		
		printf(" Minimo = %d \n",B);
		
		}
	}
	
	//analisis del tercr numero
	if(C>A){
		if(C>B){
		
		printf(" Maximo = %d \n",C);
		
		}
	}else if(C<A){
		if(C<B){
		
		printf(" Minimo = %d \n",C);
		
		}
	}
	
	return 0;
	//fin de la funcion main
}

