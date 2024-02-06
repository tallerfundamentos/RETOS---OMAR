#include <iostream>

using namespace std;

int main() {
    int numero;
    int suma = 0;
    char continuar;

    // Bucle que solicita al usuario ingresar números y los suma
    do {
        cout << "Ingrese un número: ";
        cin >> numero;
        suma += numero;

        // Pregunta al usuario si desea ingresar otro número
        cout << "¿Desea ingresar otro número? (s/n): ";
        cin >> continuar;
    } while (continuar == 's' || continuar == 'S'); // Continuar mientras el usuario lo indique

    // Imprime la suma de los números ingresados
    cout << "La suma de los números ingresados es: " << suma << endl;

    return 0;
}
