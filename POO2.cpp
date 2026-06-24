#include <iostream>

using namespace std;

class Automoviles{
    public:
    string marca = "Generico";
    string modelo = "Base";
    int añoFabricacion = 2010;
    string color = "Blanco";
    void acelerar(){
        cout<<"Pisar el acelerador\n";
    }

    void frenar (){
        cout<<"Pisar el freno\n";
    }
};

int main(){

    Automoviles vehiculo1;

    vehiculo1.marca = "Renault";
    vehiculo1.modelo = "4L";
    vehiculo1.añoFabricacion = 1972;
    vehiculo1.color = "Rojo";

    cout<< vehiculo1.marca<<endl;
    cout<< vehiculo1.modelo<<endl;
    cout<< vehiculo1.añoFabricacion<<endl;
    cout<< vehiculo1.color<<endl;
    vehiculo1.frenar();
    vehiculo1.acelerar();

    return 0;
}