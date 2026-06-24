#include<iostream>

namespace primero{
    int x = 10;
}

namespace segundo{
    int x=20;
}

int main(){
    int x =0;
    std::cout<<"El valor de la variable X en global es: "<<x<<'\n';
    std::cout<<"El valor de la variable X en el namespace primero es: "<<primero::x<<'\n';
    std::cout<<"El valor de la variable X en el namespace segundo es: "<<segundo::x<<'\n';
    return 0;
}