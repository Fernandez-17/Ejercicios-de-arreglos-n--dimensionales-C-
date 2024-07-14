/*4. Intercambio de Filas: Desarrolle un programa que intercambie dos filas específicas de una matriz
de 4x4 y muestre la matriz resultante.
Ejemplo de Entrada
Matriz:                    Filas a intercambiar:                 Matriz resultante:
1 2 3 4                       0                                  9 10 11 12
5 6 7 8                       2                                  5  6  7  8
9 10 11 12                                                       1  2  3  4
13 14 15 16                                                      13 14 15 16*/

#include<iostream>
using namespace std;
int main(){
	int matriz[4][4] = {
		{ 1,  2,  3,  4},
		{ 5,  6,  7,  8},
		{ 9, 10, 11, 12},
		{13, 14, 15, 16}	
	};
	cout << "    MATRIZ DEFINIDA     "<< endl;
	cout << endl;
	// escritura de elementos 
	cout << "Contenido de la matriz: " <<endl;
	cout << endl;
	for (int i =0 ; i<4;i++){
		for (int j = 0 ; j<4 ; j++){
		cout << matriz [i][j] <<" ";	
		}
     	cout << endl;	
	}
	
     // solicitamos al usuario las filas a intercambiar
	int fila_a , fila_b;
	cout <<"______________________________________________________"<< endl;
	cout << endl;
	cout << "   INGRESE EL NUMERO DE LAS FILAS QUE DESEA CAMBIAR  "<<endl;
	cout << endl;
	cout << "Fila a: ";
	cin  >> fila_a;
	cout << "Fila b: ";
	cin  >> fila_b;
	// intercambio de filas
	for(int i = 0 ; i < 4 ; i++){
		int aux = matriz[fila_a][i];
		matriz[fila_a][i] = matriz [fila_b][i];
		matriz[fila_b][i] = aux;	
	}
	// mostramos el resultado
	cout << "--------------------------------------------------------"<<endl;
	cout << endl;
	cout << "           MATRIZ CON FILAS INTERCAMBIADAS              "<<endl;
	cout << endl;
	for (int i = 0 ; i < 4 ; i++){
		for (int j = 0 ; j<4 ;j++){
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}