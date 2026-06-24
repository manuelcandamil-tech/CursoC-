#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

char eleccionUsuario(){
    char eleccion;
    cout << "Elige tu jugada: (P)iedra, (A)papel, (T)ijera: ";
    cin >> eleccion;
    eleccion = toupper(eleccion); // Convertir a mayúscula para facilitar la comparación
    while (eleccion != 'P' && eleccion != 'A' && eleccion != 'T') {
        cout << "Entrada inválida. Por favor, elige (P)iedra, (A)papel, o (T)ijera: ";
        cin >> eleccion;
        eleccion = toupper(eleccion);
    }
    return eleccion;
}

char eleccionComputadora(){
    char opciones[3] = {'P', 'A', 'T'};
    int indice = rand() % 3; // Generar un número aleatorio entre 0 y 2
    return opciones[indice];
}

void mostrarResultado(char usuario, char computadora){
    cout << "Tu elección: " << usuario << " - Computadora: " << computadora << endl;
    if (usuario == computadora) {
        cout << "¡Empate!" << endl;
    } else if ((usuario == 'P' && computadora == 'T') ||
               (usuario == 'A' && computadora == 'P') ||
               (usuario == 'T' && computadora == 'A')) {
        cout << "¡Ganaste!" << endl;
    } else {
        cout << "¡Perdiste!" << endl;
    }
}

int main(){
    char usuario, computadora, opcion;

    do{
        cout << "¿Quieres jugar? (S/N): ";
        cin >> opcion;
        opcion = toupper(opcion);

        if (opcion != 'S' && opcion != 'N') {
            cout << "Entrada inválida. Por favor, ingresa S para sí o N para no." << endl;
        }
        if (opcion == 'N') {
            cout << "¡Gracias por jugar!" << endl;
            break;
        }else {
            usuario = eleccionUsuario();
            computadora = eleccionComputadora();
            mostrarResultado(usuario, computadora);
            }
        }while(opcion != 'S');//fin do-while

    return 0;
}