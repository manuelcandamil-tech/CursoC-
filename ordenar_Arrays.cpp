#include <iostream>

using namespace std;

void ordenar (int arr[], int n){
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){ // Si el elemento actual es mayor que el siguiente, intercambiarlos... Por eso se llama "Bubble Sort" (*1)
                swap(arr[j], arr[j+1]);
            }
        }
    }
}//Si se desea ordenar en orden descendente, simplemente se cambia el signo de comparación a "<" en (*1)

int main(){

    int valores [] = {20,18,11,9,17,1,0,6,7,15,3,2,5,4,8,10,12,13,14,16,19};
    int k = sizeof(valores)/sizeof(valores[0]);

    for (int elemento : valores){
        cout << elemento << " ";
    }
    cout << endl;
    ordenar(valores, k);
    for (int elemento : valores){
        cout << elemento << " ";
    }
    cout << endl;

    return 0;
}