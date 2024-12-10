/*
Nombre: 3_Puntos_Es_Triangulo
Fecha: 22/05/2021
Autor: Oscar Joel Castro Contreras
Descripcion:

Escribir un programa en C, que lea las coordenadas de 3 puntos e
identifique se estos son o no los vertices de un triangulo.

	1.- Definir la estructura punto (float x,float y);
	2.- Crear un arreglo con 3 posiciones (1 posicion para cada punto).
	3.- Leer las coordenadas de cada punto.
	4.- Obtener las distancia entre cada punto.
	5.- Aplicar el criterio de la suma de 2 segmentos mayor que el tercero.
	6.-Si se cumple
		Si es triangulo.
	7.- No se cumple
		No es triangulo.
*/

#include <stdio.h>
#include <math.h>

struct punto{
	
	float x; //coordenada del eje x 
	float y; //coordenada del eje y
	
}; // fin de struct

int main(){
	
	struct punto c[3];
	float PendAB=0,PendBC=0,PendAC=0; 	// variables de pendientes
	int Den1=0,Den2=0,Den3=0; 		// variables de denominador de la pendiente
	float DistAB,DistBC,DistAC; 		// Variables para distancia entre puntos
	int i=0;
	
	do{ // Captura de puntos
		
		printf("\n\n Valor de 'x' para el punto %d ",i+1); // Valores para x
		scanf("%f",&c[i].x);
		
		printf(" Valor de 'y' para el punto %d ",i+1);	 // Valores para y
		scanf("%f",&c[i].y);
		
		i++;
		
	}while(i<3); //fin de do while
	
// USANDO PENDIENTES DE RECTAS ENTRE LOS PUNTOS

	Den1= c[1].x-c[0].x; // Denominador de la pendiente entre AB
	Den2= c[2].x-c[1].x;// Denominador de la pendiente entre BC
	Den3= c[2].x-c[0].x; // Denominadot de la pendiente entre AC
	
	PendAB=(c[1].y - c[0].y)/(c[1].x - c[0].x); // Pendiente de los puntos AB
	PendBC=(c[2].y - c[1].y)/(c[2].x - c[1].x); // Pendiente de los puntos BC
	PendAC=(c[2].y - c[0].y)/(c[2].x - c[0].x); // Pendiente de los puntos AC
	
	if(Den1 == 0){ // Si la pendiente de AB es indeterminada
		
		if(PendBC == PendAC){
			printf("\n No es un triangulo \n");
		}else{
			printf("\n Si es un triangulo \n");
		}
		
	}else if(Den2 == 0){ // Si la pendiente de BC es indeterminada
		
		if(PendAB == PendAC){
			printf("\n No es un triangulo \n");
		}else{
			printf("\n Si es un triangulo \n");
		}
		
	}else if (Den3 == 0){ // Si la pendiente de AC es indeterminada
		
		if(PendAB == PendBC){
			printf("\n No es un triangulo \n");
		}else{
			printf("\n Si es un triangulo \n");
		}
		
	}else if(Den1 == 0 && Den2 == 0 && Den3 == 0){ // Si los puntos estan en eje x
		
		printf("\n No es un triangulo \n");
		
	}else if(PendAB == 0 && PendBC == 0 && PendAC == 0){ // si los puntos estan en eje y
			
		printf("\n No es un triangulo \n");
		
	}
	
// USANDO LAS DISTANCIA ENTRE LOS PUNTOS
/*	
	DistAB = sqrt(pow((c[1].x-c[0].x),2)+pow((c[1].y-c[0].y),2));
	DistBC = sqrt(pow((c[2].x-c[1].x),2)+pow((c[2].y-c[1].y),2));
	DistAC = sqrt(pow((c[2].x-c[0].x),2)+pow((c[2].y-c[0].y),2));
	
	if((DistAB + DistBC > DistAC) && (DistBC + DistAC > DistAB) && (DistAB + DistAC > DistBC)){
		
		printf("\n Si es un triangulo \n");
		
	}else{
		
		printf("\n No es un triangulo \n");
		
	}
*/	
	return 0;
} // fin de main

