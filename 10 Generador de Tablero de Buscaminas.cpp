/*10. Generador de Tablero de Buscaminas: Desarrolla un programa que genere un tablero inicial para
el juego de Buscaminas en una cuadrícula de 10x10. El programa debe:
a) Crear aleatoriamente un tablero donde cada celda puede contener una mina (1) o estar vacía (0).
b) Para cada celda, calcular y mostrar el número de minas en las ocho celdas adyacentes (no se
cuenta la celda misma).
c) Mostrar el tablero original con las minas y el tablero con los números lado a lado.
Nota: Recuerda que en Buscaminas, el número en una celda indica cuántas minas hay alrededor, no
incluyendo la propia celda.
Ejemplo de salida:                           
1 1 0 1 0 0 1 1 0 0

0 0 1 1 0 1 1 0 0 0

0 0 1 1 1 1 0 1 1 0

0 0 0 0 1 0 1 0 1 0

0 1 1 1 1 0 0 1 1 0

1 0 1 0 1 0 1 0 0 1

1 0 1 1 0 1 0 1 0 1

1 1 0 1 0 1 0 0 1 1

1 1 1 0 0 1 0 0 0 0

1 0 1 0 0 1 1 1 0 1 */
#include <iostream>
#include <cstdlib> // Para rand() y srand()
#include <ctime>   // Para time()

using namespace std;

const int N = 10; // Tamaño del tablero (N x N)

// Función para inicializar el tablero con minas aleatorias
void inicializarTablero(int tablero[N][N]) {
    // Semilla para el generador de números aleatorios
    srand(time(nullptr));

    // Probabilidad de que una celda contenga una mina (30% en este caso)
    const int probabilidadMina = 30;

    // Generar el tablero con minas aleatorias
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int randomNum = rand() % 100 + 1; // Número aleatorio entre 1 y 100
            if (randomNum <= probabilidadMina) {
                tablero[i][j] = 1; // Hay una mina
            } else {
                tablero[i][j] = 0; // No hay mina
            }
        }
    }
}

// Función para contar las minas adyacentes a cada celda y mostrar el tablero de números
void contarMinasAdyacentes(int tablero[N][N], int tableroNumeros[N][N]) {
    // Direcciones de los vecinos (arriba, abajo, izquierda, derecha y diagonales)
    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    // Recorrer cada celda del tablero
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            // Si hay una mina en la celda actual
            if (tablero[i][j] == 1) {
                tableroNumeros[i][j] = 1; // Representamos una mina con el número 1
                continue; // Pasamos a la siguiente celda
            }

            // Contar las minas adyacentes
            int minasAdyacentes = 0;
            for (int k = 0; k < 8; k++) {
                int ni = i + dx[k];
                int nj = j + dy[k];
                // Verificar si la celda vecina está dentro de los límites del tablero y contiene una mina
                if (ni >= 0 && ni < N && nj >= 0 && nj < N && tablero[ni][nj] == 1) {
                    minasAdyacentes++;
                }
            }
            tableroNumeros[i][j] = minasAdyacentes;
        }
    }
}

// Función para mostrar el tablero en la consola
void mostrarTablero(int tablero[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << tablero[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int tablero[N][N];         // Tablero con las minas
    int tableroNumeros[N][N];  // Tablero con los números de minas adyacentes

    // Inicializar el tablero con minas aleatorias
    inicializarTablero(tablero);

    // Calcular y mostrar los números de minas adyacentes
    contarMinasAdyacentes(tablero, tableroNumeros);

    // Mostrar ambos tableros lado a lado
    cout << "Tablero Original:\n";
    mostrarTablero(tablero);
    
    cout << "\nTablero con Números de Minas Adyacentes:\n";
    mostrarTablero(tableroNumeros);

    return 0;
}
