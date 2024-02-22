#include <iostream>
using namespace std;

int x;

int main() {

    cout << "Ingresa un numero: ";
    cin >> x;

    if(x>0){
        for(int y=0;y<x;y++){
            cout << " " << y << endl;
        }
    } else {
        cout << "No es positivo" << endl;
    }

    return 0;
}