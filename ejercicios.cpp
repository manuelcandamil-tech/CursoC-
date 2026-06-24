#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::sqrt;
using std::pow;

int main(){

    double a, b, c;
    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;
    c= sqrt(pow(a, 2) + pow(b, 2));
    cout << "La hipotenusa es: " << c << endl;

    return 0;
}