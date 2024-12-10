#include <stdio.h>
#include <ctype.h>

int main(){
	
	char c='A';
	
	printf("\n ¿El caracter %c es un numero o letra?: %s \n",c,(isalnum('c'))?"V":"F");
	
	return 0;
}
