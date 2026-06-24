#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main(){

    char op;
    double num1, num2, resultado;

    cout << "Ingrese el operador (+, -, *, /): ";
    cin >> op;
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;

    switch(op){
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if(num2 != 0){
                resultado = num1 / num2;
            } else {
                cout << "Error: División por cero no permitida." << endl;
                return 1; // Salir con error
            }
            break;
        default:
            cout << "Operador no válido." << endl;
            return 1; // Salir con error
      }
    cout << "El resultado es: " << resultado << endl;
    return 0; // Salir sin error
}