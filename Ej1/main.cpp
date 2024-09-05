#include <iostream>

// codigo sencillo para intercambiar el valor de 2 números

int main(){
	int x,y;
	int aux;
	std::cout << "Ingrese dos números enteros para invertirlos: ";
	std::cin >> x >> y;
	aux = x;
	x = y;
	y = aux;
	std::cout << x << ", " << y;
	std::cout << "\nNuevo cambio en vscode 5 de septiembre\n";
return 0;
}
