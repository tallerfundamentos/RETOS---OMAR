#include <iostream>

using namespace std;

int x;
int y;

int main() {

    cout << "Ingresar x: " << endl;
    cin >> x;
    cout << "Ingresar y: " << endl;
    cin >> y;
    
    cout << "Suma: " << x + y << endl; 
    cout << "Resta: " << x - y << endl;
    cout << "Multiplicacion: " << x * y << endl;
    cout << "Division: " << x / y << endl;

    return 0;
}