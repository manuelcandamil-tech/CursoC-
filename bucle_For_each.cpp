#include <iostream>

using namespace std;

int main(){
    string Nombres[] = {"Antonio", "Waldorf", "Sopranos", "Gomez", "Perez", "Garcia", "Lopez", "Rodriguez", "Martinez", "Sanchez"};
    
    for(const string& nombre : Nombres){
        cout << nombre << endl;
    }//Este bucle for each es una forma más sencilla de recorrer un array o una colección de elementos, 
    //sin necesidad de usar un índice. En este caso, se declara una variable "nombre" que toma el valor de cada elemento del array "Nombres" 
    //en cada iteración del bucle. Este tipo de bucle recorre la lista de un valor en uno, de izquierda a derecha.

    return 0;
}