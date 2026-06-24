#include <iostream>

using namespace std;

int main(){

    string nombre = "";
    while (nombre.empty()){
        system("clear");//En Windows se utiliza system("cls");
        cout <<"Ingrese su nombre: ";
        getline(cin, nombre);
    }

    cout <<"Hola " << nombre << ", bienvenido al curso de programación en C++!" << endl;


    return 0;
}