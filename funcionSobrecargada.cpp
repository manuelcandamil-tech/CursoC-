# include <iostream>
using namespace std;

void hornearPizza(){

    cout << "Aquí está tu pizza \n";

}
void hornearPizza(string ingrediente_uno){

    cout << "Aquí está tu pizza de " << ingrediente_uno <<'\n';

}
void hornearPizza(string ingrediente_uno, string ingrediente_dos){

    cout << "Aquí está tu pizza de " << ingrediente_uno << " y " << ingrediente_dos <<'\n';

}

//Basicamente pueden existir funciones con el mismo nombre, pero que acepten parámetros diferentes con el fin de que, cuando se llame a la función
//se le puedan pasar diferente cantidad de parámetros según se necesite


int main(){

    hornearPizza("muzarella", "peperoni");
    cin.get();
    system("clear");

    return 0;
}