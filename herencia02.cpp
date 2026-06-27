#include <iostream>

using namespace std;

class Forma{
    public : 
        double area;
        double volumen;
};

class Cubo : public Forma{
    public :
        double lado;
        Cubo (double l){
            this->lado = l;
            this->area = (lado*lado)*6;
            this->volumen = lado*lado*lado;
        }

};

class Cilindro : public Forma{
    public : 
        double radio;
        Cilindro (double r){
            this->radio = r;
            this->area = 4*3.14 *radio * radio;
            this->volumen = (4.0/3.0)*3.14*radio*radio*radio;
        }

};

int main(){
    Cubo cubo1(20);
    Cilindro esfera1(15);

    cout<<"El área del cubo es de: "<<cubo1.area<<" cm2s"<<endl;
    cout<<"El volumem del cubo es de: "<<cubo1.volumen<<" cm3"<<endl;
    cout<<"El área de la esfera es de: "<<esfera1.area<<"cm2\n";
    cout<<"El volúmen de la esfera es de: "<<esfera1.volumen<<"cm3\n";
    cin.get();
    system("clear");

    return 0;
}