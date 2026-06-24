#include <iostream>
using namespace std;

void caminar (int pasos){
    for (int i = 0; i < pasos; i++){
        cout << "Paso " << i+1 << endl;
    }
}
void caminar_recursivo (int pasos){
    if (pasos > 0){
        cout << "Quedan un total de " << pasos <<" pasos para llegar"<< endl;
        caminar_recursivo(pasos - 1);
    }else {
            cout << "Llegaste a tu destino" << endl;
    }
}

int main(){
    int pasos;
    cout << "Ingrese el numero de pasos a caminar: ";
    cin >> pasos;
    caminar(pasos);
    cin.ignore();//Ignora si se ha presionado una tecla anteriormente y limpia el buffer de entrada
    cin.get();//Pausa el programa hasta que se presione una tecla
    system("clear");//Limpia la pantalla de la consola
    caminar_recursivo(pasos);
    return 0;
}