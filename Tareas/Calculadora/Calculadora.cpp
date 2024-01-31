#include <iostream>
using namespace std;

// Declaracion de variables
int x,y;

// Programa para imprimir operaciones basicas con variables
int main() {

    //Pedir datos al usuario
    cout << "Ingresar x: " << endl;
    cin >> x;
    
    cout << "Ingresar y: " << endl;
    cin >> y;
    
    //Imprimir el resultado en consola
    cout << "Suma: " << x + y << endl; 
    cout << "Resta: " << x - y << endl;
    cout << "Multiplicacion: " << x * y << endl;

    //Establecer un condicional si se divide por 0
    if(y != 0) {
        cout << "Division: " << x / y << endl;
    } else {
        cout << "Division: No se puede dividir por cero." << endl;
    }

    //Fin del programa
    return 0;
}