#include <iostream>

using namespace std;

struct estudiantes{
    string nombre;
    double promedio;
    bool inscriptos;
};


int main(){
    estudiantes estudiante1;
    estudiante1.nombre = "Manuel";
    estudiante1.promedio = 8.7;
    estudiante1.inscriptos = true;
    cout<<"El nombre del estudiante es: "<<estudiante1.nombre<<endl;
    cout<<"Su promedio es de: "<<estudiante1.promedio<<endl;
    if (estudiante1.inscriptos == true){
        cout<<"El estudiante "<<estudiante1.nombre<<" está inscripto"<<endl;
    }else{
        cout<<"El estudiante "<<estudiante1.nombre<<" no está inscripto"<<endl;
    }
            


    return 0;
}