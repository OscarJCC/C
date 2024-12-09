/*
0 = negro
1 = azul
2 = verde
3 = aguamarina
4 = rojo
5 = purpura
6 = amarillo
7 = blanco
8 = gris
9 = azul claro
a = verde claro
b = aguamarina claro
c = rojo claro
d = purpura claro
e = amarillo claro
f =blanco brillante
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void gotoxy(int x, int y){
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon,dwPos);
}

void dibujarCuadro(int x1,int y1,int x2,int y2){
	int i;

    for (i=x1;i<x2;i++){
		gotoxy(i,y1); printf("\304"); //linea horizontal superior
		gotoxy(i,y2); printf("\304"); //linea horizontal inferior
    }

    for (i=y1;i<y2;i++){
		gotoxy(x1,i); printf("\263"); //linea vertical izquierda
		gotoxy(x2,i); printf("\263"); //linea vertical derecha
	}

    gotoxy(x1,y1); printf("\332");
    gotoxy(x1,y2); printf("\300");
    gotoxy(x2,y1); printf("\277");
    gotoxy(x2,y2); printf("\331");
}

int main(){
	
	system("color 10");
	dibujarCuadro(1,1,77,3);
	gotoxy(20,2); printf("TITULO LOCO");
	
return 0;	
}
