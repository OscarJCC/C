/*
nombre: Analisis de la calificacion de estudiantes aporbados y reprobados
fecha:1 octubre 2020
autor:Oscar Joel Castro Contreras
descripcion:programa que determina segun la calificacion de un estudiante
            si esta aprobado o no

entradas:Calificacion

Calificacion= calificacion del estudiante analisado

salidas: Aprobado, Reprobado

Aprobado, si la calificacion es mayor o igual a 60

Reprobado, si la calificacion es menor a 60
*/

#include <stdio.h>
#include<math.h>

int main()
{
	//variable
	
	int calificacion;

	//pedimiento e informacion
	
	printf("\t\t Programa que determine si un alumno es aprobado \n");
	
	printf("\n\t Poner calificacion \t");
	scanf("%d",&calificacion);
	
	//pedimento e i e impresion de resultados
	
	if(calificacion>=60){
		
		printf("\n\t El alumno esta aprobado \n");
		
	}else{
		
		printf("\n\t El alumno esta reprobado \n");
		
	}
	return 0;
	//fin de la funcion main
}

