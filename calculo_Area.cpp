# include <iostream>

using namespace std;

double areaCuadrado (double lado){
    return lado*lado*lado;
}

double volumenCubo (double lado){
    return lado*lado*lado;
}


int main (){
    double longitud, area, volumen;
    
    cout << "Ingrese el valor del lado: ";
    cin >> longitud;
    area = areaCuadrado(longitud);
    volumen = volumenCubo(longitud);
    cout << "El valor del área es de: " << area<< " cm² \n";
    cout << "El volúmen del cubo es de: " << volumen<< "cm³ \n";
    cin.ignore();
    cin.get();
    system("clear");

    return 0;

}