#include <stdio.h>
#include <ctype.h>
#define MAX 20

int isAlphaEs(int c);

int main(){
	
	int i=0;
	
	char letra[MAX];
	
	scanf(" %[^\n]",letra);
	
	do{
		
		if(isAlphaEs(letra[i])){
			
			printf(" Si es una letra \n");
			
		}else{
		
			printf(" No es una letra \n");
			
		}
		
		i++;
		
	}while(letra[i]!=0 && i<20);
	
	printf(" %s ",letra);
	
	return 0;
}

int isAlphaEs(int c){

	if((c>=65 && c<=90) || (c>=97 && c<=122)){
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

	// return (((c>=65 && c<=90) || (c>=97 && c<=122)))?1:0;

}

