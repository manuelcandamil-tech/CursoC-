#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    
    int edad = 0;
    cout << "Ingrese su edad ";
    cin >> edad;

    if(edad >= 100){
        cout << "Es demasiado mayor para ingresar al sitio... La promosion no esta disponible" << endl;
    }else if(edad < 0){
        cout << "Edad no valida" << endl;
    }
    else if(edad >= 18){
        cout << "Es mayor de edad" << endl;
    }
    else{
        cout << "Es menor de edad" << endl;
    }

    return 0;
}