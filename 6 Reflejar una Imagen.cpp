/*6. Reflejar una Imagen: Implemente un programa que refleje horizontalmente una imagen
representada por una matriz de 6x6. El programa debe intercambiar los elementos de cada fila para
obtener la imagen reflejada.
Matriz:                             Ejemplo de Salida
                                     Matriz reflejada horizontalmente:
1 2 3 4 5                                5 4 3 2 1
6 7 8 9 1                                1 9 8 7 6   
2 3 4 5 6                                6 5 4 3 2   
7 8 9 1 2                                2 1 9 8 7  
3 4 5 6 7                                7 6 5 4 3*/
#include<iostream>
using namespace std ;
int main (){
	
	int matriz[5][5] = {
	    {1, 2, 3, 4, 5},
		{6, 7, 8, 9, 1},
		{2, 3, 4, 5, 6},
		{7, 8, 9, 1, 2},
		{3, 4, 5, 6, 7}
	};
	
	// Mostrar matriz original
    cout << "Matriz original:" << endl;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    
    // feflejamos la imagen
	for (int i=0 ; i <5 ; i++){
		for (int j = 0 ; j <2 ; j++){
			int aux = matriz[i][j];
			matriz[i][j] = matriz [i][4-j];
			matriz [i][4-j] = aux ;
			
		}
		cout << endl;
	}
	
	// resultados
	
	cout << "Matriz reflejada"<<endl;
	for ( int i = 0 ; i < 5 ; i++){
		for(int j=0; j<5 ;j++){
		cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}                               
                                            





