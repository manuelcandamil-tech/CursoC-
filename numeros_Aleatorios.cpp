#include <iostream>
#include <ctime>

using namespace std;

int main(){
    srand(time(NULL));

    int numero_aleatorio = rand() % 100 + 1; // Genera un número aleatorio entre 1 y 100

    cout << "El numero aleatorio generado es: " << numero_aleatorio << endl;
    cin.get(); //Hago una pausa hasta que el usuario presione cualquier tecla
    system("clear"); //Limpia la pantalla, en Windows se usa system("cls") y en Linux/Mac se usa system("clear")

    //Generando un valor entre el 1 y el 100
    cout << "Generando un valor Random entre 1 y 100: " << rand() % 100 +1 << endl;
            // El simbolo de % se pone para indicar
            // que el numero aleatorio se va a generar
            // entre 1 y el 100, ya que el numero
            // aleatorio se va a dividir entre 100 
            // y el resultado
    cin.get();
    system("clear");

    return 0;

}