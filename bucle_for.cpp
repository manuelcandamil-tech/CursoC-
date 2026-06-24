#include <iostream>

using namespace std;

int main(){

    for (int i = 1; i <=10; i++){
        cout << string(10 - i, ' ') << i << endl;
    }
    for (int i = 1; i<=10; i++){
        cout << string(10 - i, ' ') << string(i *2, '*') << endl;
    }

    return 0;
}