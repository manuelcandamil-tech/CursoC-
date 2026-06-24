#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int menuPrincipal(){
    int opcion;
    do
    {
        system("clear");
        cout <<"#==================================================#" << '\n';
        cout <<"#       Eliga una de las siguientes opciones       #" << '\n';
        cout <<"#==================================================#" << '\n';
        cout <<"#  1) Ingresar Saldo                               #" << '\n';
        cout <<"#  2) Retirar Saldo                                #" << '\n';
        cout <<"#  3) Mostrar Saldo                                #" << '\n';
        cout <<"#  4) Salir                                        #" << '\n';
        cout <<"#==================================================#" << '\n';
        cout <<"Opción elegida:";
        cin >> opcion;

    } while (opcion<1 || opcion >4);
    return opcion;
}
void ingresarSaldo(){
    double monto= 0;
    cout << "Ingrese el monto a ingresar";
    cin >> monto;
    ofstream archivo("Saldo.txt", ios::app);
    if (archivo.is_open()) {
        archivo << monto += monto;
        archivo.close();
        cout << "Usuario registrado exitosamente." << endl;
    } else {
        cout << "Error al abrir la base de datos." << endl;
    }
}

void mostrarSaldo(){
    string linea;
    ifstream archivo ("Saldo.txt");

    cout << "\n--- Saldo: ---" << endl;
    if (archivo.is_open()) {
        while (getline(archivo, linea)) {
            cout << "- " << linea << endl;
        }
        archivo.close();
    } else {
        cout << "No hay registros o la base de datos no existe." << endl;
    }
}
void retirarSaldo(){
    float Saldo;

    cout << "Ingrese saldo a retirar";
    cin Saldo;

    ifstream archivo ("Saldo.txt");
    if (archivo.is_open()){
        archivo<<monto-=Saldo;
    }else {
        cout <<"Error al leer base de datos";
    }
}

int main(){
    do
    {
        int opcion =0;
        opcion = menuPrincipal();
        cout << opcion;
        switch (opcion)
        {
            case 1:
            ingresarSaldo();
            break;
        case 2:
            retirarSaldo();
            break;
        case 3:
            mostrarSaldo();
            break;

    } while (opcion!=4);
    
    return 0;
}