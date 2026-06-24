#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void registrarUsuario() {
    string nombre;
    int edad;

    cout << "\n--- Registrar Usuario ---" << endl;
    cout << "Nombre: ";
    cin.ignore();
    getline(cin, nombre);
    cout << "Edad: ";
    cin >> edad;

    // Abrimos el archivo en modo append (añadir al final)
    ofstream archivo("basededatos.txt", ios::app);

    if (archivo.is_open()) {
        archivo << nombre << "," << edad << endl;
        archivo.close();
        cout << "Usuario registrado exitosamente." << endl;
    } else {
        cout << "Error al abrir la base de datos." << endl;
    }
}

void leerUsuarios() {
    string linea;
    // Abrimos el archivo en modo lectura
    ifstream archivo("basededatos.txt");

    cout << "\n--- Lista de Usuarios ---" << endl;
    if (archivo.is_open()) {
        while (getline(archivo, linea)) {
            cout << "- " << linea << endl;
        }
        archivo.close();
    } else {
        cout << "No hay registros o la base de datos no existe." << endl;
    }
}

int main() {
    int opcion;
    do {
        cout << "\n1. Registrar Usuario" << endl;
        cout << "2. Ver Usuarios" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: registrarUsuario(); break;
            case 2: leerUsuarios(); break;
            case 3: cout << "Saliendo..." << endl; break;
            default: cout << "Opcion invalida." << endl;
        }
    } while (opcion != 3);

    return 0;
}
