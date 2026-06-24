#include <iostream>

using namespace std;

int main(){

    string automovil[100]; // Suponiendo un máximo de 100 automóviles.
    //Se le asigna un tamaño fijo acá porque los arreglos en C++ deben tener un tamaño definido en el momento de su declaración. 
    //No se pueden redimensionar dinámicamente como los vectores.
    //Si se delaran con valores iniciales, se pueden omitir los corchetes y el tamaño, pero en este caso se necesita un tamaño fijo para almacenar los automóviles.
    //Los arreglos siempre deben ser del mismo tipo de datos.

    int cantidad;

    cout << "Ingrese cantidad de automóviles a igresar (100 máximo): ";
    cin >> cantidad;
    for (int i = 0; i < cantidad; i++){
        cout << "Ingrese el nombre del automovil: ";
        cin >> automovil[i];
    }
    cout << "Los automóviles ingresados son: " << endl;
    cin.ignore(); // Limpiar el buffer de entrada antes de esperar por Enter
    for (int i = 0; i < cantidad; i++){
        cout << i + 1 << ". " << automovil[i] << endl;

    }
    cin.get(); // Esperar a que el usuario presione Enter
    
    return 0;
}