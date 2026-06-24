#include <iostream>

using namespace std;

int main(){
    // Break: Detiene la ejecución del bucle cuando se cumple una condición específica.
    for (int i = 0 ; i<=25; i++){
        if (i== 13){
            break;
        }
        cout << i << endl;
    }
    cout << "Bucle detenido en 13" << endl;

    // Continue: Omite la iteración actual del bucle y pasa a la siguiente iteración.
    for (int i = 0 ; i<=25; i++){
        if (i== 13){
            cout << "Omitiendo el número 13" << endl;
            continue;
        }
        cout << i << endl;
    }
    cout << "Bucle omitió la iteración en 13" << endl;



    return 0;
}