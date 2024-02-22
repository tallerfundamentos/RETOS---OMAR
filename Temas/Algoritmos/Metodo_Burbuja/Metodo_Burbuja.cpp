#include <iostream>
using namespace std;

// Función para ordenar un array utilizando el algoritmo de Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Compara elementos adyacentes y los intercambia si están en el orden incorrecto
            
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
            
            /*if (arr[j] > arr[j + 1]) {
                // Intercambia los elementos sin utilizar la función swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }*/
        }
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Llama a la función bubbleSort para ordenar el array
    bubbleSort(arr, n);

    cout << "Array ordenado: ";
    // Imprime el array ordenado
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
