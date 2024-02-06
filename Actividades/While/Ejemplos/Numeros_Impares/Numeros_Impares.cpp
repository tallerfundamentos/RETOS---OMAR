#include <iostream>
using namespace std;

int main() {
    // Se declara e inicializa la variable 'numero' con el valor 0.
    int numero = 0;

    // Se inicia un bucle 'while' que se ejecutará mientras 'numero' sea menor que 10.
    while (numero < 10) {
        // Se verifica si 'numero' es divisible por 3, es decir, si es impar.
        if (numero % 3 == 0) {
            // Si 'numero' es par, se imprime su valor en la consola seguido de un salto de línea.
            cout << numero << endl;
        }
        // Se incrementa el valor de 'numero' en 1 en cada iteración del bucle.
        numero++;
    }

    // Se devuelve 0 para indicar que el programa se ha ejecutado correctamente.
    return 0;
}