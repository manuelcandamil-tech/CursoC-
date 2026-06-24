#include <iostream>

using namespace std;

int main (){
    //&& Comprueba si dos condiciones son verdaderas. Sòlo es verdadero si ambas condiciones son verdaderas.
    //|| Comprueba si al menos una de las condiciones es verdadera. Es falso sólo si ambas condiciones son falsas.
    //! Es un operador de negación que invierte el valor lógico de una expresión. 
    //Si la expresión es verdadera, el operador ! la convierte en falsa, y viceversa

    float temp, humedad;
    bool soleado = false;
    //out << "Ingrese la temperatura: ";
    //cin >> temp;
    //cout << "Ingrese la humedad: ";
    //cin >> humedad;  
    //if (temp > 10 && temp < 25){
    //    cout << "La temperatura es agradable." << endl;
    //} else {
    //    cout << "La temperatura está fuera del rango agradable." << endl; 
    //}

    //if (temp > 30 || humedad > 70){
    //    cout << "El clima es caluroso o húmedo." << endl;
    //} else {
    //    cout << "El clima es agradable." << endl;
    //}

    if (!soleado) {
        cout << "El clima es soleado." << endl;
    } else {
        cout << "El clima está nublado." << endl;
    }

    return 0;
}