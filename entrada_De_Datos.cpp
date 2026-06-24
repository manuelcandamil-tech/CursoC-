#include <iostream>

using   namespace std;

int main() {
    string nombre;
    int edad;

    cout<<"Ingrese su edad: ";
    cin>>edad;

    cout << "Ingrese su nombre y apellido: ";
    getline(cin>>ws, nombre);
    //==============================================================================================================
    //el comando ws borra cualquier espacio en blanco que quede en el buffer de entrada después de leer la edad, 
    //lo que permite que getline funcione correctamente para leer el nombre completo.
    //==============================================================================================================


    cout << "Hola, " << nombre << ", tu edad es de: " << edad << " años..." << '\n';


    return 0;
}