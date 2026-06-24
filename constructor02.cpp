#include <iostream>

using namespace std;

class vehiculo{
    public :
        string marca;
        string modelo;
        string color;
        int año;

        vehiculo(string ma, string mo, string co, int y){
            marca = ma;
            modelo = mo;
            color = co;
            año = y;

        }
};

int main(){
    vehiculo auto1("Chevy","Corvette","Azul", 1974);
    cout<<auto1.marca<<endl;
    cout<<auto1.modelo<<endl;
    cout<<auto1.color<<endl;
    cout<<auto1.año<<endl;
    return 0;
}