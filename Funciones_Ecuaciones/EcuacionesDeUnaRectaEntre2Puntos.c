/*
nombre: Calculo de la recta entre 2 puntos del plano catesiano
fecha:2 octubre 2020
autor:Oscar Joel Castro Contreras
descripcion:programa que calcula la pendiente, ecuacion de la forma explicita y implicita de una recta entre 2 puntos del plano cartesiano

   Pendiente:
   m=(y2-y2)/(x1-x1)
   
   Funcion:
   
   Forma explicita:
   y=ax+c
   (y-y1)=m(x-x1)
   y=mx+n
   
   Forma implicita: 
   Ax+By+C=0
   mx-y+n=0

entradas:x1,y1,x2,y2
O=(x1,y1), punto que esta en el plano carteciano

S=(x2,y2), punto que esta en el plano cateciano 

salidas: m, n, A, B, C
m, pendiente de la recta entre los puntos "O" y "S"

n, valor de -m*x1+y1

A, valor deL coeficiente de x en la ecuacion de forma implicita = (y1-y2)

B, valor del coeficiente de y en la ecuacion de forma implicita = (x2-x1)

C, valor del termino contante de la ecuacion de forma implicita = (y2x1-y1x2)

conclusiones:
-Para poder llegar a la ecuacion de la recta entre 2 puntos primero tenemos que tener la pendiente que tiene la recta
-la pendiente de una recta nos indica cuanto aumenta o disminuye la altura y la distancia horisontal, para calcula su
-pendiente se necesitan marcar 2 puntos en la recta en este caso seran el punto A=(x1,y1) y B(x2,y2), de aqui podemos 
-sacar una distancia horisontal y una altura segun esa distancia, si formamos un triangulo ractanculo y haciendo que 
-la distancia horizontal y la altura sean, entonces tendriamos que calcular la distancia de cada catetos por ejemplo 
-el cateto que es la distancia horisontal seria paralelo al eje x su distancia se obtendria restando las coordenadas
-de los puntos en x, se haria de esta forma (x2-x1) y en el cateto que es la altura seria paralelo al eje y por lo que
-su distancia se calcularia restando las coordenadas de los puntos en y, se haria de esta forma (y2-y1) entonces tendriamos 
-2 catetos y la pendiente se calcula ria cateto que se encuentra en eje y entre cateto que se encuentra en el eje x
   m=(y2-y1)/(x2-x1)
-por lo que se puede observar que la tangente entre el angulo que hay entre el eje x y la pendiente seria igual al pendiente
-ya que la tangente de un angulo en un triangulo rectangulo es igual al cateto opuesto entre el cateto adyacente por lo que
-la tangente del angulo seria igual ala pendiente.

-para poder entender la ecuacion de la recta entre 2 puntos, pondremos 3 puntos imaginarios en la recta, que seran los puntos
   O=(x1,y1),
   S=(x2,y2),
   R=(x,y),
-de aqui lo unico que sabemos es sacar la pendente que tiene una recta por lo que si los 3 puntos estan en la misma recta la
-pendiente que se saque segun 2 puntos los que sean, son iguales por ejemplo si sacamos la pendiente de la recta segun los puntos
-O y S seria igual a la pendiente sacada segun los puntos O y R, por lo que si igualamos las pendientes obtenemos que
   mOS=mOR
-las pendientes segun los puntos serian
   mOR=(y-x1)/(x-x1)
   mOS=(y2-y1)/(x2-x1)
-si segUimos la igualdad entre la pendiente podriamos sacar la funcion de la recta, hasi
   (y-y1)/(x-x1)=(y2-y1)/(x2-x1)
-pero si acomodamos la funcion de esta forma la podemos simplificar si tomamos que la pendiente mos es m llegando a la formula explicita
-que todos conosemos
   (y-y1)=((y2-y1)/(x2-x1))(x-x1)
   (y-y1)=m(x-x1)
   y=m(x-x1)+y1
   y=mx-mx1+y1
-y como los valores que conosemos seran la pendiente m y el punto O=(x1,y1) la parte de mx1+y1 se simplifaca a constante n
   y=mx+n

-para poder transformar la funcion implicita
   ax+by+c=0
-de la funcion explicita solo tenemos que igualar la funcion a 0 y nos quedaria hasi,
   y=mx+n
   mx-y+n=0
-o podemos empezar a igualar a cero desde la ecuacion cuando se igualaron las pendientes que es
   mOS=mOR
  (y-y1)/(x-x1)=(y2-y1)/(x2-x1)
-y si la igualamos a cero nos quedaria 
   (y-y1)(x2-x1)=(y2-y1)(x-x1)
-resolvemos las multiplicaciones
   (y)(x2)+(y)(-x1)+(-y1)(x2)+(-y1)(-x1)=(y2)(x)+(y2)(-x1)+(-y1)(x)+(-y1)(-x1)
   yx2 - yx1 - y1x2 + y1x1 = y2x - y2-x1 - y1x + y1x1
-igualamos a cero y suponemos que los unicos puntos que conosemos son los puntos O y S
   O=(x1,y1),
   S=(x2,y2),
-y que el punto R son nuestras variables
   R=(x,y),
-entonces seguiria 
   yx2 - yx1 - y1x2 + y1x1 = y2x - y2x1 - y1x + y1x1
   yx2 - yx1 - y1x2 + y1x1 - y2x + y2x1 + y1x - y1x1 = 0
-como nuestras variables serian las cordenadas x y y del punto R
-se factorisa y quedaria
   yx2 - yx1 - y2x + y1x - y1x2 + y1x1 + y2x1 - y1x1 = 0
   (x2-x1)y + (y1-y2)x + (- y1x2 + y1x1 + y2x1 - y1x1) = 0
   (y1-y2)x + (x2-x1)y + (y2x1 - y1x2) = 0
-por lo que se puede ver loas valores de A, B ,C
-de la ecuacion implicita, serian
   A=(y1-y2)
   B=(x2-x1)
   C=(y2x1-y1x2)
   
*/

#include <stdio.h>
#include<math.h>

int main()
{
	//variable
	  
	float x1,x2,y1,y2;//coordenadas de los puntos A y B
	float m,n;//pendiente y valor constante de la ecuacion explicita
	float A, B, C;//coeficientes de la ecuacion implicita
	float y21;//dividendo de la pendiente m

	//pedimiento e informacion

	printf("\t\t Calculo la funcion de una recta entre 2 puntos \n");
	
	printf("\n\t\t introduzca coordenada x1=");
	scanf("%f",&x1);
	
	printf("\t\t introduzca coordenada y1=");
	scanf("%f",&y1);
	
	printf("\t\t introduzca coordenada x2=");
	scanf("%f",&x2);
	
	printf("\t\t introduzca coordenada y2=");
	scanf("%f",&y2);

	//pedimento e i e impresion de resultados
	
	A=(y1-y2);//valor deL coeficiente de x en la ecuacion de forma implicita
	
	B=(x2-x1);//valor del coeficiente de y en la ecuacion de forma implicita
	
	C=(y2*x1-y1*x2);//valor del termino contante de la ecuacion de forma implicita
	
	y21=(y2-y1);//dividendo de la pendiente m
	
	m=(y21/A);//calculo de la pendiente (y2-y1)/(x2-x1)
	
	n=(m*(-x1)+y1);//calculo del valor constante o intercecion en eje y
	
	
	printf("\n Pendiente de la recta = \n\t\t %0.2f / %.02f \n",y21,A);
	
	
	printf("\n\n Ecuacion Explicita: \n");// se coloco un if para acomodar los signos de la ecuacion 
	if(n>=0){
		
	printf("\t\t y = %0.2fx + %0.2f \n",m,n);
	
	}else if(n<0){
		
	printf("\t\t y = %0.2fx %0.2f \n",m,n);
	
	}
	
	
	printf("\n\n Ecuaciones Implicitas: \n");// se coloco un if para acomodar los signos de las ecuaciones
	if(n>=0){
		
	printf("\t\t %0.2fx - y + %0.2f = 0 \n",m,n);
	
	}else if(n<0){
		
	printf("\t\t %0.2fx - y %0.2f = 0 \n",m,n);
	
	}
	
	printf("\n\t\t\t  o \n");
	
	if(B>=0 && C>=0){
	
	printf("\n\t\t %.02fx + %.02fy + %.02f = 0 \n",A,B,C);
	
	}else if(B<0 && C<0){
		
	printf("\n\t\t %.02fx %.02fy %.02f = 0 \n",A,B,C);
	
	}else if(B>=0 && C<0){
	
	printf("\n\t\t %.02fx + %.02fy %.02f = 0 \n",A,B,C);
	
	}else if(B<0 && C>=0){
		
	printf("\n\t\t %.02fx %.02fy + %.02f = 0 \n",A,B,C);
		
	}
	return 0;
	//fin de la funcion main
}
