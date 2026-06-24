#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

    int mes;
    cout << "Ingrese el nº del mes por favor: ";
    cin >> mes;

    switch (mes) {
        case 1:
            cout << "El mes es enero." << endl;
            break;
        case 2:
            cout << "El mes es febrero." << endl;
            break;
        case 3:
            cout << "El mes es marzo." << endl;
            break;
        case 4:
            cout << "El mes es abril." << endl;
            break;
        case 5:
            cout << "El mes es mayo." << endl;
            break;
        case 6:
            cout << "El mes es junio." << endl;
            break;
        case 7:
            cout << "El mes es julio." << endl;
            break;
        case 8:
            cout << "El mes es agosto." << endl;
            break;
        case 9:
            cout << "El mes es septiembre." << endl;
            break;
        case 10:
            cout << "El mes es octubre." << endl;
            break;
        case 11:
            cout << "El mes es noviembre." << endl;
            break;
        case 12:
            cout << "El mes es diciembre." << endl;
            break;
        default:
            cout << "El número ingresado no corresponde a ningún mes." << endl;
    }

    return 0;
}