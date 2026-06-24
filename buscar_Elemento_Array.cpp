#include <iostream>

using namespace std;

int funBusqueda(int arr[], int n, int valor){
    for(int i=0; i<n; i++){
        if(arr[i] == valor){
            return i; // Retorna el índice del elemento encontrado
        }
    }
    return -1; // Retorna -1 si el elemento no se encuentra
}

int main(){
    int numeros[] = {0,1,2,3,4,5,6,7,8,9,10};
    int numeroBuscado;
    int k = sizeof(numeros) / sizeof(numeros[0]);
    int indice;

    cout << "Ingrese un numero a buscar en el array: ";
    cin >> numeroBuscado;

    indice = funBusqueda(numeros, k, numeroBuscado);
    if(indice != -1){
        cout << "El numero " << numeroBuscado << " se encuentra en el indice: " << indice << endl;
    } else {
        cout << "El numero " << numeroBuscado << " no se encuentra en el array." << endl;
    }

    return 0;
}