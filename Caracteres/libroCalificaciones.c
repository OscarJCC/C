/*
Programa : libroCalificaciones.c
Autor    : Curso Programación II

requisito: 

Hacer un (diseñar) programa en C, que capture 
las calificaciones de 5 tareas para 4 alumnos, y calcule
el promedio para cada alumno, para cada tarea y el promedio
general del grupo.
 
1.- La matriz será de 6 x 5, renglones = alumnos
    cloumnas = tareas.
2.- Capturar los valores para cada alumno/tarea, la 
    calificación debe ser mayor o igual a cero y menor 
    o igual a 100.
3.-Procesar lo solicitado.
    a) Calcular promedio por alumno.
    b) Calcular el promedio por tarea.
    c) Calcular el promedio General
4.-Presentar los promedios

*/

#include<stdio.h>

//Prototipos de las funciones

void captura(int mat[6][5]);
//Función promA, calcula el pomedio para cada alumno y regresa
//un flotante.
void promA(int mat[6][5]);

void promT(int mat[6][5]);
void promG(int mat[6][5]);
void  imp(int mat[6][5]);

int main(){

  int libroCalificaciones[6][5]={0};

  /*
   Las siguientes variables sirven para guardar cada uno de los
   promedios solicitados.
*/

  printf("\nBienvenido al libro de Calificaciones de progra II\n");
  printf("\nPor favor capture los datos de los alumnos y las tareas\n");

  imp(libroCalificaciones);
  //llamar a la función para capturar las calificaciones
  captura(libroCalificaciones);

  //llamar a la función para calcular el promedio de caada alumno
   promA(libroCalificaciones);

  //Llamar a la función para calcular el promedio por tarea
  promT(libroCalificaciones);
  
  //llamar a la función para calcular el promedio general
  promG(libroCalificaciones);

  
  return 0;
}//fin funciónn main

//Desaarrollo de las funciones

void captura(int mat[6][5]){
 /* Las variables i,j serviran para iterar por la matriz
     i itera los renglones y j las columnas, 
  
   ATENCION: el recorrido de la matriz es de 5 renglones 
             y 4 columnas, porque tanto el renglón extra 
             como la columna extra, almacenarán los
             promedios.
  */
  int i,j,valido=0;
  for(i=0;i<5;++i){
    for(j=0;j<4;++j){
        printf("calificación para el alumno %d y tarea %d: ",i,j);
	do{
	  valido = 0;
           scanf("%d",&mat[i][j]);
	   if (mat[i][j] >= 0 && mat[i][j]<=100)
                valido = 1;
	   else
	     printf("\nValor inválido, favor de capturar nuevamente\n");	  
    }while(!valido);//fin validación calificaciones  
    }//Fin recorrido columnas
    putchar('\n');//imprimir un salto de línea
  }//fin ciclo for para recorrer renglones
}//fin función captura

void promA(int mat[6][5]){
  int i,j,suma;

  for(i=0;i<6;++i){
    suma = 0; //reiniciar el valor de suma a cero, para
             //empezar a contar nuevamente
    for(j=0;j<4;++j){
      suma += mat[i][j];
    }//Fin recorrido columnas
    mat[i][j] = suma/4; //guardar el promedio en la columna extra
  }//fin ciclo for para recorrer renglones
}//fin función promedio de alumnos

void promT(int mat[6][5]){
  int i,j,suma;

  for(j=0;j<4;++j){
    suma = 0; //reiniciar el valor de suma a cero, para
             //empezar a contar nuevamente
    for(i=0;i<5;++i){
      suma += mat[i][j];
    }//Fin recorrido renglones
    mat[i][j] = suma/5; //guardar el promedio en el renglón extra
  }//fin ciclo for para recorrer columnas
}//fin función calcular promedio por tarea

void promG(int mat[6][5]){
  int suma,i,j;

  for(i=0;i<5;++i){
    for(j=0;j<4;++j){
      suma += mat[i][j];
    }//fin recorrido columnas
  }//fin recorrido renglones
  mat[i][j] = suma/20;
  //verificar la matriz
  imp(mat);
}//fin promedio general

void  imp(int mat[6][5]){
  /* Las variables i,j serviran para iterar por la matriz
     i itera los renglones y j las columnas
  */
  int i,j;
  putchar(10);//imprimir un salto de línea
  for(i=0;i<6;++i){
    for(j=0;j<5;++j){
      printf("%d\t",mat[i][j]);
    }//Fin recorrido columnas
    putchar('\n');//imprimir un salto de línea
  }//fin ciclo for para recorrer renglones
       
}//fin función imp, imprime la matriz
