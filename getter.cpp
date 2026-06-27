#include <iostream>

using namespace std;

class Estufas{
    private:
        float temperatura = 10;
    public:
        Estufas(float temperatura){
            setTemperatura(temperatura);
        }
        float getTemperatura(){
            return temperatura;
        }
        void setTemperatura(float temp){
            temperatura = temp;
        }

};

int main(){
    Estufas anafe(25);
    cout<<"La estufa esta en: "<<anafe.getTemperatura()<<"º grados\n'";

    return 0;
}