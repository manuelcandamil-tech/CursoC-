#include <iostream> 
#include <ctime>

using namespace std;

void dibujarTablero (char *espacios);
void turnoJugador (char *espacios, char jugador);
void turnoComputadora (char *espacios, char computadora);
bool verificarGanador (char *espacios, char jugador, char computadora);
bool verificarEmpate (char *espacios);

int main(){
    char espacios[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char jugador = 'X';
    char computadora = 'O';
    bool ejecutando = true;
    dibujarTablero(espacios);
    while (ejecutando){
        turnoJugador(espacios, jugador);
        dibujarTablero(espacios);
        turnoComputadora(espacios, computadora);
        dibujarTablero(espacios);
        if (verificarGanador(espacios, jugador, computadora)){
            ejecutando = false;
            break;
        }
        turnoComputadora(espacios, computadora);
        dibujarTablero(espacios);
        if (verificarGanador(espacios, jugador, computadora)){
            cout << "La computadora ha ganado. ¡Inténtalo de nuevo!" << endl;
            break;
        }
        if (verificarEmpate(espacios)){
            cout << "¡Es un empate!" << endl;
            break;
        }
    }

    return 0;
}
void dibujarTablero (char *espacios){
    cout << " " << espacios[0] << " | " << espacios[1] << " | " << espacios[2] << endl;
    cout << "---|---|---" << endl;
    cout << " " << espacios[3] << " | " << espacios[4] << " | " << espacios[5] << endl;
    cout << "---|---|---" << endl;
    cout << " " << espacios[6] << " | " << espacios[7] << " | " << espacios[8] << endl;

}
void turnoJugador (char *espacios, char jugador){
    int posicion;
    cout << "Ingresa la posición (1-9) para colocar tu " << jugador << ": ";
    cin >> posicion;
    while (posicion < 1 || posicion > 9 || espacios[posicion - 1] != ' '){
        cout << "Posición inválida. Por favor, ingresa una posición válida (1-9) que esté vacía: ";
        cin >> posicion;
    
    espacios[posicion - 1] = posicion;
        if (espacios[posicion - 1] != ' '){
            cout << "Posición ocupada. Por favor, elige otra posición." << endl;
        }
        else{
            espacios[posicion - 1] = posicion;
            break;
        }
    }
}
void turnoComputadora (char *espacios, char computadora){
    int posicion;
    srand(time(0));
    while (true){
        int posicion = rand() % 9;
        if (espacios[posicion] == ' '){
            espacios[posicion] = computadora;
            break;
        }   
    }
}
bool verificarGanador (char *espacios, char jugador, char computadora){
    if ((((espacios[0])!=' ') && espacios[0] == jugador && espacios[1] == jugador && espacios[2] == jugador) ||
        ((espacios[3])!=' ') && (espacios[3] == jugador && espacios[4] == jugador && espacios[5] == jugador) ||
        ((espacios[6])!=' ') && (espacios[6] == jugador && espacios[7] == jugador && espacios[8] == jugador) ||
        ((espacios[0])!=' ') && (espacios[0] == jugador && espacios[3] == jugador && espacios[6] == jugador) ||
        ((espacios[1])!=' ') && (espacios[1] == jugador && espacios[4] == jugador && espacios[7] == jugador) ||
        ((espacios[2])!=' ') && (espacios[2] == jugador && espacios[5] == jugador && espacios[8] == jugador) ||
        ((espacios[0])!=' ') && (espacios[0] == jugador && espacios[4] == jugador && espacios[8] == jugador) ||
        ((espacios[4])!=' ') && (espacios[2] == jugador && espacios[4] == jugador && espacios[6] == jugador)){
            cout << "¡Felicidades! Has ganado." << endl;
            return true;
    }
     if (((espacios[0])!=' ') && (espacios[0] == computadora && espacios[1] == computadora && espacios[2] == computadora) ||
        ((espacios[3])!=' ') && (espacios[3] == computadora && espacios[4] == computadora && espacios[5] == computadora) ||
        ((espacios[6])!=' ') && (espacios[6] == computadora && espacios[7] == computadora && espacios[8] == computadora) ||
        ((espacios[0])!=' ') && (espacios[0] == computadora && espacios[3] == computadora && espacios[6] == computadora) ||
        ((espacios[1])!=' ') && (espacios[1] == computadora && espacios[4] == computadora && espacios[7] == computadora) ||
        ((espacios[2])!=' ') && (espacios[2] == computadora && espacios[5] == computadora && espacios[8] == computadora) ||
        ((espacios[0])!=' ') && (espacios[0] == computadora && espacios[4] == computadora && espacios[8] == computadora) ||
        ((espacios[2])!=' ') && (espacios[2] == computadora && espacios[4] == computadora && espacios[6] == computadora)){
            cout << "La computadora ha ganado. ¡Inténtalo de nuevo!" << endl;
            return true;
    }

    return 0;
}
bool verificarEmpate (char *espacios){
    for int i = 0; i < 9; i++){
        if (espacios[i] == ' '){
            return false;
        }
    }
    return true;
}