#include <iostream>

using namespace std;

double obtenerTotal(double precios[], int k){
    double total=0.0;
    for(int i=0; i<k; i++){
        total += precios[i];
    }
    return total;
}

int main(){
    double total=0.0;
    double precios[]={19.99, 5.49, 3.50, 12.75, 8.99};
    int k = sizeof(precios) / sizeof(precios[0]);
    total = obtenerTotal(precios, k);
    cout << "El total de los precios es: " << total << endl;

    return 0;
}