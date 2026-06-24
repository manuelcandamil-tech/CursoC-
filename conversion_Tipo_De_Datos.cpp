#include <iostream>

using namespace std;

int main() {
    
    int num = static_cast<int>(3.145);
    cout << num << std::endl;

    int p_Correctas = 8;
    int p_Totales = 10;

    double porcentaje = static_cast<double>(p_Correctas) / p_Totales * 100.0;
    cout << "Porcentaje: " << porcentaje << "%" << std::endl;

    double x = (int) 3.14;
    cout<<x<<'\n';
    x=x + 1.5;
    cout<<x<<'\n';

    char y=100;
    cout<<y<<'\n';//Imprime el carácter correspondiente al código ASCII 100, que es 'd'
    
    return 0;
}