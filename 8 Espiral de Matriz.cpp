/*8. Espiral de Matriz: Escribe un programa que recorra los elementos de una matriz cuadrada de 5x5
en orden espiral. El recorrido debe comenzar en la esquina superior izquierda de la matriz y avanzar
en sentido horario, imprimiendo los elementos en el orden en que se encuentran siguiendo un camino
espiral.
Matriz:
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25

Ejemplo de salida:
Recorrido en espiral:

1 2 3 4 5 10 15 20 25 24 23 22 21 16 11 6 7 8 9 14 19 18 17 12 13*/

#include<iostream>
using namespace std;

 const int N=5;
void recorrido_espiral(int matriz[N][N]) {
    int fila_inicio = 0;
    int fila_fin = N - 1;
    int columna_inicio = 0;
    int columna_fin = N - 1;
    
    while (fila_inicio <= fila_fin && columna_inicio <= columna_fin) {
        // Imprimir la fila superior de izquierda a derecha
        for (int i = columna_inicio; i <= columna_fin; ++i) {
            cout << matriz[fila_inicio][i] << " ";
        }
        fila_inicio++;
        
        // Imprimir la columna derecha de arriba hacia abajo
        for (int i = fila_inicio; i <= fila_fin; ++i) {
            cout << matriz[i][columna_fin] << " ";
        }
        columna_fin--;
        
        // Imprimir la fila inferior de derecha a izquierda si aún queda
        if (fila_inicio <= fila_fin) {
            for (int i = columna_fin; i >= columna_inicio; --i) {
                cout << matriz[fila_fin][i] << " ";
            }
            fila_fin--;
        }
        
        // Imprimir la columna izquierda de abajo hacia arriba si aún queda
        if (columna_inicio <= columna_fin) {
            for (int i = fila_fin; i >= fila_inicio; --i) {
                cout << matriz[i][columna_inicio] << " ";
            }
            columna_inicio++;
        }
    }
}


int main (){
	
	// definimos la matriz
	int matriz[5][5]={
		{1 ,  2,  3,  4,  5},
		{6 ,  7,  8,  9, 10},
		{11, 12, 13, 14, 15},
		{16, 17, 18, 19, 20},
		{21, 22, 23, 24, 25}
	};
	
	// mostramos la matriz definida
	cout << "   MATRIZ DEFINIDA   "<<endl;
	cout << endl;
	for(int i=0 ; i<5 ;i++){
		for(int j=0 ; j<5; j++){
			cout << matriz[i][j]<<"   ";
		}
		cout << endl;
	}
	
	
	
	
	// mostramos la lectura  espiral 
	cout << "------------------------------"<<endl;
	cout << endl;
	cout << "LECTURA EN FORMA ESPIRAL" <<endl;
	cout << endl;
	recorrido_espiral(matriz);
	
	return 0;
	}
	
	
	