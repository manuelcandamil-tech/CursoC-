#include <iostream>

using namespace std;

int funBusqueda(string arr[], int n, string valor){
    int indice = -1; // Inicializa el índice como -1 para indicar que no se ha encontrado
    for(int i=0; i<n; i++){
        if(arr[i] == valor){
            indice = i; // Retorna el índice del elemento encontrado
        }
    }
    return indice; // Retorna el índice del elemento encontrado o -1 si no se encuentra
}

int main(){
    string marcas [] = {"Samsung", "Apple", "Toshiba", "LG", "Sony"};
    string marcaBuscada;
    int k = sizeof(marcas) / sizeof(marcas[0]);
    int indice;
    cout << "Ingrese una marca a buscar en el array: ";
    getline(cin, marcaBuscada);
    indice = funBusqueda(marcas, k, marcaBuscada);
    if(indice != -1){
        cout << "La marca " << marcaBuscada << " se encuentra en el indice: " << indice << endl;
    } else {
        cout << "La marca " << marcaBuscada << " no se encuentra en el array." << endl;
    }
return 0;
}