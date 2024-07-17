/*12. Juego de la Vida de Conway: Desarrolla un programa que simule el "Juego de la Vida" de Conway
en un tablero de 10x10. El programa debe:
a) Crear aleatoriamente un tablero inicial donde cada celda puede estar viva (1) o muerta (0).
b) Calcular el estado del tablero en la segunda generación.
c) Mostrar el tablero inicial y el tablero de la segunda generación lado a lado.
En el "Juego de la Vida", el estado de cada celda en la próxima generación se determina por el
número de celdas vivas adyacentes:
1. Una célula viva con menos de dos vecinos vivos muere (subpoblación).
2. Una célula viva con dos o tres vecinos vivos sigue viva.
3. Una célula viva con más de tres vecinos vivos muere (sobrepoblación).
4. Una célula muerta con exactamente tres vecinos vivos se convierte en una célula viva
(reproducción).*/

#include <iostream>
#include <vector>

using namespace std;


const int filas = 10;
const int columnas = 10;

// Función para imprimir el tablero
void imprimir_tablero(const vector<vector<int>>& tablero) {
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << tablero[i][j] << ' ';
        }
        cout << endl;
    }
}

// Función para calcular la siguiente generación del tablero
vector<vector<int>> siguiente_generacion(const vector<vector<int>>& tablero) {
    vector<vector<int>> nuevo_tablero(filas, vector<int>(columnas, 0));

   
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            // Contamos vecinos vivos
            int vecinos_vivos = 0;
            for (int ni = max(0, i - 1); ni <= min(filas - 1, i + 1); ++ni) {
                for (int nj = max(0, j - 1); nj <= min(columnas - 1, j + 1); ++nj) {
                    vecinos_vivos += tablero[ni][nj];
                }
            }

            // Restamos la celda actual si está viva
            vecinos_vivos -= tablero[i][j];

            // Aplicamos las reglas del juego de la vida
            if (tablero[i][j] == 1 && (vecinos_vivos < 2 || vecinos_vivos > 3)) {
                nuevo_tablero[i][j] = 0; // Muere por subpoblación o sobrepoblación
            } else if (tablero[i][j] == 0 && vecinos_vivos == 3) {
                nuevo_tablero[i][j] = 1; // Nace por reproducción
            } else {
                nuevo_tablero[i][j] = tablero[i][j]; // Mantiene el estado actual
            }
        }
    }

    return nuevo_tablero;
}

int main() {
    // Tablero inicial
    vector<vector<int>> tablero = {
        {0, 1, 1, 0, 1, 0, 0, 0, 0, 0},
        {0, 0, 1, 1, 1, 1, 1, 1, 1, 0},
        {1, 0, 1, 0, 0, 1, 1, 0, 1, 1},
        {0, 0, 1, 0, 0, 1, 0, 0, 1, 1},
        {0, 1, 0, 1, 0, 0, 0, 1, 1, 1},
        {1, 1, 1, 1, 0, 0, 0, 1, 0, 1},
        {0, 0, 0, 1, 1, 0, 1, 0, 0, 1},
        {0, 0, 0, 1, 0, 1, 1, 1, 0, 0},
        {1, 1, 1, 0, 1, 1, 0, 0, 0, 0},
        {0, 1, 1, 1, 0, 0, 0, 0, 1, 1}
    };

    // Mostramos el tablero inicial
    cout << "         Tablero inicial:         " << endl;
    cout << endl;
    imprimir_tablero(tablero);

    // Calculamos la siguiente generación
    vector<vector<int>> siguiente_tablero = siguiente_generacion(tablero);

    // Mostramos la siguiente generación
    cout << "--------------------------------------"<<endl;
    cout << "       Siguiente generación:     " << endl;
    cout << endl;
    
    imprimir_tablero(siguiente_tablero);

    return 0;
}
