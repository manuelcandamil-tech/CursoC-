#include <iostream>
#include <ctime>

using namespace std;

void felizCumpleaños(string Nombre, int edad){
    cout << "Que los cumplas feliz,\n";
    cout << "Que los cumplas feliz,\n";
    cout << "Que los cumplas feliz,\n";
    cout << "Feliz cumpleaños, " << Nombre << "!\n";
    cout << "Tienes " << edad << " años, felicidades!\n";

}

int main(){
    string Nombre;
    int edad;
    cout << "Ingrese el nombre del cumpleañero: ";
    cin >> Nombre;
    cout << "Ingrese la edad del cumpleañero: ";
    cin >> edad;
    felizCumpleaños(Nombre,edad);
    return 0;
}

//Los nombres de las variables que se poonen entre paréntesis son variables de tipo local. Son variables que se envia y reciben.
//Puedem diferir los nombres, pero deben coincidir en el orden y tipo de datos. O sea, en este ejemplo se envia el nombre y edad en ese orden
//por lo que se deben enviar y recibir en ese orden. Las variables pueden cambiar de nombre, pero la informacion debe ser la misma en ambas.
//Esto son variables de tipo local, ya que sólo existen y tienen sentido dentro de cada bloque de código.
//Las variables de tipo global son aquellas que se declaran fuera de cualquier función y pueden ser accedidas por cualquier función dentro
//de lo que es el código. Sin embargo, es importante tener cuidado al usar variables globales, ya que pueden generar conflictos y dificultar el 
//mantenimiento del código. Es recomendable limitar su uso y preferir variables locales siempre que sea posible.
//Un ejemplo de variable global podría ser declarar una constante como PI o la Velocidad de la luz mucho antes de declarar algo.