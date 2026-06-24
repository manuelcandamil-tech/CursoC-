# include <iostream>
using namespace std;

string concatenacion (string a,string b){
    return a + " " + b;
}

int main(){
    string nombre, apellido, completo;
    cout <<"Ingrese nombre: ";
    cin >> nombre;
    cout << "Ingrese apellido: ";
    cin >> apellido;
    completo = concatenacion(nombre,apellido);
    cout <<"Hola "<< completo <<'\n';
    cin.ignore();
    cin.get();
    system("clear");

    return 0;

}