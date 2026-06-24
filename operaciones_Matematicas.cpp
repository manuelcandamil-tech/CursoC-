#include <iostream>
#include <cmath>

using std::cout;
using std::endl;
using std::max;
using std::min;
using std::pow;
using std::sqrt;
using std::abs;
using std::round;
using std::ceil;
using std::floor;

int main() {

    double x = 3;
    double y = 4;
    double z;
    double q= -7.32879;

    z = max(x, y);
    cout << "El valor máximo entre " << x << " y " << y << " es: " << z << endl;
    z = min(x, y);
    cout << "El valor mínimo entre " << x << " y " << y << " es: " << z << endl;
    z = pow(x, y);//eleva x a la potencia de y
    cout << x << " elevado a la potencia de " << y << " es: " << z << endl;
    z = sqrt(x);//raíz cuadrada de x
    cout << "La raíz cuadrada de " << x << " es: " << z << endl;
    z = abs(q);//valor absoluto de q
    cout << "El valor absoluto de " << q << " es: " << z << endl;
    z= round(q);//redondea al entero más cercano. Hasta .5 redondea hacia abajo, a partir de .5 redondea hacia arriba
    cout << "El valor redondeado de " << q << " es: " << z << endl;
    z= ceil(q);//redondea hacia arriba
    cout << "El valor techo de " << q << " es: " << z << endl;
    z= floor(q);//redondea hacia abajo
    cout << "El valor piso de " << q << " es: " << z << endl;//redondea hacia abajo con cualquier decimal

return 0;

}