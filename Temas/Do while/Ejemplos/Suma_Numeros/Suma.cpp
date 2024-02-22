#include <iostream>
using namespace std;

int numero;
int suma = 0;
char continuar;

int main() {
    // Bucle que solicita al usuario ingresar números y los suma
    do {
        cout << "Ingrese un número: ";
        cin >> numero;
        suma += numero;

        // Pregunta al usuario si desea ingresar otro número
        cout << "¿Desea ingresar otro número? (si/no): ";
        cin >> continuar;
    } while (continuar == 'si' || continuar == 'Si'); // Continuar mientras el usuario lo indique

    // Imprime la suma de los números ingresados
    cout << "La suma de los números ingresados es: " << suma << endl;

    return 0;
}
