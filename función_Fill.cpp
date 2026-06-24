#include <iostream>

using namespace std;

int main(){
    //fill(inicio,final,valor) -> llena un rango con un valor específico
    const int N = 150;
    string comidas [N];
    fill (comidas, comidas+N, "Pizza"); // Llena el array "comidas" con el valor "Pizza" desde el inicio hasta el final del array (50 elementos)
    int k = sizeof(comidas)/sizeof(comidas[0]);

    for (int i=0; i<k; i++){
        cout <<i << ": " << comidas[i] << endl;
    }

    return 0;
}