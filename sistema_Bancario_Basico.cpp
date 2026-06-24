#include <iostream>
#include <iomanip>
#include <limits>// Se incluye la biblioteca <limits> para usar numeric_limits, que ayuda a manejar entradas inválidas. Se utiliza para validar la entrada de 
                 //numeros en la parte de opciones en el bloque de del código principal (Buscar Código 477).

using namespace std;

void mostrarSaldo(float monto){
    cout << "Su balance actual es de: $" << fixed << setprecision(2) << monto << '\n';
    //Con setprecision(2) se muestra el monto con dos decimales, y con fixed se asegura que se muestren los ceros después del punto decimal.
    //con fixed se asegura que se muestren los ceros después del punto decimal, incluso si el monto es un número entero.
    cin.ignore();
    //cin.get() ignora el salto de línea que queda en el buffer después de leer la opción del menú, para que el usuario pueda presionar Enter para continuar.
    cin.get();
    //cin.get() espera a que el usuario presione Enter para continuar, lo que permite que el usuario vea el saldo antes de que la pantalla se limpie.
    system("clear");
    //system("clear") limpia la pantalla después de que el usuario presiona Enter, para que el menú se muestre de nuevo sin el saldo anterior.

}// Fin de Voud mostrarSaldo

double depositarDinero(float monto){
    float deposito=0.0;
    cout << "Ingrese el monto a depositar: $";
    cin >> deposito;
    if (deposito < 0){
        cout << "No se puede depositar un monto negativo. Intente de nuevo." << '\n';
        return 0;
    }else{
        return deposito;
    }

}//fin de double depositarDinero

double retirarDinero(float monto){
    float retiro=0.0;
    cout << "Ingrese el monto a retirar: $";
    cin >> retiro;
    if (retiro < 0){
        cout << "No se puede retirar un monto negativo. Intente de nuevo." << '\n';
        return 0;
    }else if (retiro > monto){
        cout << "Fondos insuficientes. Intente de nuevo." << '\n';
        return 0;
    }else{
        return retiro;
    }
}//fin de double retirarDinero

int main(){

    int opcion;
    float saldo=0.0;
    do{
        cout << " ingrese una opción" << '\n';
        cout << " 1)Mostrar saldo"<< '\n';
        cout << " 2)Depositar dinero"<< '\n';
        cout << " 3)Retirar dinero"<< '\n';
        cout << " 4)Salir"<< '\n';
        cout << "Opción: ";
        cin >> opcion;

        //Código 477:
        //Bloque de código para validar la entrada del usuario, asegurándose de que sea un número entero válido. 
        //Si la entrada no es válida, se limpia el error y se ignora el resto de la línea, mostrando un mensaje de error y 
        //permitiendo al usuario intentar nuevamente.
        
        if (!cin<<opcion){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entrada inválida. Por favor, ingrese un número." << '\n';
            cin.get();
            system("clear");
            continue;
        }

        switch (opcion){
            case 1:
                mostrarSaldo(saldo);
                break;
            case 2:
                saldo += depositarDinero(saldo);
                mostrarSaldo(saldo);
                break;
            case 3:
                saldo -= retirarDinero(saldo);
                mostrarSaldo(saldo);
                break;
            case 4:
                cout<<"Gracias por su visita";
                cin.ignore();
                cin.get();
                system("clear");
                break;
            default:
                cout <<"Seleccione una oción váida por favor \n";
                cin.ignore();
                cin.get();
                system("clear");
        }
    } while(opcion!=4);
    return 0;
}//fin de main
