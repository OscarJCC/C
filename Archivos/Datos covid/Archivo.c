/*
Nombre: Archivo
Fecha: 22/05/2021
Autor: Oscar Joel Castro Contreras
Descripcion:
	
	El apuntadoe ArchivoPtr guarda la direccion de memoria
	en el disco del archivo a trabajar
	
	La terminacio Ptr es un indicador de que se
	esta utilizando un apuntador, tambien se puede usar Ap.
	
	w  -- Abre un archivo y borra el contenido que tenga
	w+ --
	r  -- Abre un archivo y solo permite leer la informacion que ya tiene
	r+ --
	a  -- Abre un archivo y permite ingresar datos sin modificar la informacion que ya tiene
	a+ --
	
*/

#include <stdio.h>
#include "MiBibliotecaCtype.h"
#define REG 57
FILE *ArchivoPtr;

struct fecha{
	int dd; //dia
	int mm; //mes
	int aa; //año
};

struct datos{
	struct fecha dia;
	char genero;
	int hora;
	int edad;
};

int main(){
	
	struct datos tabla[REG];
	
	int i=0,c19=0,c12=0;
	char registro[21];
	
	if((ArchivoPtr = fopen("COVID.txt","r")) == NULL){
		
		printf("\n Error: No se tiene acceso al archivo \n");
		return 1;
		
	}
	
	fseek(ArchivoPtr,0,SEEK_SET); //se coloca donde yo deseo
	
/*	fscanf(ArchivoPtr,"%s",registro); // ignora el primer renglon del archivo

	for(i=0;i<57;i++){ //imprime todos los datos del archivo
			
		fscanf(ArchivoPtr,"%s",registro);
		printf(" %s \n",registro);
		
	}

	for(i=0;i<57;i++){ // imprime el genero
			
		fscanf(ArchivoPtr,"%s",registro);
		printf(" %c \n",registro[18]);
		
	}

	for(i=0;i<57;i++){ // imprime de la fecha
			
		fscanf(ArchivoPtr,"%s",registro);
		printf(" %c%d\n",registro[18],registro[19]);
		
	}
*/
	
	for(i=0;i<57;i++){
		fscanf(ArchivoPtr,"%s",registro);
		
		// Se paramos la fecha para guardarla en la estructura tabla y commvertimos a numeros enteros
		tabla[i].dia.dd = (CambiaDigito(registro[0])*10 + CambiaDigito(registro[1]));
		tabla[i].dia.mm = (CambiaDigito(registro[4])*10 + CambiaDigito(registro[5]));
		tabla[i].dia.aa = (CambiaDigito(registro[6])*1000 + (CambiaDigito(registro[7]))*100 + (CambiaDigito(registro[8]))*10 + (CambiaDigito(registro[9])));
		
		// Guradamos la hora
		tabla[i].hora = (CambiaDigito (registro[11]))*10 + CambiaDigito(registro[12]);
		
		// Guardamos el genero
		tabla[i].genero = registro[16];
		
		// Guardamos la edad
		tabla[i].edad = (CambiaDigito(registro[18])*10 + CambiaDigito(registro[19]));
		
	}

	i=0;
	
	printf("Indique el registro que quiere consultar:");
	scanf(" %d",&i);
	
	printf("Fecha: %d/%d/%d \t",tabla[i].dia.dd,tabla[i].dia.mm,tabla[i].dia.aa);
	printf("Genero: %c \t",tabla[i].genero);
	printf("Edad: %d \t\n",tabla[i].edad);
	
	
	//contamos casos a las 12 y c9 hora
	for(i=1;i<58;i++){
		if(tabla[i].hora == 12){
			++c12;
		}else{
			++c19;
		}
	}
	printf("Casos 12.00 hr  Casos 19.00 hr \n",c19);
	printf(" %d \t\t %d",c12,c19);

	
	fclose(ArchivoPtr);
	
	return 0;
}// FIn de main

