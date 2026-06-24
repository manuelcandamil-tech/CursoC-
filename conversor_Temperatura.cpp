#include <iostream>

using namespace std;

int main (){
    float temperatura;
    char op;

    cout<<"Ingrese la unidad de temperatura a convertir (C para Celsius, F para Fahrenheit): ";
    cin>>op;
    op = toupper(op); // Convertir a mayúscula para facilitar la comparación
    if (op == 'C') {
        cout <<"Ingrese la temperatura en Celsius: "<<'\n';
        cin>>temperatura;
        temperatura = (temperatura * 9/5) + 32; // Convertir a Fahrenheit
        cout<<"La temperatura en Fahrenheit es: "<<temperatura<<" F"<<'\n';
    } else if (op == 'F') {
        cout <<"Ingrese la temperatura en Fahrenheit: "<<'\n';
        cin>>temperatura;
        temperatura = (temperatura - 32) * 5/9; // Convertir a Celsius
        cout<<"La temperatura en Celsius es: "<<temperatura<<" C"<<'\n';
    }
    return 0;
}