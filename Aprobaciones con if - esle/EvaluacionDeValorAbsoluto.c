/*
nombre: Analisis de el valor absoluto de x
fecha:1 octubre 2020
autor:Oscar Joel Castro Contreras
descripcion:programa evaluar el valor absoluto

entradas:x

x, numero evaluado con valor absoluto

salidas:ValorAbsoluto

ValorAbsoluto, valor que nos da al evaluar el numero en valor absoluto

conclusion:
-Lo que nos indica un valor absoluto es que todos los numeros reales
-puestos en valor absolutos sean positivos o negativos siempre son positivos
- entonses se siguen las siguientes normas

   x, si el valor de x>=0
-esto nos dise que si un numero se pone en valor absoluto y es positivo el
-numero se evaluaria de la forma x
  +(+x)
  
  -x, si el valor de x<0
-esto nos dice que di un numero se pone en valor absoluto y es negativo el
-numero se evaluaria de la forma -x
  -(-x)
*/

#include <stdio.h>
#include<math.h>

int main()
{
	//variable
	
	float x;
	float ValorAbsoluto;

	//pedimiento e informacion
	
	printf("\t\t Programa evalua valor absoluto de un numero\n");
	
	printf("\n\t Poner numero que se quiere evaluar: \t");
	scanf("%f",&x);
	
	//pedimento e i e impresion de resultados
	
	if(x>=0){
	
	printf("\n\t se evalua de la forma x");
	
	ValorAbsoluto=(fabs(x));
	
	printf("\n\t\t %0.2f",ValorAbsoluto);
		
	}else{
	
	printf("\n\t se evalua de la forma -x \n");
	
	ValorAbsoluto=(fabs(x));
	
	printf("\n\t\t %0.2f",ValorAbsoluto);
	
	}
	return 0;
	//fin de la funcion main
}
