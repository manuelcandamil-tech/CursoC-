#include <iostream>

using namespace std;

template <typename T, typename U>
/* Al poner dos typename podemos combinar 2 tipos de variables (pasar parametros de distintos tipos)
a la función y así poder comparar el mayor entre dos valores aunque éstos sean de distinto tipo
*/

auto max(T x, U y){
    return(x>y) ? x : y;
}//Se utiliza el comando "auto" para que el retorno sea automáticamente del mismo tipo de datos

int main(){

    cout<<"El valor mayor de los dos valores dados es: "<<max(85,'B')<<endl;
 
    return 0;
}
