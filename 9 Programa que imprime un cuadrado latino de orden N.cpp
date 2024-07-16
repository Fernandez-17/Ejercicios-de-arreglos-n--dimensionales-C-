/*9. Programa que imprime un cuadrado latino de orden N. Un cuadrado latino de orden N es una matriz
cuadrada en la que la primera fila contiene los N primeros números naturales y cada una de las
siguientes N-1 filas contiene la rotación de la fila anterior un lugar a la derecha. Ejemplo: Cuadrado
latino de orden 4.
1 2 3 4
4 1 2 3
3 4 1 2
2 3 4 1*/
#include <iostream>

using namespace std;

const int N = 10; 

void construir_cuadrado(int n, int matriz[N][N]) {
    
    for (int i = 0; i < n; i++) {
      
        matriz[0][i] = i + 1;
    }

 
    for (int i = 1; i < n; i++) {
        
        for (int j = 0; j < n; j++) {
            matriz[i][j] = matriz[i-1][(j+n-1) % n];
        }
    }
}

void mostrar_cuadrado(int n, int matriz[N][N]) {

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int orden = 4; 
    int matriz[N][N]; 
    

    construir_cuadrado(orden, matriz);

    mostrar_cuadrado(orden, matriz);
    
    return 0;
}
