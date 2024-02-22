#include <iostream>

using namespace std;

// Función para sumar dos números
void sumarNumeros() {
    double num1, num2;
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    cout << "La suma es: " << num1 + num2 << endl;
}

// Función para restar dos números
void restarNumeros() {
    double num1, num2;
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    cout << "La resta es: " << num1 - num2 << endl;
}

// Función para multiplicar dos números
void multiplicarNumeros() {
    double num1, num2;
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    cout << "El producto es: " << num1 * num2 << endl;
}

// Función para dividir dos números
void dividirNumeros() {
    double num1, num2;
    cout << "Ingrese el dividendo: ";
    cin >> num1;
    cout << "Ingrese el divisor: ";
    cin >> num2;
    if (num2 != 0) {
        cout << "El cociente es: " << num1 / num2 << endl;
    } else {
        cout << "Error: No se puede dividir por cero." << endl;
    }
}

int main() {
    int opcion;
    
    do {
        // Mostrar el menú
        cout << "Menú:" << endl;
        cout << "1. Sumar dos números" << endl;
        cout << "2. Restar dos números" << endl;
        cout << "3. Multiplicar dos números" << endl;
        cout << "4. Dividir dos números" << endl;
        cout << "5. Salir" << endl;
        cout << "Ingrese su opción: ";
        cin >> opcion;
        
        // Realizar la acción correspondiente a la opción seleccionada
        switch (opcion) {
            case 1:
                sumarNumeros();
                break;
            case 2:
                restarNumeros();
                break;
            case 3:
                multiplicarNumeros();
                break;
            case 4:
                dividirNumeros();
                break;
            case 5:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción inválida. Por favor, ingrese un número del 1 al 5." << endl;
        }
        
    } while (opcion != 5);
    
    return 0;
}
