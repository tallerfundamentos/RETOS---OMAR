#include <iostream>
using namespace std;

/*
La sucesión de Fibonacci es una sucesión infinita de números naturales
Cada elemento de la sucesión es la suma de los dos anteriores
La sucesión comienza con los números 0 y 1
La sucesión puede expandirse al conjunto de los números enteros, de manera 
que la suma de cualesquiera dos números consecutivos es el inmediato siguiente
*/

int fibonacci(int n) {
    if (n <= 1) {
        return n; // Los primeros dos números de Fibonacci son 0 y 1
    }
    // Se suman los dos números anteriores de Fibonacci recursivamente
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n = 10;
    cout << "Serie de Fibonacci hasta " << n << " términos:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
    return 0;
}
