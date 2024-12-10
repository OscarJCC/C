/*
Nombre: UsoDeMiBibliotecaCtype
Fecha: 16/05/2021
Autor: Oscar Joel Castro Contreras
Descripcion:
*/

#include <stdio.h>
#include "MiBibliotecaCtype.h"

int main(){
	
	int i=0;
	int c,x;
	char letra[x];
	
	do{
		
		printf("IsAlphaEs()-------- 1 \n");
		printf("EsLetraoDigito()--- 2 \n");
		printf("CambiaDigito()----- 3 \n");
		printf("Aminusculas()------ 4 \n");
		printf("Amayusculas()------ 5 \n");
		printf("EsMin()------------ 6 \n");
		printf("EsMay()------------ 7 \n");
		printf("\t\t\tCual funcion desas utilizar? \n\t\t\t\t");
		scanf("%d",&c);
		printf("\t\t Coloca los caracteres deseados: \n");
		scanf(" %[^\n]",letra);
		
		switch(c){
			case 1:
				do{
					if(IsAlphaEs(letra[i])){
						printf(" Es la letras %c \n",letra[i]);
						printf(" Su codigo ASCII es: %d\n\n",letra[i]);	
					}else{
						printf(" No es una letra\n\n");
					}
					i++;
				}while(letra[i]);
				printf(" %s ",letra);
				return 0;
				
			case 2:
				do{
					if(EsLetraoDigito(letra[i])){
						printf(" Es una la letra o digito: %c \n",letra[i]);
						printf(" Su codigo ASCII es: %d\n\n",letra[i]);	
					}else{
						printf(" No es letra o digito\n\n");
					}
					i++;
				}while(letra[i]);
				printf(" %s ",letra);
				return 0;
				
			case 3:
				do{
					printf(" Entro el numero: %c \n",letra[i]);
					printf(" Su codigo ASCII es: %d \n", letra[i]);
					CambiaDigito(letra[i]);
					printf(" Se cambio al entero: %d \n",letra[i]);
					printf(" Su codigo ASCII es: %d \n\n", letra[i]);
					i++;
				}while(letra[i]);
				printf(" %s ",letra);
				return 0;
				
			case 4:
				do{
					printf(" Entro: %c \n",letra[i]);
					printf(" Su codigo ASCII es: %d \n", letra[i]);
					Aminusculas(letra[i]);
					printf(" Se cambio: %c \n",letra[i]);
					printf(" Su codigo ASCII es: %d \n\n", letra[i]);
					i++;
				}while(letra[i]);
				printf(" %s ",letra);
				return 0;
				
			case 5:
				do{
					printf(" Entro: %c \n",letra[i]);
					printf(" Su codigo ASCII es: %d \n", letra[i]);
					Amayusculas(letra[i]);
					printf(" Se cambio: %c \n",letra[i]);
					printf(" Su codigo ASCII es: %d \n\n", letra[i]);
					i++;
				}while(letra[i]);
				printf(" %s ",letra);
				return 0;
				
			case 6:
				
			case 7:
				
			default:
				return 0;
				
		}
		
	}while(i==0);
}
