#include <iostream>

using namespace std;

class vehiculo{
    private :
        string marca;
        string modelo;
        string color;
        int año;

    public :
        vehiculo(string ma, string mo, string co, int y){
            marca = ma;
            modelo = mo;
            color = co;
            año = y;

        }
};

int main(){
    vehiculo auto1("Chevy","Corvette","Azul", 1974);
    vehiculo auto2("Ford","Focus","Azul",2027);
    //cout<<auto1.marca<<endl;
    //cout<<auto1.modelo<<endl;
    //cout<<auto1.color<<endl;
    //cout<<auto1.año<<endl;
    //cout<<auto2.marca<<endl;
    //cout<<auto2.modelo<<endl;
    //cout<<auto2.color<<endl;
    //cout<<auto2.año<<endl;
    return 0;
}
/*
Al poner en privado los tipos de datos, y en publico los constructores, no se pueden acceder a ellos para poder mostrar
pero si se puede trabajar on ellos para asignarles valores
*/