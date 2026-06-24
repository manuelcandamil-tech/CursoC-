#include <iostream>
#include <ctime>

using namespace std;

int main(){

    int num;
    int adivinar;
    int intentos=0;

    srand (time(NULL));
    num = rand() % 100 + 1;

    cout <<" =================================" << endl;
    cout <<"# Adivina el número entre 1 y 100 #" << endl;
    cout <<" =================================" << endl;
    
    do{
        cout << "Hola, ingrese un numero entre 1 y 100: ";
        cin >> adivinar;
        intentos++;
        if (adivinar > num){
            cout << "El numero es menor" << endl;
        }else if (adivinar < num){
            cout << "El numero es mayor" << endl;

        }else{
            cout << "Felicidades, adivinaste el numero en " << intentos << " intentos!" << endl;
        }
        cin.ignore();
        cin.get();
        system("clear");
    }while (adivinar != num);


    return 0;
}