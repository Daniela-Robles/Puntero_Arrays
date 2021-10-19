//Programa 2 "Arreglos": Diseña un programa breve en c/c++ utilizando arreglos.
// Programa: Rellenar un arreglo con numeros, posteriormente utilizando punteros determinar el numero mayor dentro del arreglo.
#include <iostream>// libreria
using namespace std;//palabras reservadas para usar "cin" y "cout"
int main() {//funcion principal

	int num[5], aux = 0, i, * dir;// declaracion de el arreglo num, la variable "aux" inicializado en cero, y el puntero "*dir"
	for (i = 0; i < 5; i++) {// inicio del ciclo for
		cout << "ingrese el numero para la posicion [" << i << "]" << endl;// si se ciumplen las condiciones del ciclo for se mostrará la frase solicitando un numero
		//al usuario
		cin >> num[i];//lee el numero ingresado por el usuario y lo almacena en "num" en la posición [i]
	}// fin del ciclo for 

	dir = num;// se iguala la variable puntero a la primera posicion del arreglo num
	for (i = 0; i < 5; i++) {// se inicia un nuevo ciclo for
		if (*dir > aux)// se establece una condición, inicio if
		{
			aux = *dir;	//si se cumple la condicion entonces "aux" será igual a "*dir", es decir evaluará y almacenará los numeros del arreglo hasta encontrar el numero 
			//que es mayor que todos
		}// fin del if
		dir++;	// incrementará la variable "dir", para evaluar todos los valores del arreglo
	}// fin del for
	cout << "El numero mayor es:" << aux << endl;// se mostrará en pantalla el numero que es mayor de todos los elementos que ingresó el usuario
}// fin de la funcion principal

