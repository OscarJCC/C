
#include <stdio.h>

struct punto{
	float x;
	float y;
};

struct punto crearpunto(struct punto valores){
	valores.x = 6;
	valores.y = 2;
	
	return valores;
};

int main(){
	
	struct punto A;
	float Ax,Ay;
	A.x = 12;
	A.y = -9.7;
	
	printf("\n El punto A se encuentra en (%.2f,%.2f)\n",A.x,A.y);
	
	A = crearpunto(A);
	
	printf("\n El punto A se encuentra en (%.2f,%.2f)\n",A.x,A.y);
	
	return 0;
}
