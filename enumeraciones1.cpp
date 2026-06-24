#include <iostream>

using namespace std;

enum dia {Lunes = 1, Martes = 2, Miercoles = 3, Jueves = 4, Viernes = 5, Sabado = 6, Domingo = 7};

int main(){
    dia valor = Miercoles;
    switch (valor){
        case 1 : 
            cout<<"El día es Lunes";
            break;
        case 2 : 
            cout<<"El día es Martes"<<endl;
            break;
        case 3 :
            cout<<"El día es Miércoles"<<endl;
            break;
        case 4 : 
            cout<<"El día es Jueves"<<endl;
            break;
        case 5 : 
            cout<<"El día es Viernes"<<endl;
            break;
        case 6 : 
            cout<<"El día es Sábado"<<endl;
            break;
        case 7 : 
            cout<<"El día es Domingo"<<endl;
            break;
    }
    
    return 0;
}