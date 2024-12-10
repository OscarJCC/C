/*
nombre: Sucesion fibonacci
fecha: inicio: 27 noviembre 2020
        final:  1 dicembre 2020
autor:Oscar Joel Castro Contreras
descripcion:calcula en e-nesimo de sucesion fibonacci

  0,1,1,2,3,5,8,13,21,34,55,89,144,233,377........
  
datos de entrada:n,i,f0,f1

salida:fn

conclucion:
-lo primero que hise fue entender lo que es la sucesion de fibonacci y vi que empieza con 2 numeros el f0=0 y f1=1, estos 2 numeros se suman f0+f1=f2
-y me dan el numero que sigue de la sucecion, meda f2=1, despues se suman los ultimos 2 numeros que tenemos queson f1+f2=f3, y me da el siguente numero 
-que es f3=2,y hasi sucesibamente hasta el infinito.

-entonces lo que hise fue crear 5 variables
  f0 : es el primer numero de la sucesion que es igual a 0
  f1 : es el segundo numero de la sucesion que es igual a 1
  fn : que es la suma de los 2 anteriores numeros.
  n : es el enesimo termino que se quiere conocer
  i : es la varible contador que utilizaremos que sera igual a 3, ya que los 2 primeros numeros ya los conocemos
  N : es la variable que indicara en la tabla, el numero de la sucesion que es cada termino que nos de fn
-de aqui pedi el numero de la secuensia que se quiere conocer, luego le asigne los valores a las variables que ya se dijieron,
  f0=0
  f1=1
  fn=0
  i=3
-entonces al programa le coloque bucle while para que nos de cada valor de la sucesion, 
-el bucle tiene la condicion de que el contador deve ser (i<=n), despues iguale fn=f1+f0, luego f0=f1, y por ultimo f1=fn
-el bucle segun el valor de n se repite y saca estos valores:
  fn=f0+f1 fn=1 = 2 = 3 = 5 = 8 = 13 = 21 = 34 = 55 = 89 =...
  f0=f1    f0=1 = 1 = 2 = 3 = 5 =  8 = 13 = 21 = 34 = 55 =...
  f1=fn    f1=1 = 2 = 3 = 5 = 8 = 13 = 21 = 34 = 55 = 89 =...
-este bucle se repite dependiendo de el valor que se le de n
-pero vemos que el bucle no me da los primeros 2 numeros, por lo que esos los imprimi antes del bucle while
-despues se imprimen los valores de fn y al final del bucle i=i+1, para que el bucle sigua evaluando hasta llegar el valor de n.
-despues puse un diseño de tabla hacia abajo para poder apresiar mejor los numeros de la sucecion.
-colocando una variable mas en el bucle que es N=i para poder ir numerando cada termino en la tabla.
*/

#include <stdio.h>
#include<math.h>

int main()
{
	//variable
	
	int i;//variable contador
	int f0,f1;//primeros 2 numeros de la sucecion
	int fn;//valor de cada termino de la sucesion
	int n;//termino de la sucesion que se desea conocer
	int N;//es el numero que indica el termino
	
	//pedimiento e informacion
	printf("\t\t --SUCESION FIBONACCI-- \t\n");
	printf("\n Introduzca el numero n de la sucesion que desea conocer:");
	scanf("\n %d",&n);
	
	//pedimento e i e impresion de resultados
	f0=0;
	f1=1;
	
	printf("\n\t Numero de serie \t Termino ");//2 primeros numeros de la sucesion que no me da el bucle
	printf("\n\t\t1 \t\t    0 ");
	printf("\n\t\t2 \t\t    1 ");
	
	i=3;
	while(i<=n)
	{
	N=i;
	fn=f0+f1;
	f0=f1;
	f1=fn;
	printf("\n\t\t%d \t\t    %d ",N,fn);
	i=i+1;
	}

	return 0;
	//fin de la funcion main
}
