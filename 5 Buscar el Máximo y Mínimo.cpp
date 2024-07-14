/*5. Buscar el Máximo y Mínimo: Escriba un programa que encuentre el valor máximo y el valor
mínimo en una matriz de 4x4, indicando sus posiciones.*/
#include<iostream>
using namespace std;
int main (){
	int matriz[4][4];
	// solicitamos los valores de la matriz al usuario
	cout << "INGRESE LOS VALORES DE LOS ELEMENTOS DE LA MATRIZ" << endl;
	cout << endl;
	
	 for(int i = 0 ; i<4 ; i++){
	 	for(int j =0 ; j < 4; j++){
	 		cout << "Ingrse el valor d ela matriz [" << i << "]["<<j<<"]: ";
	 		cin >> matriz[i][j];
		 }
	 }
	
	// mostramos la matrizc definida por el usuario
	cout << "--------------------------------------"<<endl;
	cout << endl;
	cout << "            MATRIZ DEFINIDA           "<<endl;
	cout << endl;

	for (int i =0 ; i< 4;i++){
		for (int j = 0 ; j< 4 ; j++){
		cout << matriz [i][j] <<" ";	
		}
     	cout << endl;	
	}
	
	// hallamos el minimo y maximo valor de la matriz
	int minimo= matriz[0][0] , maximo =matriz[0][0];
	int fila_min = 0, columna_min = 0;
    int fila_max= 0, columna_max = 0;
    
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(matriz[i][j] < minimo) {
                minimo = matriz[i][j];
                fila_min = i;
                columna_min = j;
            }
            if(matriz[i][j] > maximo) {
                maximo = matriz[i][j];
                fila_max = i;
                columna_max = j;
            }
        }
    }
    
    // resultados 
    cout << "-------------------------------------------------------" << endl;
    cout << " EL MINIMO Y EL MAXIMO VALOR DE LA MATRIZ DEFINIDA SON " << endl;
    cout << endl;
    cout <<"                MINIMO            "<<endl;
    cout << endl;
    cout << "Valor : "<< minimo <<endl;
    cout << "Posicion :" << "[" << fila_min <<"]"<<"["<<columna_min<<"]"<<endl;
    cout << endl;
    cout << "               MAXIMO            "<<endl;
    cout << endl;
    cout << "Maximo : "<< maximo <<endl;
    cout << "Posicion :" << "[" << fila_max <<"]"<<"["<<columna_max<<"]"<<endl;
    
	return 0;
}