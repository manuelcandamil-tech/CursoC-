#include <iostream>

using namespace std;

int main() {
    double numero = 8.565;
    int entero = 898;
    //Cuando se asignas cadenas a un arreglo se usan comillas dobles, ya que las comillas simples se utilizan para caracteres individuales.
    string marcas[] = {"Totoya","Kinon","Kanon","Ninnan","Kadillac","Ferrari","Lamborgini","Chevrolet","Dodge","Ford"};
    string nombre = "Manuel";
    //Cuando se asignas caracteres a un arreglose usan comillas simples.
    char letras[] = {'A', 'B', 'C', 'D', 'E'};

    cout << "El tamaño de la variable numero es: " << sizeof(numero) << " bytes" << endl;
    cout << "El tamaño de la variable entero es: " << sizeof(entero) << " bytes" << endl;
    //Para determinar el tamañao de un arreglo de caracteres, se debe usar sizeof(letras) en lugar de sizeof(char), 
    //ya que sizeof(char) siempre devuelve 1 byte, independientemente del tamaño del arreglo.
    cout << "El tamaño de la variable marcas es: " << sizeof(marcas) << " bytes" << endl;
    cout << "El cantidad de elementos en marcas es: " << sizeof(marcas)/sizeof(string) << " elementos" << endl;
    //Para calcular el número de elementos en un arreglo, se divide el tamaño total del arreglo por el tamaño de un solo elemento.
    //Se puede colocar tanto el elemento nro 0 como el tipo de datos del arreglo, ambos métodos son válidos para obtener el tamaño de un solo elemento.
    cout << "El tamaño de la variable nombre es: " << sizeof(nombre) << " bytes" << endl;
    cout << "El tamaño de la variable letras es: " << sizeof(letras) << " bytes" << endl;

    return 0;

}