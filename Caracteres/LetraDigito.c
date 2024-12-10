#include <stdio.h>
#include <ctype.h>
#define MAX 20

int isAlphaEs(int c);

int EsDigito(int c);

int main(){
	
	int i=0;
	
	char letra[MAX];
	
	scanf(" %[^\n]",letra);
	
	do{
		
		if(isAlphaEs(letra[i])){
			
			printf(" Si es una letra \n");
			
		}else if(EsDigito(letra[i])){
		
			printf(" Es un digito \n");
			
		}else{
				
			printf(" No es letra ni digito");
			
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
		case  -96: // � = -96
		case -126: // � = -126
		case  -95: // � = -95
		case  -94: // � = -94
		case  -93: // � = -93
		case  -75: // � = -78
		case -112: // � = -112	
		case  -42: // � = -42
		case  -32: // � = -32
		case  -23: // � = -23
		case  -92: // � = -92
		case  -91: // � = -91
		case -127: // � = -127
		case -102: // � = -102
			return 1;
		default:
			return 0;
	}

	// return (((c>=65 && c<=90) || (c>=97 && c<=122)))?1:0;

}

int EsDigito(int c){
	
	if (c>=48 && c<=57){ //((c>=48 && c<=57)?1:0);
		return 1;
	}else{
		return 0;
	}
}
