#include <iostream>

using namespace std;

class pizzas {
    public :
        string ingrediente1;
        string ingrediente2;
        string ingrediente3;
    
    pizzas(string ing1){
        ingrediente1 = ing1;
    };
    pizzas (string ing1, string ing2){
        ingrediente1 = ing1;
        ingrediente2 = ing2;
    };
    pizzas (string ing1, string ing2, string ing3){
        ingrediente1 = ing1;
        ingrediente2 = ing2;
        ingrediente3 = ing3;
    };
    pizzas(){
    };//En este constructor no se pasan ningun argumento. Es para cuando no se desea pasar ningun ingrediente.

};

int main(){
    pizzas pizza1("anchoas");
    pizzas pizza2("ajo","perejil");
    pizzas pizza3("morron","ananá","azúcar mascabo");
    pizzas pizza4;
    cout<<"ingredientes pizza 1: "<<pizza1.ingrediente1<<endl;
    cout<<"ingredientes pizza 2: "<<pizza2.ingrediente1<<", "<<pizza2.ingrediente2<<endl;
    cout<<"ingredientes pizza 3: "<<pizza3.ingrediente1<<", "<<pizza3.ingrediente2<<" y "<<pizza3.ingrediente3<<endl;

    return 0;
}