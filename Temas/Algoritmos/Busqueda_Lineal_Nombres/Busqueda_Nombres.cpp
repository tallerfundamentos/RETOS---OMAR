#include <iostream>
#include <string>
using namespace std;

// Función de búsqueda lineal
int linearSearch(string arr[], int n, string x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;  // Retorna la posición si se encuentra el elemento
        }
    }
    return -1;  // Retorna -1 si el elemento no se encuentra
}

int main() {
    // Definición del array de nombres
    string arr[] = {"Omar", "Pablo", "Julio", "Luis"};
    int n = sizeof(arr) / sizeof(arr[0]);  // Calcula la longitud del array
    string x = "Omar";  // Elemento a buscar

    // Llama a la función de búsqueda lineal
    int result = linearSearch(arr, n, x);

    // Imprime el resultado de la búsqueda
    if (result == -1) {
        cout << "Elemento no presente en el array." << endl;
    } else {
        cout << "Elemento encontrado en la posición " << result << endl;
    }

    return 0;
}
