/*3. Suma de Diagonales: Desarrolle un programa que sume los elementos de las dos diagonales de una
matriz de 4x4 y muestre el resultado*/
#include<iostream>
using namespace std;
int main (){
	int matriz[4][4];
	cout << "INGRESE LOS VALORES DE LOS ELEMENTOS DE LA MATRIZ"<<endl;
	cout <<endl;
	//lectura d elementos
	 for(int i = 0 ; i<4 ; i++){
	 	for(int j =0 ; j < 4; j++){
	 		cout << "Ingrse el valor d ela matriz [" << i << "]["<<j<<"]: ";
	 		cin >> matriz[i][j];
		 }
	 }
	 
	cout << "---------------------------------------------------"<<endl;
	cout << "        MATRIZ     "<<endl;
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
	
	int suma_diagonal_principal=0 , suma_diagonal_secundaria = 0;
	
	//sumamos las dos diagonales de  matriz
	 for ( int i = 0 ; i < 4 ; i++){
	 	suma_diagonal_principal  = suma_diagonal_principal + matriz[i][i];   
	 	suma_diagonal_secundaria = suma_diagonal_secundaria + matriz[i][3-i];
	 }
	
	// mostramos resultados
	cout << endl;
	cout << "__________________________________________"<<endl;
	cout << endl;
	cout << "  RESULTADOS DE LAS SUMAS DE DIAGONALES   "<<endl;
	cout << endl;
	cout << "Diagonal principal : "<<suma_diagonal_principal <<endl;
	cout << endl;
	cout << "Diagonal secundaria: "<<suma_diagonal_secundaria<<endl;
	cout << endl;
	cout << "___________________________________________"<<endl;
	
	return 0;
}