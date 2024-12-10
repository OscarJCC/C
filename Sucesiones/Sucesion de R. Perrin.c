/*
nombre: Sucesion de R. Perrin
fecha: inicio: 27 noviembre 2020
        final:  1 dicembre 2020
autor:Oscar Joel Castro Contreras
descripcion:calcula en e-nesimo de sucesion R. Perrin

  3,0,2,3,2,5,5,7,10,12,17,22,29,39,51........
  
datos de entrada:n,i,a1,a2,a3

salida:an

conclucion:
-lo primero que hise fue entender lo que es la sucesion de padovan y lo que observe fue que es lo mismo que el programa de padovan los unico diferente son
-los primeros 3 numeros  con los que inicia que son a1=3, a2=0 y a3=2, y de estos 3 terminos se sigue el mismo sistema que la sucesion de padovan,
-los 2 primeros se suman para darme el cuarto termino por lo que a1+a2=a4, despues se suman los 2 numeros anteriores al cuarto termino que serian 
-a2+a3=a5, hasi sucesibamente hasta infinito

-entonces acomodando todo como en el programa de la sucesion de padovan colocamos las mismas variables pero con los volores cambiados a la de R. Perrin
  a1 : es el primer numero de la sucesion que es igual a 3
  a2 : es el segundo numero de la sucesion que es igual a 0
  a3 : es el tercer numero de la sucesion que es igual a 2
  an : que es la suma de los 2 numero anteriores al tercer termino, la iguale a 0.
  n : es el enesimo termino que se quiere conocer
  i : es la varible contador que utilizaremos que sera igual a 4, ya que los 3 primeros numeros ya los conocemos
  N : es la variable que indicara en la tabla, el numero de la sucesion que es cada termino que nos de an
-de aqui pedi el numero de la secuensia que se quiere conocer, luego le asigne los valores a las variables que ya se dijieron, que ahora son:
  a1=3
  a2=0
  a3=2
  an=0
  i=4
-entonces siguimos el programa de padovan coloque el bucle while igual ya que tienen el mismo sistema para sacar sus valores, 
-el bucle tiene la condicion de que el contador deve ser (i<=n), despues iguale an=a1+a2, luego a1=a2,
-despues a2=a3 y por ultimo a3=an,
-el bucle segun el valor de n, se repite y ahora saca estos valores:
  an=a1+a2 an= 3 = 2 = 5 = 5 = 7 = 10 = 12 = 17 = 22 = 29 =...
  a1=a2    a1= 0 = 2 = 3 = 2 = 5 =  5 =  7 = 10 = 12 = 17 =...
  a2=a3    a2= 2 = 3 = 2 = 5 = 5 =  7 = 10 = 12 = 17 = 22 =...
  a3=an    a3= 3 = 2 = 5 = 5 = 7 = 10 = 12 = 17 = 22 = 29 =...
-este bucle se repite dependiendo de el valor que se le de n
-pero vemos que el bucle no me da los primeros 3 numeros como en el programa de padovan, por lo que esos los imprimi antes del bucle while
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
	printf("\t\t --SUCESION DE R. PERRIN-- \t\n");
	printf("\n Introduzca el numero de la sucesion que desea conocer:");
	scanf("\n %d",&n);
	
	//pedimento e i e impresion de resultados
	a1=3;
	a2=0;
	a3=2;
	an=0;
	
	printf("\n\t Numero de serie \t Termino ");//3 primeros numeros de la sucesion que no me da el bucle
	printf("\n\t\t1 \t\t    3 ");
	printf("\n\t\t2 \t\t    0 ");
	printf("\n\t\t3 \t\t    2 ");
	
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
