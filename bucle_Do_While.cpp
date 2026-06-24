#include <iostream>

using namespace std;

int main(){
    int num=0;

    do{
        system("clear");//En Windows se utiliza system("cls");
        cout <<"Ingrese un número positivo: ";
        cin >> num;
    }while(num <= 0);

    cout <<"El número ingresado es: " << num << endl;

    return 0;
}