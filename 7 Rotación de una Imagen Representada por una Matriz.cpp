/*7. Rotación de una Imagen Representada por una Matriz: Escriba un programa que rote una matriz
de 4x4, representando una imagen, 90 grados en sentido horario.
Matriz rotada 90 grados en sentido horario:          Matriz 
4 9 5 1                                             1 2 3 4               
5 1 6 2                                             5 6 7 8
6 2 7 3                                             9 1 2 3
7 3 8 4                                             4 5 6 7*/
#include<iostream>
using namespace std;
int main (){
	 
	int matriz [4][4] = {
	    {1, 2, 3, 4},                                       
		{5, 6, 7, 8},                        
		{9, 1, 2, 3},                         
		{4, 5, 6, 7}
    };
    // mostramos la matriz definida
    cout << " MATRIZ DEFINIDA " << endl,
    cout << endl;
    for ( int i =0 ; i<4 ; i++){
    	for (int j =0 ; j<4 ; j++){
    		cout << matriz[i][j]<<" ";	
		}
		cout << endl;
	}
	 // rotamos 90 grados en sentido horario la matriz
	 int matriz_rotada[4][4];
	 
	 for (int i =0; i<4 ; i++){
	 	for(int j = 0 ; j<4 ; j++){
	 		matriz_rotada[j][3-i]=matriz[i][j];	
		 }
	 }
	 
	 // mostramos la amtriz
	 cout << " MATRIZ ROTADA 90 GRADOS " <<endl;
	 cout <<endl;
	 for( int i=0 ; i<4 ;i++){
	 	for(int j=0 ; j<4 ;j++){
	 		cout << matriz_rotada[i][j] << " ";
		 }
		 cout << endl;
	 }
	 
	return 0;
}




