#include <stdio.h>

// codigo sencillo para intercambiar el valor de 2 números

int main(){
	int x,y;
	int aux;
	printf("Ingrese dos números enteros para invertirlos: ");
	scanf("%i",&x);
	scanf("%i",&y);
	aux = x;
	 printf("frase ejemplo 5 de septiembre"); 
	x = y;
	y = aux;
	printf("%i, %i\n", x, y);
return 0;
}
