/*11. Simulación de Propagación de Fuego: Cree un programa que simule la propagación de un incendio
en un bosque representado por una matriz de 10x10, donde los árboles pueden estar en diferentes
estados: vivos (0), quemándose (1), quemados (2). El programa debe actualizar el estado del bosque
en función de las siguientes reglas y mostrar el bosque en su estado inicial y después de la
propagación del fuego:
• Un árbol vivo (0) se convierte en quemándose (1) si al menos uno de sus vecinos está quemándose.
• Un árbol quemándose (1) se convierte en quemado (2) en la siguiente iteración.
• Un árbol quemado (2) permanece quemado.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int N = 10;
const int M = 10;

// Función para imprimir el estado actual del bosque
void imprimirBosque(int bosque[N][M]) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cout << bosque[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Función para simular la propagación del fuego en el bosque
void propagarFuego(int bosque[N][M]) {
    int nuevoBosque[N][M];

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            // Si el árbol está vivo (0) y tiene al menos un vecino en fuego (1), se prende fuego
            if (bosque[i][j] == 0) {
                if ((i > 0 && bosque[i-1][j] == 1) ||
                    (i < N-1 && bosque[i+1][j] == 1) ||
                    (j > 0 && bosque[i][j-1] == 1) ||
                    (j < M-1 && bosque[i][j+1] == 1)) {
                    nuevoBosque[i][j] = 1;
                } else {
                    nuevoBosque[i][j] = 0;
                }
            }
            // Si el árbol está en fuego (1), se quema (2)
            else if (bosque[i][j] == 1) {
                nuevoBosque[i][j] = 2;
            }
            // Si el árbol ya está quemado (2), se queda en ese estado
            else {
                nuevoBosque[i][j] = bosque[i][j];
            }
        }
    }

    // Actualizamos el bosque original con el nuevo estado
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            bosque[i][j] = nuevoBosque[i][j];
        }
    }
}

int main() {
    // Semilla aleatoria para colocar el primer árbol en fuego
    srand(time(0));

    // Inicializamos el bosque
    int bosque[N][M];

    // Colocamos árboles vivos (0) en el bosque
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            bosque[i][j] = 0;
        }
    }

    // Colocamos un árbol en fuego aleatoriamente para iniciar la propagación
    int filaInicial = rand() % N;
    int columnaInicial = rand() % M;
    bosque[filaInicial][columnaInicial] = 1;

    // Mostramos el estado inicial del bosque
    cout << "Estado inicial del bosque:" << endl;
    imprimirBosque(bosque);

    // Simulamos la propagación del fuego durante 10 iteraciones
    for (int iteracion = 0; iteracion < 10; ++iteracion) {
        propagarFuego(bosque);
        cout << "Iteracion " << iteracion + 1 << ":" << endl;
        imprimirBosque(bosque);
    }

    return 0;
}
