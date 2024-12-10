/*
Nombre: 
Fecha: / /
Autor:
Descripcion:

  Entrada:
 
  Salida:

Conclusion:

*/

#include <stdio.h>

int main(){
	
	short var1='2';
	char caracter='2';
	
	putchar(10); //Salto de linea
	putchar(caracter); // Coloca caracter caracter
	putchar(10); //Salti de linea
	putchar(var1); // Colocar caracter var1
	putchar(10); //Salto de linea
	putchar(var1+caracter); //Suma de caracteres var1 y varacter
	putchar(10); //Salto de linea
	putchar(var1+1); //Suma de caracter var1 con un numero entero
	putchar(10); //Salto de linea
	
	printf("\n Los valores enteros para las varibles var1 = %d y carater = %d \n",var1,caracter);
	
	return 0;
}
