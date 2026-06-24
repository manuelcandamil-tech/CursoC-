#include <iostream>

using namespace std;

int main(){

    int nota=0;
    bool comida = 0;
    cout << "Ingrese la nota del estudiante: ";
    cin >> nota;
    
    nota>= 6 ? cout<< "El estudiante ha aprobado." << endl : cout << "El estudiante ha fallado." << endl;

    //La estructura para utilizar el operador ternario es la siguiente:
    //condicion ? valor_si_verdadero : valor_si_falso;
 
    comida==true ? cout << "La comida está lista." << endl : cout << "La comida no está lista." << endl;

    //En el caso de no poner ningun valor a evaluar, el 0 es consiederado falso y el 1 es considerado verdadero...

    nota%2 ? cout << "La nota es impar." << endl : cout << "La nota es par." << endl;

    return 0;
}