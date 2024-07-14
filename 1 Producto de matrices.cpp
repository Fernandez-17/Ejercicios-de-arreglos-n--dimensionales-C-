/*Producto de Dos Matrices: Implemente un programa que multiplique dos matrices de 3x3 y
muestre el resultado, y muestre las dos matrices y su resultado en horizontal
Ejemplo de Salida
Matriz A:         Matriz B:         Resultado:
1 2 3             9 8 7              30 24 18
4 5 6             6 5 4              84 69 54
7 8 9             3 2 1              138 114 90*/
#include<iostream>
using namespace std;

// Matriz A
int matriz_A[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};
// Matriz B
int matriz_B[3][3] = {
    {9, 8, 7},
    {6, 5, 4},
    {3, 2, 1}
};

// Función para calcular el producto de  matrices 
void producto_matriz(int A[][3], int B[][3], int producto[][3]) {
    for(int i = 0 ; i < 3 ; i++) {
        for(int j = 0 ; j < 3 ; j++) {
            producto[i][j] = 0;
            for(int k = 0 ; k < 3 ; k++) {
                producto[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Función para mostrar una matriz
void mostrar_matriz(int matriz[][3], const string& nombre) {
    cout << nombre << ":" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl; 
}

int main () {
    int producto[3][3];

    // Calculamos el producto de las matrices A x B
    producto_matriz(matriz_A, matriz_B, producto);

    // Mostramos las matrices y el resultado en horizontal
    cout << "Matriz A: Matriz B: Resultado:" << endl;
    cout << "_____________________________________________________" << endl;
    for (int i = 0; i < 3; ++i) {
        //  Matriz A
        for (int j = 0; j < 3; ++j) {
            cout << matriz_A[i][j] << " ";
        }
        cout << "\t\t";

        //  Matriz B
        for (int j = 0; j < 3; ++j) {
            cout << matriz_B[i][j] << " ";
        }
        cout << "\t\t";

        // Resultado
        for (int j = 0; j < 3; ++j) {
            cout << producto[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

