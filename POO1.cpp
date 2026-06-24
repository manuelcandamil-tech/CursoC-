#include <iostream>

using namespace std;

class humano {
    public:

    string nombre;
    string apellido;
    string nacionalidad;
    int dni;

    void comer(){
        cout<<"La persona está comiendo!\n";
    }
    void beber(){
        cout<<"La persona está bebiendo!\n";
    }
    void dormir(){
        cout<<"La persona está durmiendo!\n";
    }
};

int main(){
    humano humano1;
    humano1.nombre = "Manuel";
    humano1.apellido = "Candamil";
    humano1.nacionalidad = "Argentino";
    humano1.dni = 31385772;
    humano1.beber();
    humano1.comer();
    humano1.dormir();
    return 0;
}