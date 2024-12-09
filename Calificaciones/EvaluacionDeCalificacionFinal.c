/*
nombre: Analisis de la calificacion final de un alumno
fecha:2 octubre 2020
autor:Oscar Joel Castro Contreras
descripcion:programa que determina la calificacion de un alumno segun sus resultados y trabajos

entradas:C, T

C, calificacion que obtubo el  estudiante en el examen

T, tareas entregadas del alumno

salidas: calificacion del alumno
*/

#include <stdio.h>
#include<math.h>

int main()
{
	//variable
	
	int C, T;//calificacion del examen
	int Ex,Te, Evaluacion;//valores para obtener la calificacion final

	//pedimiento e informacion
	
	printf("\t\t Programa que determine la calificacion final del alumno \n");
	
	printf("\n\t\t Valoreas a evaluar \n");
	
	printf("\t Examen = 70 porciento \n");
	
	printf("\n\t Tareas = 30 porciento \n");
	printf("\t Tareas entregadas en el sementre 20 \n");
	
	//pedimento e i e impresion de resultados
	
	printf("\n\t Poner calificacion de examen: \t");
	scanf("%d",&C);
	
	printf("\n\t Poner tareas entregadas: \t");
	scanf("%d",&T);
	
	Ex=((C*70)/100);
	
	Te=((T*30)/20);
	
	Evaluacion=(Ex+Te);
	
	if(Evaluacion>=95){
		
	printf("\n\t El alumno esta aprobado con 100 \n");
	
	}else if(Evaluacion>=91){
		
	printf("\n\t El alumno esta aprobado con 95 \n");
	
	}else if(Evaluacion>=86){
		
	printf("\n\t El alumno esta aprobado con 90 \n");
	
	}else if(Evaluacion>=81){
		
	printf("\n\t El alumno esta aprobado con 85 \n");
	
	}else if(Evaluacion>=76){
		
	printf("\n\t El alumno esta aprobado con 80 \n");
	
	}else if(Evaluacion>=71){
		
	printf("\n\t El alumno esta aprobado con 75 \n");
	
	}else if(Evaluacion>=70){
		
	printf("\n\t El alumno esta aprobado con 70 \n");
	
	}else if(Evaluacion<=69){
		
	printf("\n\t El alumno esta reprobado\n");
	
	}
	return 0;
	//fin de la funcion main
}

