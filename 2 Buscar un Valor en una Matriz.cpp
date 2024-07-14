/*2. Buscar un Valor en una Matriz: Escriba un programa que busque un valor específico en una matriz
de 3x3 y devuelva todas las posiciones donde se encuentra, indicando la fila y la columna de cada
ocurrencia.
Ejemplo de entrada
Matriz:
1 2 3
4 2 6
7 2 9
Valor a buscar: 2


Ejemplo Salida
El valor 2 se encuentra en:
Fila 0, Columna 1
Fila 1, Columna 1
Fila 2, Columna 1*/
#include<iostream>
using namespace std;
//FUNCION PARA BUSCAR EN NUMERO EN LA MATRIZ 
void buscar_valor(int matriz[3][3] , int numero_buscado ){
	bool encontrado = false;
	// recorremos la matriz para buscar el valor
	for(int i=0 ; i<3 ; i++){
		for(int j=0 ; j<3 ; j++){
			if(matriz[i][j] == numero_buscado){
			cout << "Fila" << i << ", columna "<< j <<endl; // mostramos posicion y filas 
			encontrado = true;				
			}
		}
	}

// en caso el valor no exista en la matriz
if (!encontrado){
	cout << "El valor " << numero_buscado << "no se encuentra en la matriz." <<endl;
	}
}
// FUNCION PRINCIPAL
int main(){
	int matriz[3][3] = {
	{1, 2, 3},
	{4, 2, 6},
	{7, 2, 9}
};
	// mostramos la matris definida
	cout << "      MATRIZ DEFINIDA         " <<endl;
	cout << "______________________________" <<endl;
	cout << endl;
	
	for (int i =0 ; i<3;i++){
		for (int j = 0 ; j<3 ; j++){
		cout << matriz[i][j] <<" ";	
		}
     	cout << endl;	
	}
	cout << endl;
	
	int numero;
    // solicitamos el numero a buscar al usuario
    cout << "_______________________________________"<<endl;
	cout << "INGRESE EL NUMERO A BUSCAR EN LA MATRIZ"<<endl;
	cout << endl;
	cout << "Numero: ";
	cin  >> numero;
	cout << "______________________________________________________________________"<<endl;
	cout << endl;
	cout << "El numero " << numero << " se encuentra en las siguientes pósiciones de la matriz: "<<endl;
	cout << endl;
	// llamamos a la funcion para buscar el numero en la matriz 
	buscar_valor(matriz,numero);
	
	return 0;
}