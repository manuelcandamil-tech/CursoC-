#include <iostream>

using namespace std;

int main(){

    string nombre = "Manuel";
    string apellido = "";
    string apodo = "Tito";
    int P = 2;


    cout <<"El nombre es: " << nombre <<" y tiene una longitud de " << nombre.length() << " caracteres." << endl;
    cout <<"El nombre es: " << nombre <<" y tiene una longitud de " << nombre.size() << " caracteres." << endl;
    cout <<"El appellido está vacio? " << (apellido.empty() ? "Sí" : "No") << endl;
    apodo.clear();
    cout <<"El apodo está vacio? " << (apodo.empty() ? "Sí" : "No") << endl;
    apodo.append("Toto");
    cout <<"El apodo ahora es: " << apodo << endl;
    cout <<"En la posición " << P << " se encuentra el caracter: " << nombre.at(P) << endl;
    nombre.insert(6, " Candamil");
    cout <<"El nombre completo es: " << nombre << endl;
    //variable.find siempre va a encontrar la primer palabra que coincida. Si hay mas, va a devolver la posicion de la primera.
    cout <<"El apellido comienza en la posicion: "<< nombre.find("Candamil") << endl;
    nombre.erase(7, 8);//El primer numero es la posicion de inicio, el segundo numero es la cantidad de caracteres a eliminar.
                       //Poniendo el valor (-1) en el segundo numero, se eliminará todo lo que haya después 
                       //de la posición de inicio.
    cout <<"El nombre después de eliminar el apellido es: " << nombre << endl;


    return 0;
}