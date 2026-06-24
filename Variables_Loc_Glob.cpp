#include <iostream>

int varGlobal =314;
int miNum = 18;

using namespace std;

void mostrarNum(){

    int miNum =5;
    int varLocal = 200;
    cout <<"Mi variable local es de: " << varLocal << '\n';// Las variables locales tienen prioridad por sobre las globales. Por lo que si existen
                                                           // dos o más bariables con el mismo nombre, sólo se muestran las locales.
    cout <<"La variable Gllobal tiene un valor de: " << varGlobal << '\n';
    cout << miNum << '\n';
    cout << ::miNum << '\n';//Poniendo el simbolo de  :: le da prioridad a la variable Global y es utilizada la variable global. Esto es cuando
                            //exsiten un mismo nombre 2 variables con el mismo nombre (tanto a nivel global como a nivel local)


}

int main(){

    int varLocal = 100;
    int miNum=8;
    cout <<"Mi variable local es de: " << varLocal << varGlobal << '\n';
    cout <<"Valor de la variable global es de: " << varGlobal << '\n';
    cout << miNum<<'\n';
    cout << ::miNum <<'\n';

    cin.get();

    mostrarNum();

    cin.ignore();
    cin.get();
    system("clear");



    return 0;
}