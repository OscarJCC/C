/*
nombre: Sucesion de Padovan
fecha: inicio: 27 noviembre 2020
        final:  1 dicembre 2020
autor:Oscar Joel Castro Contreras
descripcion:calcula en e-nesimo de sucesion fibonacci

  1,1,1,2,2,3,4,5,7,9,12,16,21,28,37........
  
datos de entrada:n,i,a1,a2,a3

salida:an

conclucion:
-lo primero que hise fue entender lo que es la sucesion de padovan y nos dice que empieza con 3 numeros a1=1, a2=1 y a3=1, y de estos 3 terminos
-los 2 primeros se suman para darme el cuarto termino por lo que a1+a2=a4, despues se suman los 2 numeros anteriores al cuarto termino que serian 
-a2+a3=a5, hasi sucesibamente hasta infinito

-entonces lo que hise fue seguir los pasos de la sucesion que realice de fibonacci solo agregando otra variable mas ya que esta sucecion inicia con
- 3 numeros
  a1 : es el primer numero de la sucesion que es igual a 1
  a2 : es el segundo numero de la sucesion que es igual a 1
  a3 : es el tercer numero de la sucesion que es igual a 1
  an : que es la suma de los 2 numero anteriores al tercer termino.
  n : es el enesimo termino que se quiere conocer
  i : es la varible contador que utilizaremos que sera igual a 4, ya que los 3 primeros numeros ya los conocemos
  N : es la variable que indicara en la tabla, el numero de la sucesion que es cada termino que nos de an
-de aqui pedi el numero de la secuensia que se quiere conocer, luego le asigne los valores a las variables que ya se dijieron,
  a1=1
  a2=1
  a3=1
  an=0
  i=4
-entonces siguiendo el programa de la sucesion fibonacci, al programa le coloque bucle while para que nos de cada valor de la sucesion, 
-el bucle tiene la condicion de que el contador deve ser (i<=n), despues tratando de seguir el programa de fibonacci iguale an=a1+a2, luego a1=a2,
-despues a2=a3 y por ultimo a3=an,
-el bucle segun el valor de n, se repite y saca estos valores:
  an=a1+a2 an= 2 = 2 = 3 = 4 = 5 = 7 = 9 = 12 = 16 = 21 =...
  a1=a2    a1= 1 = 1 = 2 = 2 = 3 = 4 = 5 =  7 =  9 = 12 =...
  a2=a3    a2= 1 = 2 = 2 = 3 = 4 = 5 = 7 =  9 = 12 = 16 =...
  a3=an    a3= 2 = 2 = 3 = 4 = 5 = 7 = 9 = 12 = 16 = 21 =...
-este bucle se repite dependiendo de el valor que se le de n
-pero vemos que el bucle no me da los primeros 3 numer0s como en el program de fibonacci, por lo que esos los imprimi antes del bucle while
-despues se imprimen los valores de an y al final del bucle i=i+1, para que el bucle siga evaluando hasta llegar el valor de n.
-despues puse un diseño de tabla hacia abajo para poder apresiar mejor los numeros de la sucecion.
-colocando una variable mas en el bucle que es N=i para poder ir numerando cada termino en la tabla.
*/

#include <stdio.h>
#include<math.h>

int main()
{
	//variable
	
	int i;//variable contador
	int a1,a2,a3;//primeros 3 numeros de la sucesion
	int an;//valor de cada termino de la sucesion
	int n;//termino de la sucesion que se desea conocer
	int N;//es el numero que indica el termino
	
	//pedimiento e informacion
	printf("\t\t --SUCESION DE PANDOVAL-- \t\n");
	printf("\n Introduzca el numero de la sucesion que desea conocer:");
	scanf("\n %d",&n);
	
	//pedimento e i e impresion de resultados
	a1=1;
	a2=1;
	a3=1;
	
	printf("\n\t Numero de serie \t Termino ");//3 primeros numeros de la sucesion que no me da el bucle
	printf("\n\t\t1 \t\t    1 ");
	printf("\n\t\t2 \t\t    1 ");
	printf("\n\t\t3 \t\t    1 ");
	
	i=4;
	while(i<=n)
	{
	N=i;
	an=a1+a2;
	a1=a2;
	a2=a3;
	a3=an;
	printf("\n\t\t%d \t\t    %d ",N,an);
	i=i+1;
	}

	return 0;
	//fin de la funcion main
}
