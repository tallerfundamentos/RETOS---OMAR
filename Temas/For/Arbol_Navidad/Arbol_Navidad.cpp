#include <iostream>
using namespace std;

int main() {
    int altura = 5; // Altura del árbol

    // Imprimir la parte superior del árbol
    for (int i = 0; i < altura; ++i) { // Loop para cada fila del árbol
        // Imprimir espacios en blanco para la alineación
        for (int j = 0; j < altura - i - 1; ++j) {
            cout << " ";
        }
        // Imprimir asteriscos para la parte superior del árbol
        for (int k = 0; k < 2 * i + 1; ++k) {
            cout << "*";
        }
        cout << endl; // Ir a la siguiente línea después de imprimir una fila
    }

    // Imprimir el tronco del árbol
    for (int i = 0; i < altura / 3; ++i) { // El tronco es aproximadamente un tercio de la altura total
        // Imprimir espacios en blanco para alinear el tronco con el árbol
        for (int j = 0; j < altura - 1; ++j) {
            cout << " ";
        }
        cout << "*" << endl; // Imprimir el tronco (una sola estrella)
    }

    return 0;
}
