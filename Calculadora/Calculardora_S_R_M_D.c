#include<stdio.h>
#include<math.h>

int main(){
	
	char opcion;
	float s,r,m,d;
	float x,y;

	do{
		printf("Opciones: \n");
		printf("S suma \n");
		printf("R resta \n");
		printf("M multiplicacion \n");
		printf("D divicion \n");
		printf("T fin de fincion \n\n");
		
		printf("\t\t ¿Cual opcion eliges? \n\t\t\t");
		scanf("%c",&opcion);
		
		printf("\n\n\t Valor de x:");
		scanf("%f",&x);
		printf("\n\t Valor de y:");
		scanf("%f",&y);
	
		switch(opcion){
			
			case 'S':
				s=x+y;
				printf("\n x + y = %.2f \n\n",s);
				break;
			
			case 'R':
				r=x-y;
				printf("\n x - y = %.2f \n\n",r);
				break;
		
			case 'M':
				m=x*y;
				printf("\n x * y = %.2f \n\n",m);
				break;
			
			case 'D':
				if(y==0){
				
					printf("\n Error \n\n");
				
				}else{
					
					d=x/y;
					printf("\n x / y = %.2f \n\n",d);
				
				}
				break;
			
			case 'T':
				return 0;
			
			default:
				printf("\n Error  \n\n");
			
		}
		getchar();
	}while (opcion !='T');
return 0;
}
