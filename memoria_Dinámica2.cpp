#include <iostream>

using namespace std;

int main(){

    int *pNotas = NULL;
    int tam;

    cout<<"¿Cuántas notas deseas ingresar? ";
    cin>>tam;

    pNotas = new int[tam];

    for (int i = 0; i < tam; i++){
        cout<<"Ingresa la nota nª "<<i+1<<": ";
        cin>>pNotas[i];
    }
    cout<<"Las notas ingresadas son: "<<endl;
    for (int i=0; i < tam; i++){
        cout<<"Nota nª "<<i+1<<": "<<pNotas[i]<<endl;
    }
    delete [] pNotas;
    pNotas = NULL;
    return 0;
}