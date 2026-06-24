#include <iostream>

using namespace std;

struct vehiculos {
    string marca;
    string modelo;
    int año;
    
};

void imprimirV(vehiculos &autos){
    cout<<&autos<<endl;
    cout <<"Marca: "<<autos.marca<<endl;
    cout <<"Modelo: "<<autos.modelo<<endl;
    cout <<"Año: "<<autos.año<<endl;
}
void cambiarValor(vehiculos &autos, int año){
    autos.año = año;
}
int main(){
    vehiculos auto1;
    vehiculos auto2;

    auto1.marca = "Toyota";
    auto1.modelo = "Corola";
    auto1.año= 2020;

    auto2.marca = "Chevrolet";
    auto2.modelo = "Camaro";
    auto2.año= 2026;

    cout<<&auto1<<endl;
    imprimirV(auto1);
    cout<<&auto2<<endl;
    imprimirV(auto2);
    cambiarValor(auto2, 2025);
    imprimirV(auto2);
    return 0;
}