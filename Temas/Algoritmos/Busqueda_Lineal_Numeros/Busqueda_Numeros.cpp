#include <iostream>
using namespace std;

// Función de búsqueda lineal
int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;  // Retorna la posición si se encuentra el elemento
        }
    }
    return -1;  // Retorna -1 si el elemento no se encuentra
}

int main() {
    // Definición del array
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);  // Calcula la longitud del array
    int x = 12;  // Elemento a buscar

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
