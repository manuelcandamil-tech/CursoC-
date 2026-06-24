#include <iostream>

using namespace std;

class estudiantes{
    public :
        string nombre;
        string apellido;
        int edad;
        float promedio;

        estudiantes(string n, string a, int e, float p){
            nombre = n;
            apellido = a;
            edad = e;
            promedio = p;
        }
};

int main(){
    estudiantes alumno1("Manuel","Candamil",41,7.42);
    cout<<alumno1.nombre<<endl;
    cout<<alumno1.apellido<<endl;
    cout<<alumno1.edad<<endl;
    cout<<alumno1.promedio<<endl;
    return 0;
}