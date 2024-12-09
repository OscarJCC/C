/*
Nombre: MiBibliotecaCtype
Fecha: 13/05/2021
Autor: Oscar Joel Castro Contreras
Descripcion:

int IsAlphaEs(int c);
	La funcion IsAlphaEs()le un caracter y determina si es un letra incluyendo las especiales
	si es verdad tetorna 1 y si es falso retorna 0
	
	1.- si el caracter es una letra inclyendo las especiales retorna 1
	2.- si el caracter no es una letra incluyendo las especiales retorna 0

int EsDigito(int c);
	La funcion EsDigito() le un caracter y determina si es un numero de un digito
	si es verdad retorna 1 y si es falso retorna 0
	
	1.- si el caracter es un numero de un digito retorna 1
	2.- si el caracter no es un numero de un digito retorna 0
	
int EsLetraoDigito(int c);
	La funcion EsLetrasoDigito() le un caracter y determina si es un numero de un digito
	o una letra incluyendo las especiale,
	si es verdad retorna 1 y si es falso retorna 0
	
	1.- si el caracter es una letra o un numero de un digito retornar 1
	2.- si el caracter no es una letra o un numero de un digito retornar 0
	
int CambioDigito (int c);
	La funcion CaraDigito () le un caracter y determina si es un numero de un digito y
	lo comvierte a un numero entero
	
int Aminusculas(int c);
	La funcion Aminusculas() le un caracter y determina si es una letra mayuscula incluyendo las especiales y
	la combierte a minusculas
	
int Amayusculas(int c);
	La funcion Amayusculas() le un caracter y determina si es una letra minuscula incluyendo las especiales y
	la combierte a mayuscula
	
int EsMin(int c);
	la funcion EsMin() le un caracter y determina si es una letra minuscula incluyendo las especiales
	si es verdad retorna 1 y si es falso retorna 0
	
	1.- si el caracter es una letra minuscula incluyendo las especiales retorna 1
	2.- si el caracter no es una letra minuscula incluyendo las especiales retorna 0
	
int EsMay(int c);
	La funcion EsMay() le un caracter y determina si es una letra mayuscula incluyndo las especiales
	si es verdad retorna 1 y si es falso retorna 0
	
	1.- si el caracter es una letra mayuscula incluyendo las especiales retorna 1
	2.- si el caracter no es una letra mayuscula incluyendo las especiales retorna 0
*/

#include <stdio.h>

int IsAlphaEs(int c);
int EsDigito(int c);
int EsLetraoDigito(int c);
int CambiaDigito (int c);
int Aminusculas(int c);
int Amayusculas(int c);
int EsMin(int c);
int EsMay(int c);

int IsAlphaEs(int c){
	if((c>=65 && c<=90) || (c>=97 && c<=122)){ // return (((c>=65 && c<=90) || (c>=97 && c<=122)))?1:0;
		return 1;
	}
	switch(c){
		case  -96: // á = -96
		case -126: // é = -126
		case  -95: // í = -95
		case  -94: // ó = -94
		case  -93: // ú = -93
		case  -75: // Á = -75
		case -112: // É = -112	
		case  -42: // Í = -42
		case  -32: // Ó = -32
		case  -23: // Ú = -23
		case  -92: // ñ = -92
		case  -91: // Ñ = -91
		case -127: // ü = -127
		case -102: // Ü = -102
			return 1;
		default:
			return 0;
	}
}

int EsDigito(int c){
	return(((c>=48 && c<=57)))?1:0;
}

int EsLetraoDigito(int c){
		if((c>=65 && c<=90) || (c>=97 && c<=122) || (c>=48 && c<=57)){ 	// return (((c>=65 && c<=90) || (c>=97 && c<=122) || (c>=48 && c<=57)))?1:0;
		return 1;
	}
	switch(c){
		case  -96: // á = -96
		case -126: // é = -126
		case  -95: // í = -95
		case  -94: // ó = -94
		case  -93: // ú = -93
		case  -75: // Á = -78
		case -112: // É = -112	
		case  -42: // Í = -42
		case  -32: // Ó = -32
		case  -23: // Ú = -23
		case  -92: // ñ = -92
		case  -91: // Ñ = -91
		case -127: // ü = -127
		case -102: // Ü = -102
			return 1;
		default:
			return 0;
	}
}

int CambiaDigito (int c){
	return c-48;
}

int Aminusculas(int c){
	if(c>=65 && c<=90){
		return (c+32);
	}
	switch (c){
		case  -75: // Á = -75
			return -96;
		case -112: // É = -112
			return -126;
		case  -42: // Í = -42
			return -95;
		case  -32: // Ó = -32
			return -94;
		case  -23: // Ú = -23
			return -93;
		case  -91: // Ñ = -91
			return -92;
		case -102: // Ü = -102
			return -127;
		default:
			return c;
}

int Amayusculas(int c){
	if(c>=97 && c<=122){
		return (c-32);
	}
	switch (c){
		case  -96: // á = -96
			return -75;
		case -126: // é = -126
			return -112;
		case  -95: // í = -95
			return -42;
		case  -94: // ó = -94
			return -32;
		case  -93: // ú = -93
			return -23;
		case  -92: // ñ = -92
			return -91;
		case -127: // ü = -127
			return -102;
		default:
			return c;
	}
}
}

int EsMin(int c){
	if(c>=97 && c<=122){
		return 1;
	}
	switch (c){
		case  -96: // á = -96
		case -126: // é = -126
		case  -95: // í = -95
		case  -94: // ó = -94
		case  -93: // ú = -93
		case  -92: // ñ = -92
		case -127: // ü = -127
			return 1;
		default:
			return 0;
	}
}

int EsMay(int c){
	if(c>=65 && c<=90){
		return 1;
	}
	switch (c){
		case  -75: // Á = -75
		case -112: // É = -112	
		case  -42: // Í = -42
		case  -32: // Ó = -32
		case  -23: // Ú = -23
		case  -91: // Ñ = -91
		case -102: // Ü = -102
			return 1;
		default:
			return 0;
	}
}

