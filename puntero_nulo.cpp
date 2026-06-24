#include <iostream>

using namespace std;

int main(){
    int *puntero = nullptr; // Inicializamos el puntero a nullptr
    int valor = 500;
    puntero = &valor; // Asignamos la dirección de memoria de 'valor' al puntero

   if (puntero == nullptr) {
        cout << "El puntero es nulo, no apunta a ninguna dirección de memoria." << endl;
    } else {
        cout << "El puntero apunta a una dirección de memoria válida." << endl;
        cout << "El valor apuntado por el puntero es: " << *puntero << endl;
        cout << "La dirección de memoria almacenada en el puntero es: " << puntero << endl;
    }
    
    return 0;
}