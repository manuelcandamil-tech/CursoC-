#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int filas, columnas;
    char simbolo1, simbolo2;
    system("clear5");
    cout << "Ingrese el numero de filas: ";
    cin >> filas;
    cout << "Ingrese el numero de columnas: ";
    cin >> columnas;
    cout << "Ingrese el primer simbolo a imprimir: ";
    cin >> simbolo1;
    cout << "Ingrese el segundo simbolo a imprimir: ";
    cin >> simbolo2;

    for (int i=1; i<=filas; i++){
            if (i==1){
                cout << simbolo1;
            }
            else{
                cout << simbolo2;
            }   
        for (int j=1; j<=columnas; j++){
            if (j==1){
                cout << simbolo1;
            }
            else{
                cout << simbolo2;
            }
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