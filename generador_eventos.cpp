#include <iostream>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Semilla para después generar números aleatorios
    int numero_aleatorio = rand() % 12 + 1; // Genera un numero aleatorio entre 1 y 5
    cout<<"Generando evento aleatorio..." << endl;
    switch (numero_aleatorio) {
        case 1:
            cout << "Evento 1: Extinción de la luz estelar de Aries" << endl;
            break;
        case 2:
            cout << "Evento 2: Ataque del gran cuerno de Tauro" << endl;
            break;
        case 3:
            cout << "Evento 3: Explosión galáctica de Géminis" << endl;
            break;
        case 4:
            cout << "Evento 4: Shekishiki Mekai Ha de Cancer" << endl;
            break;
        case 5:
            cout << "Evento 5: Plasma relámpago de Leo" << endl;
            break;
        case 6:
            cout << "Evento 6: Tesoro del cielo de Virgo" << endl;
            break;
        case 7:
            cout << "Evento 7: Los dragones de Rozan de Libra" << endl;
            break;
        case 8:
            cout << "Evento 8: Aguja escarlata de Escorpio" << endl;
            break;
        case 9:
            cout << "Evento 9: Flecha dorada de Sagitario" << endl;
            break;
        case 10:
            cout << "Evento 10: Excálibur de Capricornio" << endl;
            break;
        case 11:
            cout << "Evento 11: Ejecución Aurora de Acuario" << endl;
            break;
        case 12:
            cout << "Evento 12: Ataque de la Rosa Negra de Piscis" << endl;
            break;
        default:
            cout << "Error al generar el evento" << endl;
    }



}