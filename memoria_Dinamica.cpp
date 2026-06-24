#include <iostream>

using namespace std;

int main(){

    int *pNum = NULL;

    pNum = new int;
    *pNum = 546126489;

    cout<<"La direción de memoria es: "<<pNum<<endl;
    cout<<"El valor almacenado es: "<<*pNum<<endl;

    delete pNum;
    pNum = NULL;

    return 0;
}