#include <iostream>

using namespace std;

int main(){

    string Nombres[] = {"Manuel", "Maria", "Jose", "Ana", "Luis"};
    
    for(int i = 0; i < sizeof(Nombres)/sizeof(string); i++){
        cout << Nombres[i] << endl;
    }

    return 0;
}