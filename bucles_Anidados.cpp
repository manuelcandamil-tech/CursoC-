#include <iostream>

using namespace std;

int main(){
    int filas, columnas;
    char simbolo;
    cout << "Ingrese el numero de filas: ";
    cin >> filas;
    cout << "Ingrese el numero de columnas: ";
    cin >> columnas;
    cout << "Ingrese el simbolo a imprimir: ";
    cin >> simbolo;

    for (int i=1; i<=filas; i++){
        for (int j=1; j<=columnas; j++){
            cout << simbolo << " ";
        }
        cout << endl;
    }



    for (int i=1; i<=3; i++){
        for (int j=1; j<=10; j++){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}