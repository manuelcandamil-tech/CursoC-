#include <iostream>

using namespace std;

class Animal {
    public : 
        bool vivo = true;
        void comer(){
            cout<<"Comiendo...!\n";
        }
};

class Perro : public Animal{
    public :
        void ladrar(){
            cout<<"ladrando...\n";
        }

};

class Gato : public Animal{
    public :
        void maullar(){
            cout<<"maullando...\n";
        }

};

int main(){

    Perro perro1;
    Gato gato1;

    cout<<"Perro:\n";
    cout<<perro1.vivo<<endl;
    perro1.comer();
    perro1.ladrar();

    cout<<"Gato:\n ";
    cout<<gato1.vivo<<endl;
    gato1.comer();
    gato1.maullar();

    return 0;
}